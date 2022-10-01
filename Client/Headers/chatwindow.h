#ifndef CHATWINDOW_H
#define CHATWINDOW_H


#include <QWidget>
#include <QAbstractSocket>
#include <QVector>
#include <QString>
#include <QListWidgetItem>


class ChatClient;
class Parser;
class QStandardItemModel;


namespace Ui { class ChatWindow; }


class ChatWindow : public QWidget
{
    Q_OBJECT
    Q_DISABLE_COPY(ChatWindow)
public:
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow();
   ChatClient* getChatClient();

private:
    Ui::ChatWindow *ui;
    ChatClient *m_chatClient;
    QStandardItemModel *m_chatModel;

    QString m_lastUserName;
    QVector<QString> m_privateChats;
    QVector<QString> m_groupChats;
    QVector<QString> m_selectedUsers;
    Parser *m_parser;
    //QVector<PrivateChat>
private slots:
    void attemptConnection();
    void attemptLogin(const QString &username);
    void loggedIn();
    void loginFailed(const QString &reason);
    void logJson(const QString &json);
    void publicMessageReceived(const QString &sender, const QString &text);
    void sendMessage();
    void disconnectedFromServer();
    void userJoined(const QString &username);
    void userLeft(const QString &username);
    void connectedToServer();
    void error(QAbstractSocket::SocketError socketError);
    void createRoom();

    void refreshUserList(const QVector<QString> &users);
    void getUserList();

    void on_clientList_itemClicked(QListWidgetItem *item);
    void on_clientList_itemDoubleClicked(QListWidgetItem *item);
    void addUser(const QString &username);
signals:
    void sendJson(const QJsonObject &json);



    //slots to handle room operations
    void invitationReceived(const QString &sender, const QString &roomName);
    void roomUsers(const QString &roomName, const QVector<QString> &users);
    void roomMessageReceived(const QString &roomName, const QString &sender, const QString &message);



};

#endif // CHATWONDOW_H
