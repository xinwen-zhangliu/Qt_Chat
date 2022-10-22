#include "Headers/privatechat.h"
#include "ui_privatechatwindow.h"

#include <QJsonObject>

/*!
 * \brief PrivateChat::PrivateChat this is the controller class for the private chat interface
 * \param chatPartner person you are chatting with
 * \param parent instances are created in ChatWindow
 */
PrivateChat::PrivateChat( QString chatPartner,QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::PrivateChat)

{
    this->chatPartner = chatPartner;
    ui->setupUi(this);
    this->setWindowTitle(chatPartner);

    //connect chatcleint received private message with
    connect(ui->btnSendMessage, &QPushButton::clicked, this, &PrivateChat::onSendMessageButtonClicked);

;
}

PrivateChat::~PrivateChat() {
    emit chatClosed(chatPartner);
	delete ui;
}

void PrivateChat::onReceivedPrivateMessage(QString sender, QString message) {
    qDebug() << "received private message at " << chatPartner;
    QString semicolon = QStringLiteral(": ");
    QString output = sender +semicolon + message;
	ui->editRecvMessage->append(output);
}

void PrivateChat::onSendMessageButtonClicked() {
	QString message = ui->editSendMessage->toPlainText();
	QString receiver = chatPartner;


    QJsonObject messageJson;
    messageJson[QStringLiteral("type")]= QStringLiteral("MESSAGE");
    messageJson[QStringLiteral("username")]= chatPartner;
    messageJson[QStringLiteral("message")]= message;

    emit sendJson(messageJson);
	ui->editSendMessage->clear();
    QString output =  message;
	ui->editRecvMessage->append(output);
}

QString PrivateChat::getChatPartnerName(){
    return this->chatPartner;
}

