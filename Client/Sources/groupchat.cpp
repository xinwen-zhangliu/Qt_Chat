#include "Headers/groupchat.h"

#include <QJsonObject>

GroupChat::GroupChat(QWidget* parent, QString roomName)
    : QDialog(parent)
    , ui(new Ui::GroupChat)
{

    this->roomName = roomName;
    ui->setupUi(this);

    connect(ui->leaveBtn, &QPushButton::clicked, this, &GroupChat::leaveRoom);
    connect(ui->inviteBtn, &QPushButton::clicked, this &GroupChat::addUser);
    connect(ui->userListBtn , &QPushButton::clicked, this , &GroupChat::leaveRoom);
    connect(ui->sendButton, &QPushButton::clicked, this , &GroupChat::sendMessage);
}

GroupChat::~GroupChat(){
    delete ui;
}


void GroupChat::addUser(){
    const QString username = QInputDialog::getText(
        this
        , tr("Write Username")
        , tr("Username of the person you want to add, please write one at a time, and they must be connected")
        , QLineEdit::Normal
        , QStringLiteral("username")
    );
    if(username.isEmpty())
        return;
    QJsonObject newUser ;
    QJsonArray user;

    QJsonValue usernameVal = QLatin1String(username);
    newUser[QStringLiteral("type")] = QStringLiteral("INVITE");
    newUser[QStringLiteral("roomname")] = roomName;
    newUser[QStringLiteral("usernames")] = user.push_back(usernameVal);

    emit sendJson(newUser);
}

void GroupChat::sendMessage(){
    QJsonObject message;
    QString messageText = ui->messageEdit->toPlainText();
    message[QStringLiteral("type")] = QStringLiteral("ROOM_MESSAGE");
    message[QStringLiteral("roomname")] = roomName;
    message[QStringLiteral("message")]= messageText;


    ui->messageEdit->clear();
    ui->chatView->append(messageText);

    emit sendJson(message);


}

void GroupChat::getUserList(){
    QJsonObject getUserListJson;
    getUserListJson[QStringLiteral("type")] =QStringLiteral("ROOM_USERS");
    getUserListJson[QStringLiteral("roomname")] = roomName;

    emit sendJson(getUserListJson);

}

void GroupChat::leaveRoom(){
    QJsonObject leaveRoomJson;
    leaveRoomJson[QStringLiteral("type")] = QStringLteral("LEAVE_ROOM");
    leaveRoomJson[QStringLiteral("roomname")] = roomName;
    emit sendJson(leaveRoomJson);
}

