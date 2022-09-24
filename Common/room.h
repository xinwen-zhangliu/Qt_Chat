#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QVector>
#include <QString>

class Room : public QObject
{
    Q_OBJECT
public:
    explicit Room(QObject *parent = nullptr, QString roomName = "", QVector<QString>* users = 0);
private:
    QVector<QString> users;
    QString roomName;

public slots:
    void addUser(const QString &username);
    void eliminateUser(const QString &username);
    QVector<QString> getUsers();


};

#endif // ROOM_H
