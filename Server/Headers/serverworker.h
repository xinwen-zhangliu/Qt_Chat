#ifndef SERVERWORKER_H
#define SERVERWORKER_H

#include "../Common/room.h"


#include <QTcpSocket>
#include <QReadWriteLock>
#include <QObject>
#include <QVector>



class QJsonObject;
/*!
 * \brief The ServerWorker class handles the client socket, and threads
 */
class ServerWorker : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(ServerWorker)
public:
    explicit ServerWorker(QObject *parent = nullptr);
    virtual bool setSocketDescriptor(qintptr socketDescriptor);
    QString userName() const;
    void setUserName(const QString &userName);
    QVector<QString> getRooms();


public slots:
    void disconnectFromClient();
    void sendJson(const QJsonObject &json);
    void Errors(QAbstractSocket::SocketError socketError);

    void setStatus(const int newStatus);
    int getStatus();
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
    mutable QReadWriteLock m_userNameLock;
    int m_status;
    QVector<QString> m_rooms;

};

#endif // SERVERWORKER_H
