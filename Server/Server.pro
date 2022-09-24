QT += core network gui widgets

TARGET = Server
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += debug_and_release

SOURCES += \
    servermain.cpp \
    Sources/chatserver.cpp \
    Sources/room.cpp \
    Sources/serverwindow.cpp \
    Sources/serverworker.cpp \
    Sources/user.cpp


HEADERS += \
    Headers/chatserver.h \
    Headers/room.h \
    Headers/serverwindow.h \
    Headers/serverworker.h \
    Headers/user.h




FORMS += \
    forms/serverwindow.ui
