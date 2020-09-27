#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QString>
#include <QVector>


class Room : public QObject
{
     Q_OBJECT
public:
    explicit Room(QString roomName, QVector<QString> users , QObject *parent = nullptr);

public slots:
    QString getRoomName();
private:
    QString m_roomName;
    QVector<QString> m_users;
};

#endif // ROOM_H
