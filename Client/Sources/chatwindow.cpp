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
    , m_chatModel(new QStandardItemModel(this))
{

    ui->setupUi(this);
    m_chatModel->insertColumn(0);
    ui->chatView->setModel(m_chatModel);


    //connecting signals to slots
    connect(m_chatClient, &ChatClient::connected, this, &ChatWindow::connectedToServer);
    connect(m_chatClient, &ChatClient::loggedIn, this, &ChatWindow::loggedIn);


    connect(m_chatClient, &ChatClient::loginError, this, &ChatWindow::loginFailed);


    connect(m_chatClient, &ChatClient::jsonText, this, &ChatWindow::logJson);
    connect(m_chatClient, &ChatClient::receivedUserList, this, &ChatWindow::displayUserList);

    //connnect(m_parser, &Parser::showWarning, this, &ChatWindow::showJson);
    connect(m_chatClient, &ChatClient::messageReceived, this, &ChatWindow::publicMessageReceived);
    connect(m_chatClient, &ChatClient::disconnected, this, &ChatWindow::disconnectedFromServer);
    connect(m_chatClient, &ChatClient::error, this, &ChatWindow::error);
    connect(m_chatClient, &ChatClient::userJoined, this, &ChatWindow::userJoined);
    connect(m_chatClient, &ChatClient::userLeft, this, &ChatWindow::userLeft);

    connect(ui->connectButton, &QPushButton::clicked, this, &ChatWindow::attemptConnection);

    connect(ui->sendButton, &QPushButton::clicked, this, &ChatWindow::sendMessage);
    connect(ui->messageEdit, &QLineEdit::returnPressed, this, &ChatWindow::sendMessage);
    connect(ui->disconnnectButton, &QPushButton::clicked, m_chatClient, &ChatClient::disconnectFromHost);

    //connect(ui->createGroup, &QPushButton::clicked , m_chatClient, &ChatClient::createRoom);
    //connect(ui->groupName, &QLineEdit::returnPressed, m_chatClient, &ChatClient::createRoom);

}

ChatWindow::~ChatWindow(){
    delete ui;
}

void ChatWindow::attemptConnection(){

    const QString hostAddress = QInputDialog::getText(
        this
        , tr("Chose Server")
        , tr("Server Address")
        , QLineEdit::Normal
        , QStringLiteral("127.0.0.1")
    );

    if (hostAddress.isEmpty())
        return;
    const QString port= QInputDialog::getText(
        this
        , tr("Choose port")
        , tr("Port Number")
        , QLineEdit::Normal
        , QStringLiteral("1234")
    );
    if (port.isEmpty())
        return;

    bool isPort ;
    unsigned short portNumber = port.toUShort(&isPort);
    if (hostAddress.isEmpty())
        return;

    ui->connectButton->setEnabled(false);
    if(!isPort){
        ui->connectButton->setEnabled(true);
        QMessageBox::information(this, tr("Error"), tr("Port number not valid"));
        return;
    }

    m_chatClient->connectToServer(QHostAddress(hostAddress), portNumber);
}


void ChatWindow::connectedToServer(){
    // once we connected
    const QString newUsername = QInputDialog::getText(this, tr("Chose Username"), tr("Username"));
    if (newUsername.isEmpty()){
        return m_chatClient->disconnectFromHost();
    }

    attemptLogin(newUsername);
}

void ChatWindow::attemptLogin(const QString &userName){
    m_chatClient->login(userName);
}





void ChatWindow::loggedIn(){
    qDebug() << "ChatWindow::loggedIn";

    ui->sendButton->setEnabled(true);
    ui->messageEdit->setEnabled(true);
    ui->chatView->setEnabled(true);

    m_lastUserName.clear();



}

void ChatWindow::loginFailed(const QString &reason){

    QMessageBox::critical(this, tr("Error"), reason);

    connectedToServer();
}

void ChatWindow::logJson(const QString &json){
       QMessageBox::information(this, tr("Json text"), json);
}


void ChatWindow::publicMessageReceived(const QString &sender, const QString &text)
{

    int newRow = m_chatModel->rowCount();

    if (m_lastUserName != sender) {

        m_lastUserName = sender;

        QFont boldFont;
        boldFont.setBold(true);

        m_chatModel->insertRows(newRow, 2);

        m_chatModel->setData(m_chatModel->index(newRow, 0), sender + QLatin1Char(':'));

        m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

        m_chatModel->setData(m_chatModel->index(newRow, 0), boldFont, Qt::FontRole);
        ++newRow;
    } else {

        m_chatModel->insertRow(newRow);
    }

    m_chatModel->setData(m_chatModel->index(newRow, 0), text);

    m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->chatView->scrollToBottom();
}


void ChatWindow::sendMessage()
{

    m_chatClient->sendPublicMessage(ui->messageEdit->text());

    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), ui->messageEdit->text());

    m_chatModel->setData(m_chatModel->index(newRow, 0), int(Qt::AlignRight | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->messageEdit->clear();

    ui->chatView->scrollToBottom();

    m_lastUserName.clear();
}

void ChatWindow::disconnectedFromServer()
{

    QMessageBox::warning(this, tr("Disconnected"), tr("The host terminated the connection"));

    ui->sendButton->setEnabled(false);
    ui->messageEdit->setEnabled(false);
    ui->chatView->setEnabled(false);

    ui->connectButton->setEnabled(true);

    m_lastUserName.clear();
}

void ChatWindow::userJoined(const QString &username)
{

    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), tr("%1 Joined the Chat").arg(username));

    m_chatModel->setData(m_chatModel->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    m_chatModel->setData(m_chatModel->index(newRow, 0), QBrush(Qt::blue), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();

    m_lastUserName.clear();
}
void ChatWindow::userLeft(const QString &username)
{

    const int newRow = m_chatModel->rowCount();

    m_chatModel->insertRow(newRow);

    m_chatModel->setData(m_chatModel->index(newRow, 0), tr("%1 Left the Chat").arg(username));

    m_chatModel->setData(m_chatModel->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    m_chatModel->setData(m_chatModel->index(newRow, 0), QBrush(Qt::red), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();

    m_lastUserName.clear();
}


void ChatWindow::displayUserList(){

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

    ui->connectButton->setEnabled(true);

    ui->sendButton->setEnabled(false);
    ui->messageEdit->setEnabled(false);
    ui->chatView->setEnabled(false);

    m_lastUserName.clear();

}
