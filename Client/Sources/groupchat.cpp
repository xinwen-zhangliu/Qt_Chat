#include "Headers/groupchat.h"
#include "../ui_groupchatwindow.h"

#include <QJsonObject>
#include <QInputDialog>
#include <QStandardItemModel>
#include <QJsonArray>

/*!
 * \brief GroupChat::GroupChat controller for the groups chat, diplays infomation received from the server
 * \param roomName the name of the room
 * \param parent QObject parent , intances are created in ChatWindow
 */
GroupChat::GroupChat(QString roomName, QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::GroupChat)
    , m_chatModel(new QStandardItemModel(this))
{

    this->roomName = roomName;
    ui->setupUi(this);
    m_chatModel->insertColumn(0);
    ui->chatView->setModel(m_chatModel);
    this->m_isVisible= true;
    ui->sendButton->setEnabled(true);
    ui->chatView->setEnabled(true);

    connect(ui->leaveBtn, &QPushButton::clicked, this, &GroupChat::leaveRoom);
    connect(ui->inviteBtn, &QPushButton::clicked, this, &GroupChat::addUser);
    connect(ui->userListBtn , &QPushButton::clicked, this , &GroupChat::getUserList);
    connect(ui->sendButton, &QPushButton::clicked, this , &GroupChat::sendMessage);


}

GroupChat::~GroupChat(){
    this->m_isVisible= false;
    delete ui;
}

bool GroupChat::getVisibility(){
    return this->m_isVisible;
}
void GroupChat::setVisibility(bool visibility){
    this->m_isVisible= visibility;
}

QString GroupChat::getRoomName(){
    return this->roomName;
}

/*!
 * \brief GroupChat::receivedRoomMessage displays messages received
 * \param sender the sender of the message
 * \param message the text of the message
 */
void GroupChat::receivedRoomMessage(const QString sender, const QString &message){
    int newRow = m_chatModel->rowCount();

        QFont boldFont;
        boldFont.setBold(true);

        m_chatModel->insertRows(newRow, 2);

        m_chatModel->setData(m_chatModel->index(newRow, 0), sender + QLatin1Char(':'));

        m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

        m_chatModel->setData(m_chatModel->index(newRow, 0), boldFont, Qt::FontRole);
        ++newRow;


    m_chatModel->setData(m_chatModel->index(newRow, 0), message);

    m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->chatView->scrollToBottom();

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
    QJsonValue usernameVal = username;
    QJsonArray user = {usernameVal};

   // user.push_back(usernameVal);
    newUser[QStringLiteral("type")] = QStringLiteral("INVITE");
    newUser[QStringLiteral("roomname")] = roomName;
    newUser[QStringLiteral("usernames")] = user;

    emit sendJson(newUser);
}

void GroupChat::sendMessage(){
    QJsonObject message;
    QString messageText = ui->messageEdit->text();
    message[QStringLiteral("type")] = QStringLiteral("ROOM_MESSAGE");
    message[QStringLiteral("roomname")] = roomName;
    message[QStringLiteral("message")]= messageText;


    ui->messageEdit->clear();
    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), messageText);

    m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignRight | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->messageEdit->clear();

    ui->chatView->scrollToBottom();

    emit sendJson(message);


}

void GroupChat::getUserList(){
    QJsonObject getUserListJson;
    getUserListJson[QStringLiteral("type")] =QStringLiteral("ROOM_USERS");
    getUserListJson[QStringLiteral("roomname")] = roomName;

    emit sendJson(getUserListJson);
    emit userListRequest(roomName);

}

void GroupChat::leaveRoom(){
    QJsonObject leaveRoomJson;
    leaveRoomJson[QStringLiteral("type")] = QStringLiteral("LEAVE_ROOM");
    leaveRoomJson[QStringLiteral("roomname")] = roomName;
    emit sendJson(leaveRoomJson);
    emit leavingRoom(this->roomName);
}

/*!
 * \brief GroupChat::userJoined displays a message when a user joins the room
 * \param username the username of the person that joined
 */
void GroupChat::userJoined(const QString &username)
{
    //add it as a message in the public chat
    qDebug() << "group chat user joined";
    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), tr("%1 Joined the Chat").arg(username));

    m_chatModel->setData(m_chatModel->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    m_chatModel->setData(m_chatModel->index(newRow, 0), QBrush(Qt::blue), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();






}

/*!
 * \brief GroupChat::receivedUserList displays the list of active users in the room
 * \param list the list of users
 *
 */
void GroupChat::receivedUserList(const QString &list){
    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), tr("%1 User List: ").arg(list));

    m_chatModel->setData(m_chatModel->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    m_chatModel->setData(m_chatModel->index(newRow, 0), QBrush(Qt::blue), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();
}

/*!
 * \brief GroupChat::userLeft
 * displays notifications for when a user leaves
 * \param username the username of the person that left
 */
void GroupChat::userLeft(const QString &username)
{
    qDebug() << "group chat user left";

    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), tr("%1 Left the Chat").arg(username));

    m_chatModel->setData(m_chatModel->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    m_chatModel->setData(m_chatModel->index(newRow, 0), QBrush(Qt::red), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();



}
