#include "room.h"

Room::Room(QString roomName, QVector<QString> users, QObject *parent)
    : QObject(parent)

{
    this -> m_roomName = roomName;
    this -> m_users = m_users;
}

QString Room::getRoomName(){
    return this->m_roomName;
}
