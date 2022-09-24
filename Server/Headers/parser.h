#ifndef PARSER_H
#define PARSER_H

#include <QObject>
#include <QJsonObject>

class QJsonObject;

class Parser : public QObject
{
    Q_OBJECT

public:
    explicit Parser(QObject *parent = nullptr);

public slots:
    void parseJson(const QJsonObject &json);
private:

signals:
    void invalidJson();
    void identifySucess();
    void publicMessage(const QJsonObject &newJson);
    void privateMessage();
    void roomMessage(const QString &user, const QString &message);
    void userListRequest();
    void newStatus(const int &status);

};

#endif // PARSER_H
