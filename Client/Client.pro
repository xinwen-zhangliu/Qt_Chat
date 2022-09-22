QT += core network gui widgets

TARGET = Client
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += debug_and_release

SOURCES += Sources/*.cpp \
    Headers/room.cpp \
    Headers/room.cpp \
    Sources/chatwindow.cpp \
    Sources/room.cpp \
    Sources/rooms.cpp

FORMS += Forms/*.ui \
    Forms/clientlistitem.ui \
    Forms/clientlistitem.ui \
    Forms/mainchatwindow.ui \
    Forms/privatechats.ui


HEADERS += Headers/*.h \
    Headers/chatwindow.h \
    Headers/room.h \
    Sources/chatwindow.h \
    Sources/room.h \
    Sources/rooms.h


