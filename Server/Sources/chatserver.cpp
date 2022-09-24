#include "Headers/chatserver.h"
#include "Headers/serverworker.h"

#include <functional>
#include <QThread>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>
#include <QTimer>
#include <QDebug>


ChatServer::ChatServer(QObject *parent)
    : QTcpServer(parent)
    , m_idealThreadCount(qMax(QThread::idealThreadCount(), 1))
    //depends on how many logical processors we have on the machine, in any case we are going to have a minimum thread count of 1
{
    m_availableThreads.reserve(m_idealThreadCount); //we try to allocate memory to at least the size of idealThreadCount
    m_threadsLoad.reserve(m_idealThreadCount);

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
        connect(worker, &ServerWorker::disconnectedFromClient, this, std::bind(&ChatServer::userDisconnected, this, worker, threadIdx));
        connect(worker, &ServerWorker::error, this, std::bind(&ChatServer::userError, this, worker));
        connect(worker, &ServerWorker::jsonReceived, this, std::bind(&ChatServer::jsonReceived, this, worker, std::placeholders::_1));
        connect(this, &ChatServer::stopAllClients, worker, &ServerWorker::disconnectFromClient);
        m_clients.append(worker);
        emit logMessage(QStringLiteral("New client Connected"));

}


void ChatServer::logFinished(){
    qDebug() << "QThread::finished";
}

void ChatServer::sendJson(ServerWorker *destination, const QJsonObject &message)
{
    Q_ASSERT(destination);
    /*
    QTimer::singleShot(100 , destination, [destination, message](){
        destination->sendJson(message);
    });
    */
    //QMetaObject::invokeMethod(destination, "sendJson", Qt::QueuedConnection, Q_ARG(QJsonObject, message));
    /*
    Q_ASSERT(destination);
    m_timer = new QTimer(this);
    //m_timer -> setInterval(100);
    m_timer -> setSingleShot(true);
    connect(m_timer, &QTimer::timeout, destination, [destination, message](){
        destination->sendJson(message);
    });

    m_timer -> start(100);
    */
    /*
    qDebug()<< "ChatServer::sendJson";
    Q_ASSERT(destination);
    return QTimer::singleShot(2000,Qt::VeryCoarseTimer ,destination, std::bind(&ServerWorker::sendJson, destination, message));
   QTimer::singleShot(700, destination, SLOT(sendJson(message)));
    qDebug() << "After singleshot";
    */
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
    qDebug() << "after broadcast all";
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
        disconnectedMessage[QStringLiteral("type")] = QStringLiteral("userdisconnected");
        disconnectedMessage[QStringLiteral("username")] = userName;
        broadcastAll(disconnectedMessage, nullptr);
        emit logMessage(userName + QLatin1String(" disconnected"));
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

void ChatServer::broadcastRoom(const QJsonObject &message, ServerWorker *sender){

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

}
