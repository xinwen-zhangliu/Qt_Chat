#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QWidget>
#include "serverworker.h"

namespace Ui {
class ServerWindow;
}
class ChatServer;
class ServerWindow : public QWidget
{
    Q_OBJECT
    Q_DISABLE_COPY(ServerWindow)
public:
    explicit ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();

private:
    Ui::ServerWindow *ui;
    ChatServer *m_chatServer;
    ServerWorker *m_serverWorker;
private slots:
    void toggleStartServer();
    void logMessage(const QString &msg);
};

#endif // SERVERWINDOW_H
