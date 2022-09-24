#ifndef CHATCLIENT_H
#define CHATCLIENT_H



#include <QObject>
#include <QTcpSocket>

class Parser;
class QHostAddress;
class QJsonDocument;

class ChatClient : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(ChatClient)

public:
    explicit ChatClient(QObject *parent = nullptr);
public slots:
     void disconnectFromHost();
     void connectToServer(const QHostAddress &address, quint16 port);
     void login(const QString &username);
     void sendPublicMessage(const QString &text);
     //
     //void createRoom(const QString &groupName, const QVector<QString> users);
     void askUserList();
 private slots:
     void onReadyRead();
     void sendJson(const QJsonObject &jsonOnj);

 signals:
     void connected();
     void loggedIn();
     void loginError(const QString &reason);
     void disconnected();
     void messageReceived(const QString &sender, const QString &text);
     void error(QAbstractSocket::SocketError socketError);
     void userJoined(const QString &username);
     void userLeft(const QString &username);
     void jsonText(const QString &text);
     void showConnected();
     void receivedUserList( const QJsonArray &list);
     void jsonReceived(const QJsonObject &doc);
private:
    QTcpSocket *m_clientSocket;
    int m_status; // 1=ACTIVE,  2=AWAY,  3=BUSY
    bool m_loggedIn;
    Parser *m_parser;

};

#endif // CHATCLIENT_H
