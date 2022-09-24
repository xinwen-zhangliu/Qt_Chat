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


    connect(m_clientSocket, &QTcpSocket::readyRead, this, &ChatClient::onReadyRead);

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

    }
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


void ChatClient::onReadyRead(){
    QByteArray rawText;


    QByteArray data;



    rawText.resize(1023);
    rawText = m_clientSocket->readAll();
    qDebug() << "rawTExt: " << rawText;
    int size = rawText.size();
    qDebug() << "ba size" << size;

    data.append( rawText, size);
    QByteArray newData ;
    newData.append(data, -1);
    qDebug() << data;
    QJsonParseError parseError;
    const QString jsonString= QString::fromUtf8(data);
    newData = jsonString.toUtf8();


    // we try to create a json document with the data we received
    qDebug() << "newData" << newData << "end of new data";
    const QJsonDocument jsonDoc = QJsonDocument::fromJson(newData, &parseError);
    qDebug() << parseError.error;

    if (parseError.error == QJsonParseError::NoError){
        // if the data was indeed valid JSON
        if (jsonDoc.isObject()){ // and is a JSON object
            qDebug() <<"received"+ jsonDoc.toJson(QJsonDocument::Compact) ;

            emit jsonReceived(jsonDoc.object()); // parse the JSON




        }

    }else{

        qDebug() << "there was a parse error in onReadtREad";
        qDebug() << "badJsonDoc received: " + jsonDoc.toJson(QJsonDocument::Compact) ;
        return;
    }
}

