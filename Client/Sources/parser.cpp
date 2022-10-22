#include "Headers/parser.h"


#include <QJsonObject>
#include <QJsonDocument>

Parser::Parser(QObject *parent)
    : QObject(parent)
    //, m_chatClient(ChatWindow::getChatClient())
{

}
void Parser::parseJson(const QJsonObject &json){

    const QJsonValue typeVal = json.value(QLatin1String("type"));
    const QJsonValue operationVal = json.value(QLatin1String("operation"));
    qDebug() << "inside Parser::parseJson";
    const QJsonValue messageVal = json.value(QLatin1String("message"));



    if (typeVal.isNull() || !typeVal.isString())
        return;

    //INFO
    if(typeVal.toString().compare(QLatin1String("INFO"))==0){
        qDebug() << "type==INFO";


        if(operationVal.isNull() || !operationVal.isString()){
            if(messageVal.isNull() || !messageVal.isString()){
                return;
            }


        }



        if(operationVal.toString().compare(QLatin1String("IDENTIFY"))== 0){
            qDebug() << "operation == IDENTIFY";
            qDebug() << messageVal.toString();
            if(messageVal.toString().compare(QLatin1String("success"))==0){
                QJsonValue usernameVal= json.value(QLatin1String("username"));
                qDebug() << "we're logged in";
                emit loggedIn(usernameVal.toString());
            }

        }

        //NEW_ROOM
        if(operationVal.toString().compare(QLatin1String("NEW_ROOM"))== 0){
            if(messageVal.toString().compare(QLatin1String("success"))==0){
                emit newRoomCreated();
            }
        }

    }

    //USER_LIST
    if(typeVal.toString().compare(QLatin1String("USER_LIST"))==0){
        const QJsonArray users = json.value(QLatin1String("usernames")).toArray();

        emit receivedUserList(users);
    }

    //WARNING
    if(typeVal.toString().compare(QLatin1String("WARNING"))==0){
        if(!operationVal.isNull() || operationVal.isString()){
            if(operationVal.toString().compare(QLatin1String("NEW_ROOM"))==0){
                const QJsonValue roomnameVal= json.value(QLatin1String("roomname"));
                emit errorCreatingRoom(roomnameVal.toString());
            }else if(operationVal.toString().compare(QLatin1String("IDENTIFY"))==0){
                emit loginError(messageVal.toString());
            }


        }

        QJsonDocument doc(json);

        QString strJson = QString::fromUtf8(doc.toJson(QJsonDocument::Indented));

        emit showJson(strJson);
    }


    const QJsonValue usernameVal = json.value(QLatin1String("username"));
    const QJsonValue roomNameVal = json.value(QLatin1String("roomname"));

    //INVITATION RECEIVED
    if(typeVal.toString().compare(QLatin1String("INVITATION"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if (messageVal.isNull() || !messageVal.isString())
            return;
        if (roomNameVal.isNull() || !messageVal.isString())
            return;
        qDebug() << "received invitation from " << usernameVal.toString();
        emit invitationReceived(roomNameVal.toString(),  messageVal.toString(), usernameVal.toString());
     }

    //ROOM USER LIST
    if(typeVal.toString().compare(QLatin1String("ROOM_USER_LIST"))==0){
        qDebug() << "received room user list " ;
        const QJsonArray users = json.value(QLatin1String("usernames")).toArray();
        emit receivedRoomUserList( users);
     }

    //USER LEFT ROOM
    if(typeVal.toString().compare(QLatin1String("LEFT_ROOM"))==0){
        if (roomNameVal.isNull() || !roomNameVal.isString())
            return;
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        emit userLeftRoom(roomNameVal.toString(),usernameVal.toString());
     }

    //USER JOINED ROOM
    if(typeVal.toString().compare(QLatin1String("JOINED_ROOM"))==0){
        qDebug() << "parser, someone joined room " << roomNameVal.toString() << "with username" << usernameVal.toString();
        if (usernameVal.isNull() || !roomNameVal.isString())
            return;

        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        qDebug() << "emitting";
        emit userJoinedRoom(roomNameVal.toString(),usernameVal.toString());
     }



    //PUBLIC_MESSAGE
    if(typeVal.toString().compare(QLatin1String("PUBLIC_MESSAGE_FROM"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if (messageVal.isNull() || !messageVal.isString())
            return;
        qDebug() << "received public message";
        emit publicMessageReceived(usernameVal.toString(), messageVal.toString());
     }

    //PRIVATE MESSAGE
    if(typeVal.toString().compare(QLatin1String("MESSAGE_FROM"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if (messageVal.isNull() || !messageVal.isString())
            return;
        qDebug() << "received private message from: " << usernameVal.toString();
        emit privateMessageReceived(usernameVal.toString(), messageVal.toString());
     }

    //ROOM MESSAGE
    if(typeVal.toString().compare(QLatin1String("ROOM_MESSAGE_FROM"))==0){
        QJsonValue roomName = json.value(QLatin1String("roomname"));

        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if (messageVal.isNull() || !messageVal.isString())
            return;
        if (roomName.isNull() || !messageVal.isString())
            return;
        qDebug() << "received room message from: " << usernameVal.toString();
        emit roomMessageReceived(usernameVal.toString(), roomName.toString(), messageVal.toString());
     }

    //NEW_USER
    if(typeVal.toString().compare(QLatin1String("NEW_USER"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;

        emit userJoined(usernameVal.toString());
    }

    //DISCONNECTED
    if(typeVal.toString().compare(QLatin1String("DISCONNECTED"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;

        emit userLeft(usernameVal.toString());
    }

    //NEW_STATUS
    if(typeVal.toString().compare(QLatin1String("NEW_STATUS"))==0){
        const QJsonValue statusVal = json.value(QLatin1String("status"));
        if (statusVal.isNull() || !statusVal.isString())
            return;
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if(statusVal.toString().compare(QLatin1String("ACTIVE"))==0){
            emit newStatus(usernameVal.toString(), 1);
        }else if(statusVal.toString().compare(QLatin1String("AWAY"))==0){
            emit newStatus(usernameVal.toString(), 2);
        }else if(statusVal.toString().compare(QLatin1String("BUSY"))==0){
            emit newStatus(usernameVal.toString(), 3);
        }

    }





}



