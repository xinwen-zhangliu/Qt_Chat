#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QWidget>
#include <QAbstractSocket>

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
private slots:
    void error(QAbstractSocket::SocketError socketError);


};

#endif // CHATWONDOW_H
