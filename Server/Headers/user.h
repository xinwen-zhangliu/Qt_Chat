#ifndef USER_H
#define USER_H
#include "../Common/room.h"
#include <QVector>


class User
{
public:
    User();
    ~User();

private:
    int status; //1 =ACTIVE , 2=AWAY, 3=BUSY
    QVector<Room *> roomsIn;
public:
    QVector<Room *> getRooms();
    void setStatus(const int status);

};

#endif // USER_H
