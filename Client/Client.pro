QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += \
    Sources/groupchat.cpp \
    clientmain.cpp \
    Sources/chatwindow.cpp \
    Sources/chatclient.cpp \
    Sources/parser.cpp \
    Sources/privatechat.cpp


FORMS += \
    forms/groupchatwindow.ui \
    forms/mainchatwindow.ui \
    forms/privatechatwindow.ui


HEADERS += \
    Headers/chatwindow.h \
    Headers/chatclient.h \
    Headers/groupchat.h \
    Headers/parser.h \
    Headers/privatechat.h

include(../Common/Common.pri)
