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
    void invalidJson(ServerWorker *sender);
    void publicMessage(ServerWorker *sender,const QJsonObject &newJson);
    void privateMessage(ServerWorker *sender, const QString *destination);
    void roomMessage(ServerWorker *sender,const QString &roomName, const QString &message);
    void userListRequest();
    void updateStatus(ServerWorker *sender, const int status);
    void newRoom(ServerWorker *sender, const QString *roomName, QVector<QString> users);
    void invitation(ServerWorker *sender, const QString *destination);
    void leaveRoom(ServerWorker *sender);


};

#endif // PARSER_H
