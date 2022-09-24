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
    QVector<QString> connectedClients;
    QVector<QString> selectedUsers;
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


    void on_clientList_itemClicked(QListWidgetItem *item);

    void on_clientList_itemDoubleClicked(QListWidgetItem *item);
};

#endif // CHATWONDOW_H
