#ifndef PRIVATECHAT_
#define PRIVATECHAT_HPP

#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QMessageBox>

#include <QDialog>

namespace Ui {
    class PrivateChat;
}

class PrivateChat : public QDialog {
	Q_OBJECT

public:
    explicit PrivateChat( QString chatPartner,QWidget* parent = nullptr);
    ~PrivateChat();

private:
    Ui::PrivateChat* ui;
	QString chatPartner;

signals:
	void closeDialog(QString username);
    void sendPrivateMessage(QString receiver, QString message);
	void sendFile(QByteArray blob, int fileSize, QString receiver, QString sender);

public slots:
    void onReceivedPrivateMessage(QString sender, QString message);
	void onSendMessageButtonClicked();
    QString getChatPartnerName();
};

#endif // PRIVATEMESSAGEDIALOG_HPP
