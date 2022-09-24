#include "Headers/parser.h"
#include "Headers/chatclient.h"

#include <QJsonObject>

Parser::Parser(QObject *parent)
    : QObject(parent)
    , m_chatClient(new ChatClient(this))
{
    connect(m_chatClient, &ChatClient::jsonReceived, this, &Parser::parseJson);
}
void Parser::parseJson(const QJsonObject &json){

}


void Parser::parseIdentify(const QJsonObject &json){

}
