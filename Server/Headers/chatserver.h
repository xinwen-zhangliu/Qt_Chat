#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QVector>
#include <QTcpServer>
#include <QTimer>


class QThread;
class ServerWorker;
class QJsonObject;


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
private slots:
    void broadcastAll(const QJsonObject &message, ServerWorker *exclude);
    void broadcastRoom(const QJsonObject &message, ServerWorker *sender);
    void jsonReceived(ServerWorker *sender, const QJsonObject &doc);
    void userDisconnected(ServerWorker *sender, int threadIdx);
    void userError(ServerWorker *sender);
    void logFinished();
public slots:
    void stopServer();
private:
    void jsonFromLoggedOut(ServerWorker *sender, const QJsonObject &doc); //check for the identify json
    void jsonFromLoggedIn(ServerWorker *sender, const QJsonObject &doc); //check for other jsons
    void sendJson(ServerWorker *destination, const QJsonObject &message);
signals:
    void logMessage(const QString &msg);
    void stopAllClients();
};

#endif // CHATSERVER_H
