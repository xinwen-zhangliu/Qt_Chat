#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QWidget>
#include <QAbstractSocket>
#include <QVector>
#include <QString>

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
private:
    Ui::ChatWindow *ui;
    ChatClient *m_chatClient;
    QStandardItemModel *m_chatModel;
    QString m_lastUserName;
    QVector<QString> connectedClients;
private slots:
    void attempConnection();
    void connectecToServer();
    void attemptLogin(const QString &username);
    void loggedIn();
    void loginFailed(const QString &reason);
    void logJson(const QString &json);

    void publicMessageReceived(const QString &sender, const QString &text);
    void sendMessage();
    void disconnectedFromServer();

    void userJoined(const QString &username);
    void userLeft(const QString &username);
    void displayUserList();
    void showConnected();



    void error(QAbstractSocket::SocketError socketError);


};

#endif // CHATWONDOW_H
