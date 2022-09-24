QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += \
    Sources/clientlistitem.cpp \
    Sources/privatechat.cpp \
    clientmain.cpp \
Sources/chatwindow.cpp \
Sources/chatclient.cpp \
Sources/room.cpp \

    Sources/parser.cpp

FORMS += \
    forms/client_list_item.ui \
    forms/groupchatwindow.ui \
       forms/mainchatwindow.ui \

    forms/privatechats.ui
HEADERS += \
    Headers/chatwindow.h \
    Headers/chatclient.h \
    Headers/privatechat.h \
    Headers/room.h

    Headers/parser.h
