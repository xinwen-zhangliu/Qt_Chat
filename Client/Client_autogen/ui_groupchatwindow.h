/********************************************************************************
** Form generated from reading UI file 'groupchatwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCHATWINDOW_H
#define UI_GROUPCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupChat
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *userListBtn;
    QPushButton *inviteBtn;
    QPushButton *leaveBtn;
    QListView *chatView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messageEdit;
    QPushButton *sendButton;

    void setupUi(QWidget *GroupChat)
    {
        if (GroupChat->objectName().isEmpty())
            GroupChat->setObjectName(QString::fromUtf8("GroupChat"));
        GroupChat->resize(500, 900);
        gridLayout = new QGridLayout(GroupChat);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        userListBtn = new QPushButton(GroupChat);
        userListBtn->setObjectName(QString::fromUtf8("userListBtn"));

        verticalLayout->addWidget(userListBtn);

        inviteBtn = new QPushButton(GroupChat);
        inviteBtn->setObjectName(QString::fromUtf8("inviteBtn"));

        verticalLayout->addWidget(inviteBtn);

        leaveBtn = new QPushButton(GroupChat);
        leaveBtn->setObjectName(QString::fromUtf8("leaveBtn"));

        verticalLayout->addWidget(leaveBtn);

        chatView = new QListView(GroupChat);
        chatView->setObjectName(QString::fromUtf8("chatView"));
        chatView->setEnabled(false);
        chatView->setMinimumSize(QSize(0, 0));
        chatView->setMaximumSize(QSize(500, 16777215));
        chatView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(chatView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        messageEdit = new QLineEdit(GroupChat);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));
        messageEdit->setEnabled(true);
        messageEdit->setMinimumSize(QSize(0, 50));
        messageEdit->setMaximumSize(QSize(450, 100));
        messageEdit->setBaseSize(QSize(450, 100));
        messageEdit->setDragEnabled(false);

        horizontalLayout->addWidget(messageEdit);

        sendButton = new QPushButton(GroupChat);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);
        sendButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(sendButton, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(GroupChat);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(GroupChat);
    } // setupUi

    void retranslateUi(QWidget *GroupChat)
    {
        GroupChat->setWindowTitle(QCoreApplication::translate("GroupChat", "Qt Simple Chat Client", nullptr));
        userListBtn->setText(QCoreApplication::translate("GroupChat", "Get User List", nullptr));
        inviteBtn->setText(QCoreApplication::translate("GroupChat", "Invite Someone", nullptr));
        leaveBtn->setText(QCoreApplication::translate("GroupChat", "Leave Room", nullptr));
        sendButton->setText(QCoreApplication::translate("GroupChat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupChat: public Ui_GroupChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATWINDOW_H
