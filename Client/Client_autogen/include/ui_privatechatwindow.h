/********************************************************************************
** Form generated from reading UI file 'privatechatwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATECHATWINDOW_H
#define UI_PRIVATECHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PrivateChat
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSendMessage;
    QTextEdit *editSendMessage;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *editRecvMessage;

    void setupUi(QDialog *PrivateChat)
    {
        if (PrivateChat->objectName().isEmpty())
            PrivateChat->setObjectName(QString::fromUtf8("PrivateChat"));
        PrivateChat->resize(588, 771);
        gridLayout_2 = new QGridLayout(PrivateChat);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        btnSendMessage = new QPushButton(PrivateChat);
        btnSendMessage->setObjectName(QString::fromUtf8("btnSendMessage"));
        QFont font;
        font.setBold(true);
        btnSendMessage->setFont(font);
        btnSendMessage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 255, 255) ; color: rgb(0,0,0); "));

        gridLayout->addWidget(btnSendMessage, 2, 1, 1, 1);

        editSendMessage = new QTextEdit(PrivateChat);
        editSendMessage->setObjectName(QString::fromUtf8("editSendMessage"));
        editSendMessage->setMaximumSize(QSize(16777215, 150));
        editSendMessage->setFrameShape(QFrame::Panel);
        editSendMessage->setFrameShadow(QFrame::Plain);
        editSendMessage->setLineWidth(1);

        gridLayout->addWidget(editSendMessage, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        editRecvMessage = new QTextEdit(PrivateChat);
        editRecvMessage->setObjectName(QString::fromUtf8("editRecvMessage"));
        editRecvMessage->setFrameShape(QFrame::Panel);
        editRecvMessage->setFrameShadow(QFrame::Plain);
        editRecvMessage->setReadOnly(true);

        gridLayout->addWidget(editRecvMessage, 0, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(PrivateChat);

        QMetaObject::connectSlotsByName(PrivateChat);
    } // setupUi

    void retranslateUi(QDialog *PrivateChat)
    {
        PrivateChat->setWindowTitle(QString());
        btnSendMessage->setText(QCoreApplication::translate("PrivateChat", "Send Message", nullptr));
#if QT_CONFIG(shortcut)
        btnSendMessage->setShortcut(QCoreApplication::translate("PrivateChat", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        editSendMessage->setHtml(QCoreApplication::translate("PrivateChat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrivateChat: public Ui_PrivateChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATECHATWINDOW_H
