#include "room.h"

#include <QVector>
#include <QString>

Room::Room(QObject *parent , QString roomName , QVector<QString>* users)
    : QObject(parent)
    , roomName(roomName)
    , users(users)
{

}

void addUser(const QString &username){
    users.append(username);
}

void eliminateUser(const QString &username){
    users.removeAll(username);
}

QVector<QString> getUsers(){

}
