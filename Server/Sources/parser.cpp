#include "Headers/parser.h"

#include <QString>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>

//Parser of Server
/*!
 * \brief Parser::Parser
 * \param parent
 */
Parser::Parser(QObject *parent)
    : QObject{parent}
{

}

/*!
 * \brief Parser::parseJson
 * \param sender
 * \param json
 */
void Parser::parseJson(ServerWorker *sender, const QJsonObject &json){
    const QJsonValue type = json.value(QLatin1String("type"));
    if(type.isNull() || !type.isString()){
        //we ignore and do nothing
        return;
    }

    //PUBLIC MESSAGE
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))==0){
        const QJsonValue username = json.value(QLatin1String("username"));
        const QJsonValue message = json.value(QLatin1String("message"));

        //creamos el json de respuesta que vamos a eviar
        QJsonObject answerMessage;
        answerMessage[QStringLiteral("type")] = QStringLiteral("PUBLIC_MESSAGE_FROM");
        answerMessage[QStringLiteral("username")] = username.toString();
        answerMessage[QStringLiteral("message")] = message.toString();
        emit publicMessage(answerMessage, sender);

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
    if(roomnameVal.isNull() || !roomnameVal.isString())
        return;
    if(type.toString().compare(QLatin1String("NEW_ROOM"))==0){
        emit newRoomRequest(sender, roomnameVal.toString());
    }
    //INVITE
    if(type.toString().compare(QLatin1String("INVITE"))){
         QJsonArray usernameVal = json.value(QLatin1String("usernames")).toArray();
        if(usernameVal.isEmpty())
            return;
        QVector<QString> usernames;
        for(int i =0  ; i<usernameVal.size(); i++){
            usernames.append(usernameVal[i].toString());
        }
        emit invitationsToRoom(sender,usernames,roomnameVal.toString()  );

    }

    if(type.toString().compare(QLatin1String("JOIN_ROOM"))==0){
        emit joinRoomRequest(sender, roomnameVal.toString());
    }

    if(type.toString().compare(QLatin1String("ROOM_USERS"))==0){
        emit roomUsersRequest(sender, roomnameVal.toString());
    }


    if(type.toString().compare(QLatin1String("ROOM_MESSAGE"))==0){
        const QJsonValue message = json.value(QLatin1String("message"));
        if(message.isNull() || !message.isString())
            return;
        emit roomMessage(sender, roomnameVal.toString(), message.toString() );
    }


    if(type.toString().compare(QLatin1String("LEAVE_ROOM"))==0){
        emit leaveRoom(sender, roomnameVal.toString());
    }

}