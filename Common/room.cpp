#include "room.h"

Room::Room(QString roomName, QObject *parent)
    : QObject(parent)

{
    this -> m_roomName = roomName;
    //this -> m_users = m_users;
}



QString Room::getRoomName(){
    return this->m_roomName;
}


QVector<QString> Room::getUsers(){
    return this->m_users;
}

void Room::addUser(const QString &username){
    this->m_users.append(username);
}
void Room::addInvitation(const QString &username){
    this->m_invitations.append(username);
}
void Room::deleteUser(const QString &username){
    int index = this->m_users.indexOf(username);
    this->m_users.remove(index);
}
