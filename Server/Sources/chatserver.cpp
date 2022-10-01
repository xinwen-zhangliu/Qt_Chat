#include "Headers/chatserver.h"
#include "Headers/serverworker.h"
#include "Headers/parser.h"
#include "../Common/room.h"


#include <functional>
#include <QThread>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>
#include <QTimer>
#include <QDebug>
#include <QJsonArray>


ChatServer::ChatServer(QObject *parent)
    : QTcpServer(parent)
    , m_idealThreadCount(qMax(QThread::idealThreadCount(), 1))
    , m_parser(new Parser(this))
    //depends on how many logical processors we have on the machine, in any case we are going to have a minimum thread count of 1
{
    m_availableThreads.reserve(m_idealThreadCount); //we try to allocate memory to at least the size of idealThreadCount
    m_threadsLoad.reserve(m_idealThreadCount);

    // connecting parser and chatserver signals and slots
    connect(this, &ChatServer::parseJson, m_parser, &Parser::parseJson);
    //connect(m_parser, &Parser::)


}


ChatServer::~ChatServer(){
    //cerramos todos los procesos
    for(QThread *singleThread : m_availableThreads){
        singleThread -> quit();
        singleThread -> wait();
    }
}

void ChatServer::incomingConnection(qintptr socketDescriptor){
    ServerWorker *worker = new ServerWorker;
        if (!worker->setSocketDescriptor(socketDescriptor)) {
            worker->deleteLater();
            return;
        }
        int threadIdx = m_availableThreads.size();
        if (threadIdx < m_idealThreadCount) {
            m_availableThreads.append(new QThread(this));
            m_threadsLoad.append(1);
            //starting the thread we just appended so signals and slots work
            worker->moveToThread(m_availableThreads.at(threadIdx));
            m_availableThreads.last()->start();

        } else {
            //if we are full we add to the one with the least
            threadIdx = std::distance(m_threadsLoad.cbegin(), std::min_element(m_threadsLoad.cbegin(), m_threadsLoad.cend()));
            ++m_threadsLoad[threadIdx];
            worker->moveToThread(m_availableThreads.at(threadIdx));
        }



        connect(m_availableThreads.at(threadIdx), &QThread::finished, worker, &QObject::deleteLater);
        connect(m_availableThreads.at(threadIdx), &QThread::finished, this, &ChatServer::logFinished);
        connect(worker, &ServerWorker::disconnectedFromClient, this, std::bind(&ChatServer::userDisconnected, this, worker, threadIdx), Qt::QueuedConnection);

        connect(worker, &ServerWorker::error, this, std::bind(&ChatServer::userError, this, worker));
        connect(worker, &ServerWorker::jsonReceived, this, std::bind(&ChatServer::jsonReceived, this, worker, std::placeholders::_1));
        connect(this, &ChatServer::stopAllClients, worker, &ServerWorker::disconnectFromClient);
        m_clients.append(worker);
        emit logMessage(QStringLiteral("New client Connected"));

        //we connect the client petitions
        connect(m_parser, &Parser::publicMessage, this, &ChatServer::broadcastAll, Qt::QueuedConnection);

        connect(m_parser, &Parser::userListRequest, this,&ChatServer::userListRequest, Qt::QueuedConnection );

        connect(m_parser, &Parser::updateStatus, this,&ChatServer::updateStatus, Qt::QueuedConnection );

}

void ChatServer::userListRequest(ServerWorker *sender){
    QJsonArray usernames;
    QJsonValue name;
    for(int i =0 ; i <m_clients.size(); i++){
       name = m_clients[i]->userName();
       usernames.append(name);
    }

    QJsonObject userListJson;
    userListJson[QStringLiteral("type")]= QStringLiteral("USER_LIST");
    userListJson[QStringLiteral("usernames")] = usernames;

    sendJson(sender, userListJson);
}

void ChatServer::updateStatus(ServerWorker *sender, const int newStatus){

}


void ChatServer::logFinished(){
    qDebug() << "QThread::finished";
}

void ChatServer::sendJson(ServerWorker *destination, const QJsonObject &message)
{
    Q_ASSERT(destination);

    QTimer::singleShot(2000,Qt::VeryCoarseTimer ,destination, std::bind(&ServerWorker::sendJson, destination, message));
    QTimer::singleShot(0, destination,SLOT( test()));

}


void ChatServer::broadcastAll(const QJsonObject &message, ServerWorker *exclude)
{

    for (ServerWorker *worker : m_clients) {
        Q_ASSERT(worker);
        if (worker == exclude)
            continue;
        sendJson(worker, message);
    }

}


void ChatServer::broadcastRoom(const QJsonObject &message, ServerWorker *sender, const QString &roomName){
    QVector<QString> rooms = sender->getRooms();

    /*
    for (Room roomName : rooms) {
        //sisu nombre es igual al que buscamos , get userlist

    }
    */
    //iteramos sobre los m_clients y si su nombres es igual al de la lista de usuarios then sendJson

   // sendJson(sender, message);
}



