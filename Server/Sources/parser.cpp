#include "Headers/parser.h"
#include "Headers/serverworker.h"

#include <QString>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>

//Parser of Server
/*!
 * \brief Parser::Parser This is the parser class for the server,
 * \param parent only one instances in ChatServer
 */
Parser::Parser(QObject *parent)
    : QObject{parent}
{

}

/*!
 * \brief Parser::parseJson  when ServerWorker receives json it tells ChatServer and chatServer calls parserJson
 * \param sender the sender of the json
 * \param json the json received
 */
void Parser::parseJson(ServerWorker *sender, const QJsonObject &json){
    const QJsonValue type = json.value(QLatin1String("type"));
    if(type.isNull() || !type.isString()){
        //we ignore and do nothing
        return;
    }

    //USERS
    if(type.toString().compare(QLatin1String("USERS"))==0){
        qDebug() << "user list request received";
        emit userListRequest(sender);
    }


    //PUBLIC MESSAGE
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))==0){
        const QJsonValue username = json.value(QLatin1String("username"));
        const QJsonValue message = json.value(QLatin1String("message"));

        //creamos el json de respuesta que vamos a eviar
        QJsonObject answerMessage;
        answerMessage[QStringLiteral("type")] = QStringLiteral("PUBLIC_MESSAGE_FROM");
        answerMessage[QStringLiteral("username")] = sender->userName();
        answerMessage[QStringLiteral("message")] = message.toString();

        emit publicMessage(answerMessage, sender);

    }



    //PRIVATE MESSAGE
    if(type.toString().compare(QLatin1String("MESSAGE"))==0){
        const QJsonValue usernameDestination = json.value(QLatin1String("username"));
        const QJsonValue message = json.value(QLatin1String("message"));


        //json to send to the other person
        QJsonObject answerMessage;
        answerMessage[QStringLiteral("type")] = QStringLiteral("MESSAGE_FROM");
        answerMessage[QStringLiteral("username")] = sender->userName();
        answerMessage[QStringLiteral("message")] = message.toString();
        QString operation = QStringLiteral("MESSAGE");

        emit privateMessage(answerMessage,sender,usernameDestination.toString(),operation);

    }

    //STATUS
    if(type.toString().compare(QLatin1String("STATUS"))==0){
        //1=ACTIVE , 2=AWAY , 3=BUSY
        const QJsonValue newStatus = json.value(QLatin1String("status"));
         if(newStatus.toString().compare(QLatin1String("ACTIVE"))==0){
             emit updateStatus(sender, 1);
         }else if(newStatus.toString().compare(QLatin1String("AWAY"))==0){
             emit updateStatus(sender, 2);
         }else if(newStatus.toString().compare(QLatin1String("BUSY"))==0){
             emit updateStatus(sender, 3);
         }

    }



    //ROOMS
    const QJsonValue roomnameVal = json.value(QLatin1String("roomname"));


    qDebug() << "rooms section in parser";
    if(roomnameVal.isNull() || !roomnameVal.isString())
        return;



    //NEW_ROOM
    if(type.toString().compare(QLatin1String("NEW_ROOM"))==0){
        emit newRoomRequest(sender, roomnameVal.toString());
    }

    //ROOM USERS
    if(type.toString().compare(QLatin1String("ROOM_USERS")) == 0){
        qDebug() << "received roo users request";
        emit roomUsersRequest(sender, roomnameVal.toString());
    }


    //INVITE
    if(type.toString().compare(QLatin1String("INVITE"))==0){
        qDebug() << "parser , INVITE request";
         QJsonArray usernameVal = json.value(QLatin1String("usernames")).toArray();
        if(usernameVal.isEmpty())
            return;


        qDebug() << "received invitations request";
        emit invitationsToRoom(sender,roomnameVal.toString(), usernameVal  );

    }

    //JOIN ROOM REQUEST
    if(type.toString().compare(QLatin1String("JOIN_ROOM"))==0){
        qDebug() << "received JOIN ROOM request";
        emit joinRoomRequest(sender, roomnameVal.toString());
    }





    //ROOM MESSAGE
    if(type.toString().compare(QLatin1String("ROOM_MESSAGE"))==0){
        const QJsonValue message = json.value(QLatin1String("message"));
        if(message.isNull() || !message.isString())
            return;
        emit roomMessage(sender, roomnameVal.toString(), message.toString() );
    }

    //LEAVE ROOM
    if(type.toString().compare(QLatin1String("LEAVE_ROOM"))==0){
        emit leaveRoom(sender, roomnameVal.toString());
    }



}
