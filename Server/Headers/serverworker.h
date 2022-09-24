#ifndef SERVERWORKER_H
#define SERVERWORKER_H

#include "user.h"


#include <QTcpSocket>
#include <QReadWriteLock>
#include <QObject>
#include <QVector>



class QJsonObject;
class ServerWorker : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(ServerWorker)
public:
    explicit ServerWorker(QObject *parent = nullptr);
    virtual bool setSocketDescriptor(qintptr socketDescriptor);
    QString userName() const;
    void setUserName(const QString &userName);

public slots:
    void disconnectFromClient();
    void sendJson(const QJsonObject &json);
    void Errors(QAbstractSocket::SocketError socketError);
    void test();
private slots:
    void receiveJson();
signals:
    void jsonReceived(const QJsonObject &jsonDoc);
    void disconnectedFromClient();
    void error();
    void timeout();
    void logMessage(const QString &msg);
private:
    QTcpSocket *m_serverSocket;
    QString m_userName;
    User *user;
    mutable QReadWriteLock m_userNameLock;
};

#endif // SERVERWORKER_H
