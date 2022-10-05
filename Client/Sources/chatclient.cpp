#include "Headers/chatclient.h"


#include <QJsonDocument>
#include <QJsonObject>
#include  <QJsonValue>
#include <QTcpSocket>
#include <QDataStream>
#include <QJsonParseError>


ChatClient::ChatClient(QObject *parent)
    : QObject(parent)
    , m_clientSocket(new QTcpSocket(this))
    , m_loggedIn(false)
    , m_status(1) //starts as active


{
    connect(m_clientSocket, &QTcpSocket::connected, this, &ChatClient::connected);
    connect(m_clientSocket, &QTcpSocket::disconnected, this, &ChatClient::disconnected);

    //connect(m_parser, &Parser::sendJson, this, &ChatClient::sendJson);


    connect(m_clientSocket, &QTcpSocket::readyRead, this, &ChatClient::onReadyRead);
    //connect(this, &ChatClient::jsonReceived, m_parser, &Parser::parseJson);

#if (QT_VERSION < QT_VERSION_CHECK(6, 0, 0))
    connect(m_clientSocket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &ChatClient::error);
#else
    connect(m_clientSocket, &QAbstractSocket::errorOccurred, this, &ChatClient::error);
#endif

    connect(m_clientSocket, &QTcpSocket::disconnected, this, [this]()->void{m_loggedIn = false;});
}
//slots and signals


void ChatClient::connectToServer(const QHostAddress &address, quint16 port)
{
    m_clientSocket->connectToHost(address, port);
}

void ChatClient::login(const QString &username){
    //check if socket is connected then identify user
    if(m_clientSocket->state() == QAbstractSocket::ConnectedState){
        QDataStream clientStream(m_clientSocket);
        clientStream.setVersion(QDataStream::Qt_5_7);


        //create json we want to send
        QJsonObject identify;
       identify[QStringLiteral("type")] = QStringLiteral("IDENTIFY");
       identify[QStringLiteral("username")] = username;

       sendJson(identify);

       setUsername(username);

    }
}



QString ChatClient::getUsername(){
    return m_username;
}

int ChatClient::getSocketState(){
    QAbstractSocket::SocketState state = m_clientSocket->state();
    switch (state) {
    case QAbstractSocket::UnconnectedState:
        return 0;
    case QAbstractSocket::HostLookupState:
        return 1;
    case QAbstractSocket::ConnectingState:
        return 2;
    case QAbstractSocket::ConnectedState:
        return 3;
    case QAbstractSocket::BoundState:
        return 4;
    case QAbstractSocket::ClosingState:
        return 6;
    default:
        //couldnt get socket state
        return -1;
    }
}

void ChatClient::setUsername(const QString &username){
    qDebug() << "setUsername: " << username;
    this->m_username= username;
}



void ChatClient::sendJson(const QJsonObject &jsonObj){

    const QByteArray jsonInBA = QJsonDocument(jsonObj).toJson(QJsonDocument::Compact);
     QString json = QString::fromUtf8(jsonInBA);
    const char *stdJson = json.toStdString().c_str();
    const std::string stdStringJson = json.toStdString();


    qDebug() << "ChatClient::sendJson , json being sent = " <<stdJson;

    m_clientSocket -> write(stdJson);
}

void ChatClient::disconnectFromHost()
{
    QJsonObject disconnect;
    disconnect[QStringLiteral("type")]= QStringLiteral("DISCONNECT");
    sendJson(disconnect);
    m_clientSocket->disconnectFromHost();
}

void ChatClient::sendPublicMessage(const QString &text){
    if (text.isEmpty())
        return;

    QJsonObject publicMessage;
    publicMessage[QStringLiteral("type")] = QStringLiteral("PUBLIC_MESSAGE");
    publicMessage[QStringLiteral("message")] = text;

    sendJson(publicMessage);

}


void ChatClient::askUserList(){
    QJsonObject users;
   users[QStringLiteral("type")] = QStringLiteral("USERS");
    sendJson(users);
}

void ChatClient::updateStatus(const int &newStatus){
    this -> m_status = newStatus;
}


void ChatClient::onReadyRead(){
    QByteArray rawText;


    QByteArray data;



    rawText.resize(1023);
    rawText = m_clientSocket->readAll();

    int size = rawText.size();
    qDebug() << "rawTExt: " << rawText;
    qDebug() << "Json byte size" << size;


//    if(rawText.contains('\x0')){
//       data.append( rawText, size-1);
//    }else{
//       data.append( rawText, size);
//    }


    QByteArray::iterator iterator = rawText.begin();
    int index = 0;

    while(iterator != data.end()){
        //QChar charInBA = *iterator;
        if(*iterator == '\x0'){
            rawText.remove(index, index);
            break;
        }
        index++;
        iterator++;
    }

    data.append( rawText, rawText.size());
    qDebug() << "data: " << data;
//    if(rawText.endsWith('\x00')){
//
//    }else{
//        data.append( rawText, size);
//    }


    //QByteArray newData ;
    //newData.append(data, -1);
    //qDebug() << data;
    QJsonParseError parseError;
    //const QString jsonString= QString::fromUtf8(data);
    //newData = jsonString.toUtf8();


    // we try to create a json document with the data we received
    //qDebug() << "newData" << newData << "end of new data";




//    for(int i =0; i< newData.size(); i++){
//        if(newData.at(i) == '\x00'){
//            newData.remove(i, i);
//        }
//    }

    const QJsonDocument jsonDoc = QJsonDocument::fromJson(data, &parseError);
    qDebug() <<"Parse Error : "<< parseError.error;

    if (parseError.error == QJsonParseError::NoError){
        // if the data was indeed valid JSON
        if (jsonDoc.isObject()){ // and is a JSON object
            qDebug() <<"Json received: "+ jsonDoc.toJson(QJsonDocument::Compact) ;

            emit  jsonReceived(jsonDoc.object()); // parse the JSON

        }

    }else{

        qDebug() << "there was a parse error in onReadtREad";
        qDebug() << "badJsonDoc received: " + jsonDoc.toJson(QJsonDocument::Compact) ;
        return;
    }
}

