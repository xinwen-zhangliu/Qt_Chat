#include "Headers/parser.h"

#include <QString>
#include <QJsonValue>
#include <QJsonObject>

Parser::Parser(QObject *parent)
    : QObject{parent}
{

}

void Parser::parseJson(const QJsonObject &json){
    const QJsonValue type = json.value(QLatin1String("type"));
    if(type.isNull() || !type.isString()){
        emit invalidJson();
        return;
    }

    //PUBLIC MESSAGE
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))){
        const QJsonValue username = json.value(QLatin1String("username"));
        const QJsonValue message = json.value(QLatin1String("message"));

        //creamos el json de respuesta que vamos a eviar
        QJsonObject answerMessage;
        answerMessage[QStringLiteral("type")] = QStringlLiteral("PUBLIC_MESSAGE_FROM");
        answerMessage[QStringLiteral("username")] = username.toString();
        answerMessage[QStringLiteral("message")] = message.toString();
        emit publicMessage(answerMessage)

    }


    //STATUS
    if(type.toString().compare(QLatin1String("STATUS"))){
        //1=ACTIVE , 2=AWAY , 3=BUSY
        const QJsonValue newStatus = json.value(Qlatin1String("status"));
         if(newStatus.toString().compare(QLatin1String("ACTIVE"))){
             emit newStatuu(1);
         }else if(newStatus.toString().compare(QLatin1String("AWAY"))){
             emit newStatus(2);
         }else if(newStatus.toString().compare(QLatin1String("BUSY"))){
             emit newStatus(3);
         }

    }

    if(type.toString().compare(QLatin1String("PRIVATE_MESSAGE"))){}
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))){}
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))){}
    if(type.toString().compare(QLatin1String("PUBLIC_MESSAGE"))){}





}
