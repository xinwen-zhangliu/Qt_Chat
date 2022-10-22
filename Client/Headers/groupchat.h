#ifndef GROUPCHAT_H
#define GROUPCHAT_H

#include <QObject>

#include <QDialog>
#include <QByteArray>
#include <QMessageBox>
#include <QStandardItemModel>


namespace Ui {class GroupChat;}

class GroupChat : public QDialog
{
    Q_OBJECT
public:
    explicit GroupChat( QString roomName,QWidget* parent);
    ~GroupChat();
    bool getVisibility();
    QString getRoomName();
    void setVisibility(bool visibility);
private:
    Ui::GroupChat* ui;
    QString roomName;
    QStandardItemModel *m_chatModel;
    bool m_isVisible;
public slots:
    void receivedRoomMessage(const QString sender, const QString &message);
    void userLeft(const QString &username);
    void userJoined(const QString &username);
    void receivedUserList(const QString &list);
private slots:
    void addUser();
    void getUserList();
    void leaveRoom();
    void sendMessage();

signals:

    void sendJson(const QJsonObject &json);
    void leavingRoom(const QString &roomName);
    void userListRequest(const QString &roomName);

};

#endif // GROUPCHAT_H
