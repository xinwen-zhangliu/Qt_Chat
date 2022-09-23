/********************************************************************************
** Form generated from reading UI file 'mainchatwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCHATWINDOW_H
#define UI_MAINCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *connectButton;
    QPushButton *disconnnectButton;
    QListView *chatView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messageEdit;
    QPushButton *sendButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *userListTitle;
    QListWidget *clientList;
    QLineEdit *groupName;
    QPushButton *createGroup;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(800, 495);
        gridLayout = new QGridLayout(ChatWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        connectButton = new QPushButton(ChatWindow);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setMinimumSize(QSize(250, 0));
        connectButton->setMaximumSize(QSize(250, 500));

        verticalLayout->addWidget(connectButton);

        disconnnectButton = new QPushButton(ChatWindow);
        disconnnectButton->setObjectName(QString::fromUtf8("disconnnectButton"));
        sizePolicy.setHeightForWidth(disconnnectButton->sizePolicy().hasHeightForWidth());
        disconnnectButton->setSizePolicy(sizePolicy);
        disconnnectButton->setMinimumSize(QSize(250, 2));
        disconnnectButton->setMaximumSize(QSize(250, 16777215));

        verticalLayout->addWidget(disconnnectButton);

        chatView = new QListView(ChatWindow);
        chatView->setObjectName(QString::fromUtf8("chatView"));
        chatView->setEnabled(false);
        chatView->setMaximumSize(QSize(500, 16777215));
        chatView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(chatView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        messageEdit = new QLineEdit(ChatWindow);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));
        messageEdit->setEnabled(false);

        horizontalLayout->addWidget(messageEdit);

        sendButton = new QPushButton(ChatWindow);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        userListTitle = new QLabel(ChatWindow);
        userListTitle->setObjectName(QString::fromUtf8("userListTitle"));

        verticalLayout_2->addWidget(userListTitle);

        clientList = new QListWidget(ChatWindow);
        clientList->setObjectName(QString::fromUtf8("clientList"));

        verticalLayout_2->addWidget(clientList);

        groupName = new QLineEdit(ChatWindow);
        groupName->setObjectName(QString::fromUtf8("groupName"));

        verticalLayout_2->addWidget(groupName);

        createGroup = new QPushButton(ChatWindow);
        createGroup->setObjectName(QString::fromUtf8("createGroup"));
        createGroup->setEnabled(true);
        createGroup->setMinimumSize(QSize(20, 0));
        createGroup->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(createGroup, 0, Qt::AlignRight);


        gridLayout->addLayout(verticalLayout_2, 1, 4, 1, 1);


        retranslateUi(ChatWindow);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "Qt Simple Chat Client", nullptr));
        connectButton->setText(QCoreApplication::translate("ChatWindow", "Connect", nullptr));
        disconnnectButton->setText(QCoreApplication::translate("ChatWindow", "Disconnect", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatWindow", "Send", nullptr));
        userListTitle->setText(QCoreApplication::translate("ChatWindow", "Connected Users", nullptr));
        groupName->setText(QCoreApplication::translate("ChatWindow", "Group Name", nullptr));
        createGroup->setText(QCoreApplication::translate("ChatWindow", "CreateGroup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCHATWINDOW_H