void ChatServer::broadcastOne(const QJsonObject &message,ServerWorker *sender, const QString &destination){
    bool userFound = false;
    for (ServerWorker *worker : m_clients) {
        Q_ASSERT(worker);
        if (worker->userName().compare(destination, Qt::CaseSensitive)==0){
            userFound = true;
            sendJson(worker, message);
            break;
        }

    }

    if(!userFound){
        const QJsonObject userNotFoundWarning;


        QString message = QLatin1String("El usuario '") + destination + QLatin1String("' no existe");
        userNotFoundWarning[QStringLiteral("type")] = QStringLiteral("WARNING");
        userNotFoundWarning[QStringLiteral("message")] = message;
        userNotFoundWarning[QStringLiteral("operation")] = QStringLiteral("MESSAGE");
        userNotFoundWarning[QStringLiteral("username")] = destination;
    }

}




void ChatServer::jsonReceived(ServerWorker *sender, const QJsonObject &json)
{
    Q_ASSERT(sender);
    emit logMessage(QLatin1String("JSON received ") + QString::fromUtf8(QJsonDocument(json).toJson()));
    if (sender->userName().isEmpty())
        return jsonFromLoggedOut(sender, json);
    jsonFromLoggedIn(sender, json);
}

void ChatServer::userDisconnected(ServerWorker *sender, int threadIdx)
{
    --m_threadsLoad[threadIdx];
    m_clients.removeAll(sender);
    const QString userName = sender->userName();
    if (!userName.isEmpty()) {
        QJsonObject disconnectedMessage;
        disconnectedMessage[QStringLiteral("type")] = QStringLiteral("DISCONNECTED");
        disconnectedMessage[QStringLiteral("username")] = userName;
        broadcastAll(disconnectedMessage, nullptr);
        emit logMessage(userName + QLatin1String(" disconnected"));
    }

    //also deleteuserfrom rooms userlists and broadcast user left to each room
    QVector<QString> rooms= sender->getRooms();


    for(int i =0 ; i < m_rooms.size();i++){
        QString roomName = m_rooms[i]->getRoomName();
        for(int i = 0; i < rooms.size(); i++){
            if(roomName.compare(rooms[i], Qt::CaseSensitive)==0){
                if(m_rooms[i]->getUsers().size() <= 1){
                    //m_rooms.remove(i);
                    break;
                }

                //otherwise there are other users in the room so we bradcast
                QJsonObject userLeft;
                userLeft[QStringLiteral("type")] = QStringLiteral("LEFT_ROOM");
                userLeft[QStringLiteral("roomname")] = roomName;
                userLeft[QStringLiteral("username")] = sender->userName();
                m_rooms[i]->deleteUser(sender->userName());//deleting person from room
                broadcastRoom(userLeft, sender, roomName); //telling users the person has left the room


            }
        }
    }

    sender->deleteLater();
}



void ChatServer::userError(ServerWorker *sender)
{
    Q_UNUSED(sender)
    emit logMessage(QLatin1String("Error from ") + sender->userName());
}

void ChatServer::stopServer()
{
    emit stopAllClients();
    close();
}


void ChatServer::jsonFromLoggedOut(ServerWorker *sender, const QJsonObject &docObj)
{
    qDebug() << "ChatServer::jsonFromLoggedOut";
    Q_ASSERT(sender);
    const QJsonValue typeVal = docObj.value(QLatin1String("type"));
    if (typeVal.isNull() || !typeVal.isString())
        return;
    if (typeVal.toString().compare(QLatin1String("IDENTIFY"), Qt::CaseInsensitive) != 0)
        return;
    const QJsonValue usernameVal = docObj.value(QLatin1String("username"));
    if (usernameVal.isNull() || !usernameVal.isString())
        return;
    const QString newUserName = usernameVal.toString().simplified();
    if (newUserName.isEmpty())
        return;
    for (ServerWorker *worker : qAsConst(m_clients)) {
        if (worker == sender)
            continue;
        if (worker->userName().compare(newUserName, Qt::CaseInsensitive) == 0) {
            QJsonObject message;
            message[QStringLiteral("type")] = QStringLiteral("WARNING");
            message[QStringLiteral("message")] = QStringLiteral("somethig");
            message[QStringLiteral("reason")] = QStringLiteral("duplicate username");
            sendJson(sender, message);
            return;
        }
    }
    sender->setUserName(newUserName);

    QJsonObject successMessage;
    successMessage[QStringLiteral("type")] = QStringLiteral("INFO");
    successMessage[QStringLiteral("message")] = QStringLiteral("success");
    successMessage[QStringLiteral("operation")]= QStringLiteral("IDENTIFY");
    sendJson(sender, successMessage);

    QJsonObject connectedMessage;
    connectedMessage[QStringLiteral("type")] = QStringLiteral("NEW_USER");
    connectedMessage[QStringLiteral("username")] = newUserName;
    broadcastAll(connectedMessage, sender);
}




void ChatServer::jsonFromLoggedIn(ServerWorker *sender, const QJsonObject &doc){
    emit parserJson(sender, doc);
}
