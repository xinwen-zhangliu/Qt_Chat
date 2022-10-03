#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QString>
#include <QVector>


class Room : public QObject
{
     Q_OBJECT
public:
    explicit Room(QString roomName,  QObject *parent = nullptr);

public slots:
    QString getRoomName();
    QVector<QString> getUsers();

    void addUser(const QString &username);
    void addInvitation(const QString &username);
    void deleteUser(const QString &username);

private:
    QString m_roomName;
    QVector<QString> m_users; //the people that accepted the invitation and were added to the room
    QVector<QString> m_invitations; //people that were invited but didn't join the room

};

#endif // ROOM_H
