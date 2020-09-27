#include "Headers/privatechat.h"
#include "ui_privatechatwindow.h"

PrivateChat::PrivateChat(QWidget* parent, QString chatPartner)
    : QDialog(parent)
    , ui(new Ui::PrivateChat)

{
	this->chatPartner = chatPartner;
	ui->setupUi(this);


	//connect(client, &Client::receivedPrivateMessage, this, &PrivateMessageDialog::onReceivedPrivateMessage);
    connect(ui->btnSendMessage, &QPushButton::clicked, this, &PrivateChat::onSendMessageButtonClicked);
	//connect(this, &PrivateMessageDialog::sendPrivateMessage, client, &Client::onSendPrivateMessage);

    connect(ui->btnSendFile, &QPushButton::clicked, this, &PrivateChat::onSendFile);
;
}

PrivateChat::~PrivateChat() {
	delete ui;
}

void PrivateChat::onReceivedPrivateMessage(QString sender, QString message) {
    QString output = sender + ": " + message;
	ui->editRecvMessage->append(output);
}

void PrivateChat::onSendMessageButtonClicked() {
	QString message = ui->editSendMessage->toPlainText();
	QString receiver = chatPartner;
    //QString sender = client->getUsername();

	emit sendPrivateMessage(receiver, message, sender);
	ui->editSendMessage->clear();
	QString output = sender + ": " + message;
	ui->editRecvMessage->append(output);
}

QString PrivateChat::getChatPartnerName(){
    return this->chatPartner;
}

