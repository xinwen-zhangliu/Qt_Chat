#ifndef CHATCLIENT_H
#define CHATCLIENT_H
#include "parser.h"

#include <QObject>

class Parser;

class Chatclient
{
public:
    Chatclient();
private:
    Parser *m_parser;
};

#endif // CHATCLIENT_H
