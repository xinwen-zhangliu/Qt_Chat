QT += core network gui widgets

TARGET = Server
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += debug_and_release

SOURCES += \
    Sources/parser.cpp \
    servermain.cpp \
    Sources/chatserver.cpp \
    Sources/serverwindow.cpp \
    Sources/serverworker.cpp \
    Sources/user.cpp



HEADERS += \
    Headers/chatserver.h \
    Headers/parser.h \
    Headers/serverwindow.h \
    Headers/serverworker.h \
    Headers/user.h




FORMS += \
    forms/serverwindow.ui


include(../Common/Common.pri)
