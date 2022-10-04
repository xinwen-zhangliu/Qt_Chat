#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QVector>
#include <QTcpServer>
#include <QTimer>

#include "../Common/room.h"
#include "Headers/parser.h"

class QThread;
class ServerWorker;
class QJsonObject;
class Parser;


class ChatServer : public  QTcpServer
{
    Q_OBJECT
    Q_DISABLE_COPY(ChatServer)
public:
    explicit ChatServer(QObject *pareant = nullptr);
    ~ChatServer();

protected:
    void incomingConnection(qintptr socketDescriptor) override;
private:
    const int m_idealThreadCount;
    QVector<QThread *> m_availableThreads;
    QVector<int> m_threadsLoad;
    QVector<ServerWorker *> m_clients; //uno por cliente
    QTimer *m_timer;
    QVector<Room *> m_rooms;
    Parser *m_parser;

private slots:

    void broadcastAll(const QJsonObject &message, ServerWorker *exclude);
    void broadcastRoom(const QJsonObject &message, ServerWorker *sender, const QString &roomName);
    void broadcastOne(const QJsonObject &message,ServerWorker *sender, const QString &destination, const QString &operation);
    void jsonReceived(ServerWorker *sender, const QJsonObject &doc);
    void userDisconnected(ServerWorker *sender, int threadIdx);
    void userError(ServerWorker *sender);
    void logFinished();
    void sendPrivateMessage(const QString &destination, const QJsonObject &message);
    void userListRequest(ServerWorker *sender);

    void createRoom(ServerWorker *sender, const QString &roomname);
    void sendRoomMessage(ServerWorker *sender, const QString &roomName, const QString &message);
    void sendOutRoomInvitations(ServerWorker *sender, const QString &roomName, QVector<QString> users);
    void roomUsersRequest(ServerWorker *sender, const QString &roomName);
    void leaveRoom(ServerWorker *sender, const QString &roomName);

    void updateStatus(ServerWorker *sender, const int newStatus);

    void sendConnectedUsers(ServerWorker *sender);
    void sendJson(ServerWorker *destination, const QJsonObject &message);
public slots:
    void stopServer();
private:
    void jsonFromLoggedOut(ServerWorker *sender, const QJsonObject &doc); //check for the identify json
    void jsonFromLoggedIn(ServerWorker *sender, const QJsonObject &doc); //check for other jsons

signals:
    void logMessage(const QString &msg);
    void stopAllClients();

    void parseJson(ServerWorker *sender, const QJsonObject &doc);

};

#endif // CHATSERVER_H
