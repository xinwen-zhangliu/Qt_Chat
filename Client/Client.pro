QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += \
    clientmain.cpp \
    Sources/chatwindow.h \
    Sources/room.cpp \
    Sources/chatclient.cpp \
    Sources/parser.cpp \
    Sources/chatwindow.cpp
FORMS += \
    Forms/clientlistitem.ui \
    Forms/mainchatwindow.ui \
    Forms/privatechats.ui
HEADERS += \
    Headers/chatwindow.h \
    Headers/room.h \
    Headers/chatclient.h \
    Headers/parser.h
