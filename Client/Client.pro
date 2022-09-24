QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += \
    clientmain.cpp \
    Sources/chatwindow.cpp \
    Sources/chatclient.cpp \
    Sources/parser.cpp


FORMS += \
    forms/groupchatwindow.ui \
    forms/mainchatwindow.ui \
    forms/privatechatwindow.ui


HEADERS += \
    Headers/chatwindow.h \
    Headers/chatclient.h \
    Headers/parser.h

include(../Common/Common.pri)
