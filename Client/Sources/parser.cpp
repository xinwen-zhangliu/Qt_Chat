#include "Headers/parser.h"


#include <QJsonObject>

Parser::Parser(QObject *parent)
    : QObject(parent)
    //, m_chatClient(ChatWindow::getChatClient())
{

}
void Parser::parseJson(const QJsonObject &json){
    qDebug() << "inside Parser::parseJson";
    const QJsonValue typeVal = json.value(QLatin1String("type"));
    const QJsonValue operationVal = json.value(QLatin1String("operation"));
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
                qDebug() << "we're logged in";
                emit loggedIn();
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
    if(typeVal.toString().compare(QLatin1String("INFO"))==0){
        if(!operationVal.isNull() || operationVal.isString()){
            if(operationVal.toString().compare(QLatin1String("NEW_ROOM"))==0){
                const QJsonValue roomnameVal= json.value(QLatin1String("roomname"));
                emit errorCreatingRoom(roomnameVal.toString());
            }else if(operationVal.toString().compare(QLatin1String("IDENTIFY"))==0){
                emit loginError(messageVal.toString());
            }
        }
    }


    const QJsonValue usernameVal = json.value(QLatin1String("username"));


    //PUBLIC_MESSAGE
    if(typeVal.toString().compare(QLatin1String("PUBLIC_MESSAGE"))==0){
        if (usernameVal.isNull() || !usernameVal.isString())
            return;
        if (messageVal.isNull() || !messageVal.isString())
            return;
        emit publicMessageReceived(usernameVal.toString(), messageVal.toString());
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



