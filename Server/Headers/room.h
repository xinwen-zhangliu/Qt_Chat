#ifndef ROOM_H
#define ROOM_H

#include <QObject>


class Room : public QObject
{
    Q_OBJECT
public:
    explicit Room(QObject *parent = nullptr);
    //~Room();

public:
    void addUser(const QString *username );
    void deleteUser(const QString *username);
    QVector<QString> getUsers();


private:

};

#endif // ROOM_H
