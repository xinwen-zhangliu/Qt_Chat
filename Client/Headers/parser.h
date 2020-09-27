#ifndef PARSER_H
#define PARSER_H



#include <QObject>
#include <QJsonObject>
#include <QJsonArray>

class ChatClient;

class Parser : public QObject
{
    Q_OBJECT


public:
    explicit Parser(QObject* parent = nullptr);
public slots:
    void parseJson(const QJsonObject &json);
signals:
    void loggedIn();
    void loginError(const QString &reason);
    void publicMessageReceived(const QString &sender, const QString &text);
    void userJoined(const QString &username);
    void userLeft(const QString &username);
    void receivedUserList(const QJsonArray &list);
    void sendJson(const QJsonObject &json);
    void newStatus(const QString &username, const int &newStatus);
    void newRoomCreated();
    void errorCreatingRoom(const QString &roomName);

};

#endif // PARSER_H
