#include "Headers/serverworker.h"

#include <QString>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>

ServerWorker::ServerWorker(QObject *parent)
    : QObject(parent)
    , m_serverSocket(new QTcpSocket(this))
    , m_status(1)
{

    connect(m_serverSocket, &QTcpSocket::readyRead, this, &ServerWorker::receiveJson);
    connect(m_serverSocket, &QTcpSocket::disconnected, this, &ServerWorker::disconnectedFromClient);
    connect(m_serverSocket, &QAbstractSocket::errorOccurred, this,&ServerWorker::Errors);

#if (QT_VERSION < QT_VERSION_CHECK(6, 0, 0))
    connect(m_serverSocket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &ServerWorker::error);
#else
    connect(m_serverSocket, &QAbstractSocket::errorOccurred, this, &ServerWorker::error);
#endif

}


//according to documentation to handle incomming connection as new QTcpSocket object in another thread you have to pass the socketDescriptor to the other thread
bool ServerWorker::setSocketDescriptor(qintptr socketDescriptor){
    return m_serverSocket -> setSocketDescriptor(socketDescriptor);
}

void ServerWorker::test(){
    qDebug() << "text succesful";
}


void ServerWorker::sendJson(const QJsonObject &json){


    const QByteArray jsonInBA = QJsonDocument(json).toJson(QJsonDocument::Compact);
     QString jsonQS = QString::fromUtf8(jsonInBA);
    const char *stdJson = jsonQS.toStdString().c_str();
    const std::string stdStringJson = jsonQS.toStdString();
    qDebug() << "ServerWorker::sendJson , json being sent = " <<jsonInBA;

    m_serverSocket -> write(stdJson);
    m_serverSocket -> flush();


}


void ServerWorker::setStatus(const int newStatus){
    this->m_status =newStatus;
}
int ServerWorker::getStatus(){
    return this->m_status;
}


void ServerWorker::disconnectFromClient(){
    m_serverSocket -> disconnectFromHost();
}


QString ServerWorker::userName() const {
    m_userNameLock.lockForRead();
    const QString result = m_userName;
    m_userNameLock.unlock();
    return result;
}

QVector<QString> ServerWorker::getRooms(){
    return m_rooms;
}


void ServerWorker::setUserName(const QString  &username){
   m_userNameLock.lockForWrite();
   m_userName = username;
   m_userNameLock.unlock();
}


void ServerWorker::receiveJson(){
    QByteArray data;
    qint64 size = m_serverSocket->bytesAvailable();
    data.resize(size);
   if(size != 0 ){

        data = m_serverSocket->readAll();
   }
   QString jsonQS = QString::fromStdString(data.toStdString());

   QJsonParseError parseError;
   // we try to create a json document with the data we received
   const QJsonDocument jsonDoc = QJsonDocument::fromJson(data, &parseError);
   if (parseError.error == QJsonParseError::NoError) {
       // if the data was indeed valid JSON
       if (jsonDoc.isObject()){ // and is a JSON object
           emit jsonReceived(jsonDoc.object()); // parse the JSON
           //a.~QByteArray();
           qDebug() << "received"+jsonDoc.toJson(QJsonDocument::Compact);

           return;
       }

   }else{

       qDebug() << "ServerWorker::parserJson there was QJsonParseError";
       //we diconnect the user beacuse there if there was a parse error then it's an invalid json
        disconnectFromClient();
       return;
   }
}


void ServerWorker::Errors(QAbstractSocket::SocketError socketError){
    //not the same enumerations as the documentatios but all possible errors will be displayed

    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        qDebug() << "1";
    case QAbstractSocket::ProxyConnectionClosedError:
       qDebug() << "2";
        return;
    case QAbstractSocket::ConnectionRefusedError:
        qDebug() << "3";
        break;
    case QAbstractSocket::ProxyConnectionRefusedError:
       qDebug() << "4  ";
        break;
    case QAbstractSocket::ProxyNotFoundError:
        qDebug() << "5";
        break;
    case QAbstractSocket::HostNotFoundError:
        qDebug() << "6";
        break;
    case QAbstractSocket::SocketAccessError:
        qDebug() << "7";
        break;
    case QAbstractSocket::SocketResourceError:
        qDebug() << "8";
        break;
    case QAbstractSocket::SocketTimeoutError:
        qDebug() << "9";
        return;
    case QAbstractSocket::ProxyConnectionTimeoutError:
        qDebug() << "10";
        break;
    case QAbstractSocket::NetworkError:
        qDebug() << "11";
        break;
    case QAbstractSocket::UnknownSocketError:
        qDebug() << "12";
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        qDebug() << "13";
        break;
    case QAbstractSocket::ProxyAuthenticationRequiredError:
        qDebug() << "14";
        break;
    case QAbstractSocket::ProxyProtocolError:
        qDebug() << "15";
        break;
    case QAbstractSocket::TemporaryError:
            qDebug() << "16";
        break;
    case QAbstractSocket::OperationError:
        qDebug() << "17";
        break;
    case QAbstractSocket::DatagramTooLargeError:
        qDebug() << "18";
       break;
    case QAbstractSocket::SocketAddressNotAvailableError:
        qDebug() << "19";
        break;
    case QAbstractSocket::AddressInUseError:
        qDebug() << "20";
        break;
    case QAbstractSocket::SslHandshakeFailedError:
        qDebug() << "21";
        break;
    case QAbstractSocket::UnfinishedSocketOperationError:
        qDebug() << "22";
        break;
    case QAbstractSocket::SslInternalError:
        qDebug() << "23";
        break;
    case QAbstractSocket::SslInvalidUserDataError:
        qDebug() << "24";
        break;
        return;
    default:
        Q_UNREACHABLE();
    }
}



