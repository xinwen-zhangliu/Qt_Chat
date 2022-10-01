#ifndef GROUPCHAT_H
#define GROUPCHAT_H

#include <QObject>

#include <QDialog>
#include <QByteArray>
#include <QMessageBox>


namespace Ui {class GroupChat;}

class GroupChat : public QDialog
{
    Q_OBJECT
public:
    explicit GroupChat( QString roomName,QWidget* parent);
    ~GroupChat();
private:
    Ui::GroupChat* ui;
    QString roomName;
public slots:
    void receivedRoomMessage();
private slots:
    void addUser();
    void getUserList();
    void leaveRoom();
    void sendMessage();
signals:
    void sendRoomMessage(const QString &roomName, const QString &message);


};

#endif // GROUPCHAT_H
