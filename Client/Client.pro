QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += Sources/*.cpp


FORMS += Forms/*.ui


HEADERS += Headers/*.h \
    Headers/chatclient.h

