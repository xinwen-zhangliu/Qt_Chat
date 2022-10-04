#ifndef CHATWINDOW_H
#define CHATWINDOW_H


#include <QWidget>
#include <QAbstractSocket>
#include <QVector>
#include <QString>
#include <QListWidgetItem>
#include <QQueue>

class ChatClient;
class Parser;
class QStandardItemModel;
class PrivateChat;
class GroupChat;


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
    //QVector<QString> m_privateChats;
    //QVector<QString> m_groupChats;
    QVector<QString> m_selectedUsers;
    Parser *m_parser;
     QQueue<QString> m_rooms;
     QVector<PrivateChat *> m_privateChats;
    QVector<GroupChat *> m_groupChats;
private slots:
    void attemptConnection();
    void attemptLogin(const QString &username);
    void loggedIn(const QString &username);
    void loginFailed(const QString &reason);
    void logJson(const QString &json);
    void publicMessageReceived(const QString &sender, const QString &text);
    void privateMessageReceived(const QString &sender, const QString &message);
    void sendMessage();
    void disconnectedFromServer();
    void userJoined(const QString &username);
    void userLeft(const QString &username);
    void connectedToServer();
    void error(QAbstractSocket::SocketError socketError);
    void createRoom();
    void userListReceived(const QJsonArray &userList);
    void refreshUserList(const QVector<QString> &users);
    void getUserList();

    bool containsPrivateChat(const QString &chatName);


    void privateChatClosed(const QString &chatName);

    void on_clientList_itemClicked(QListWidgetItem *item);
    void on_clientList_itemDoubleClicked(QListWidgetItem *item);
    void addUser(const QString &username);
signals:
    void sendJson(const QJsonObject &json);


    void processTerminated();
    //slots to handle room operations
    void invitationReceived(const QString &sender, const QString &roomName);
    void roomUsers(const QString &roomName, const QVector<QString> &users);
    void roomMessageReceived(const QString &roomName, const QString &sender, const QString &message);



};

#endif // CHATWONDOW_H
