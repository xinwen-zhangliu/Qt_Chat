QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += \
    clientmain.cpp \
Sources/chatwindow.cpp \
Sources/chatclient.cpp \
Sources/room.cpp \

    Sources/parser.cpp

FORMS += \
       forms/mainchatwindow.ui \
    forms/clientlistitem.ui \

    forms/privatechats.ui
HEADERS += \
    Headers/chatwindow.h \
    Headers/chatclient.h \
    Headers/room.h \

    Headers/parser.h
