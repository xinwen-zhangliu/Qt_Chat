#include "Headers/chatwindow.h"
#include "../ui_mainchatwindow.h"
#include "Headers/chatclient.h"

#include <QStandardItemModel>
#include <QInputDialog>
#include <QMessageBox>
#include <QHostAddress>

ChatWindow::ChatWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatWindow)
    , m_chatClient(new ChatClient(this))
{


}
void ChatWindow::error(QAbstractSocket::SocketError socketError){

    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        QMessageBox::critical(this, tr("Error"), tr("RemoteHostClosedError"));
    case QAbstractSocket::ProxyConnectionClosedError:
        return;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::critical(this, tr("Error"), tr("The host refused the connection"));
        break;
    case QAbstractSocket::ProxyConnectionRefusedError:
        QMessageBox::critical(this, tr("Error"), tr("The proxy refused the connection"));
        break;
    case QAbstractSocket::ProxyNotFoundError:
        QMessageBox::critical(this, tr("Error"), tr("Could not find the proxy"));
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::critical(this, tr("Error"), tr("Could not find the server"));
        break;
    case QAbstractSocket::SocketAccessError:
        QMessageBox::critical(this, tr("Error"), tr("You don't have permissions to execute this operation"));
        break;
    case QAbstractSocket::SocketResourceError:
        QMessageBox::critical(this, tr("Error"), tr("Too many connections opened"));
        break;
    case QAbstractSocket::SocketTimeoutError:
        QMessageBox::warning(this, tr("Error"), tr("Operation timed out"));
        return;
    case QAbstractSocket::ProxyConnectionTimeoutError:
        QMessageBox::critical(this, tr("Error"), tr("Proxy timed out"));
        break;
    case QAbstractSocket::NetworkError:
        QMessageBox::critical(this, tr("Error"), tr("Unable to reach the network"));
        break;
    case QAbstractSocket::UnknownSocketError:
        QMessageBox::critical(this, tr("Error"), tr("An unknown error occured"));
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        QMessageBox::critical(this, tr("Error"), tr("Operation not supported"));
        break;
    case QAbstractSocket::ProxyAuthenticationRequiredError:
        QMessageBox::critical(this, tr("Error"), tr("Your proxy requires authentication"));
        break;
    case QAbstractSocket::ProxyProtocolError:
        QMessageBox::critical(this, tr("Error"), tr("Proxy comunication failed"));
        break;
    case QAbstractSocket::TemporaryError:
        QMessageBox::critical(this, tr("Error"), tr("TemporaryError"));
        break;
    case QAbstractSocket::OperationError:
        QMessageBox::warning(this, tr("Error"), tr("Operation failed, please try again"));
        break;
    case QAbstractSocket::DatagramTooLargeError:
        QMessageBox::critical(this, tr("Error"), tr("DatagramTooLargeError"));
        break;
    case QAbstractSocket::SocketAddressNotAvailableError:
        QMessageBox::critical(this, tr("Error"), tr("SocketAddressNotAvailableError"));
        break;
    case QAbstractSocket::AddressInUseError:
        QMessageBox::critical(this, tr("Error"), tr("AddressInUseError"));
        break;
    case QAbstractSocket::SslHandshakeFailedError:
        QMessageBox::critical(this, tr("Error"), tr("SslHandshakeFailedError"));
        break;
    case QAbstractSocket::UnfinishedSocketOperationError:
        QMessageBox::critical(this, tr("Error"), tr("UnfinishedSocketOperationError"));\
        break;
    case QAbstractSocket::SslInternalError:
        QMessageBox::critical(this, tr("Error"), tr("SslInternalError"));
        break;
    case QAbstractSocket::SslInvalidUserDataError:
        QMessageBox::critical(this, tr("Error"), tr("SslInvalidUserDataError"));
        break;
        return;
    default:
        Q_UNREACHABLE();
    }
    // enable the button to connect to the server again
    ui->connectButton->setEnabled(true);
    // disable the ui to send and display messages
    ui->sendButton->setEnabled(false);
    ui->messageEdit->setEnabled(false);
    ui->chatView->setEnabled(false);
    // reset the last printed username
    m_lastUserName.clear();

}
