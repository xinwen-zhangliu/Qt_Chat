#ifndef PARSER_H
#define PARSER_H


#include <QObject>
#include <QJsonObject>

class QJsonObject;
class ServerWorker;

class Parser : public QObject
{
    Q_OBJECT

public:
    explicit Parser(QObject *parent = nullptr);

public slots:
    void parseJson(ServerWorker *sender,const QJsonObject &json);
private:

signals:
    //void answerBack(ServerWorker *destination, QJsonObject &message); //to answer back to the same sender

    void disconnect(ServerWorker *sender);

    void publicMessage(const QJsonObject &newJson, ServerWorker *sender);
    void privateMessage( const QJsonObject &message,ServerWorker *sender, const QString &destination, const QString &operation);


    void userListRequest(ServerWorker *sender);


    void updateStatus(ServerWorker *sender, const int status);


    void newRoomRequest(ServerWorker *sender, const QString &roomName);//connected to attempCreateRoom in ChatServer
    void invitationsToRoom(ServerWorker *sender, QVector<QString> users, const QString &roomName);
    void roomInvitation(ServerWorker *sender, const QString &destination); //connected to
    void leaveRoom(ServerWorker *sender, const QString &roomName); //connected to leaveRoom in ChatServer
    void roomUsersRequest(ServerWorker *sender, const QString &roomName); //connected to roomUsersRequest
    void roomMessage(ServerWorker *sender,const QString &roomName, const QString &message);
    void joinRoomRequest(ServerWorker *sender, const QString &roomName);




};

#endif // PARSER_H
