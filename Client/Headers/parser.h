#ifndef PARSER_H
#define PARSER_H



#include <QObject>
#include <QJsonObject>
#include <QJsonArray>

class ChatClient;

class Parser : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(Parser)

public:
    explicit Parser(QObject *parent = nullptr);
public slots:
    void parseJson(const QJsonObject &json);
signals:
    void identifySuccess();
    void showJson(const QString &text);
    void userJoined(const QString &username);
    void userLeft(const QString &username);
    void receivedUserList(const QJsonArray &list);

private slots:
    void parseIdentify(const QJsonObject &json);

private:
    ChatClient *m_chatClient;

};

#endif // PARSER_H
