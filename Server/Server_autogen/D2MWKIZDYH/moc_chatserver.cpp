/****************************************************************************
** Meta object code from reading C++ file 'chatserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/chatserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatServer_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[15];
    char stringdata5[10];
    char stringdata6[14];
    char stringdata7[7];
    char stringdata8[4];
    char stringdata9[13];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[14];
    char stringdata13[9];
    char stringdata14[13];
    char stringdata15[12];
    char stringdata16[10];
    char stringdata17[13];
    char stringdata18[17];
    char stringdata19[10];
    char stringdata20[10];
    char stringdata21[12];
    char stringdata22[19];
    char stringdata23[16];
    char stringdata24[11];
    char stringdata25[9];
    char stringdata26[16];
    char stringdata27[23];
    char stringdata28[6];
    char stringdata29[17];
    char stringdata30[10];
    char stringdata31[13];
    char stringdata32[10];
    char stringdata33[19];
    char stringdata34[9];
    char stringdata35[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChatServer_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ChatServer_t qt_meta_stringdata_ChatServer = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatServer"
        QT_MOC_LITERAL(11, 10),  // "logMessage"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 3),  // "msg"
        QT_MOC_LITERAL(27, 14),  // "stopAllClients"
        QT_MOC_LITERAL(42, 9),  // "parseJson"
        QT_MOC_LITERAL(52, 13),  // "ServerWorker*"
        QT_MOC_LITERAL(66, 6),  // "sender"
        QT_MOC_LITERAL(73, 3),  // "doc"
        QT_MOC_LITERAL(77, 12),  // "broadcastAll"
        QT_MOC_LITERAL(90, 7),  // "message"
        QT_MOC_LITERAL(98, 7),  // "exclude"
        QT_MOC_LITERAL(106, 13),  // "broadcastRoom"
        QT_MOC_LITERAL(120, 8),  // "roomName"
        QT_MOC_LITERAL(129, 12),  // "broadcastOne"
        QT_MOC_LITERAL(142, 11),  // "destination"
        QT_MOC_LITERAL(154, 9),  // "operation"
        QT_MOC_LITERAL(164, 12),  // "jsonReceived"
        QT_MOC_LITERAL(177, 16),  // "userDisconnected"
        QT_MOC_LITERAL(194, 9),  // "threadIdx"
        QT_MOC_LITERAL(204, 9),  // "userError"
        QT_MOC_LITERAL(214, 11),  // "logFinished"
        QT_MOC_LITERAL(226, 18),  // "sendPrivateMessage"
        QT_MOC_LITERAL(245, 15),  // "userListRequest"
        QT_MOC_LITERAL(261, 10),  // "createRoom"
        QT_MOC_LITERAL(272, 8),  // "roomname"
        QT_MOC_LITERAL(281, 15),  // "sendRoomMessage"
        QT_MOC_LITERAL(297, 22),  // "sendOutRoomInvitations"
        QT_MOC_LITERAL(320, 5),  // "users"
        QT_MOC_LITERAL(326, 16),  // "roomUsersRequest"
        QT_MOC_LITERAL(343, 9),  // "leaveRoom"
        QT_MOC_LITERAL(353, 12),  // "updateStatus"
        QT_MOC_LITERAL(366, 9),  // "newStatus"
        QT_MOC_LITERAL(376, 18),  // "sendConnectedUsers"
        QT_MOC_LITERAL(395, 8),  // "sendJson"
        QT_MOC_LITERAL(404, 10)   // "stopServer"
    },
    "ChatServer",
    "logMessage",
    "",
    "msg",
    "stopAllClients",
    "parseJson",
    "ServerWorker*",
    "sender",
    "doc",
    "broadcastAll",
    "message",
    "exclude",
    "broadcastRoom",
    "roomName",
    "broadcastOne",
    "destination",
    "operation",
    "jsonReceived",
    "userDisconnected",
    "threadIdx",
    "userError",
    "logFinished",
    "sendPrivateMessage",
    "userListRequest",
    "createRoom",
    "roomname",
    "sendRoomMessage",
    "sendOutRoomInvitations",
    "users",
    "roomUsersRequest",
    "leaveRoom",
    "updateStatus",
    "newStatus",
    "sendConnectedUsers",
    "sendJson",
    "stopServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,    1 /* Public */,
       4,    0,  143,    2, 0x06,    3 /* Public */,
       5,    2,  144,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,  149,    2, 0x08,    7 /* Private */,
      12,    3,  154,    2, 0x08,   10 /* Private */,
      14,    4,  161,    2, 0x08,   14 /* Private */,
      17,    2,  170,    2, 0x08,   19 /* Private */,
      18,    2,  175,    2, 0x08,   22 /* Private */,
      20,    1,  180,    2, 0x08,   25 /* Private */,
      21,    0,  183,    2, 0x08,   27 /* Private */,
      22,    2,  184,    2, 0x08,   28 /* Private */,
      23,    1,  189,    2, 0x08,   31 /* Private */,
      24,    2,  192,    2, 0x08,   33 /* Private */,
      26,    3,  197,    2, 0x08,   36 /* Private */,
      27,    3,  204,    2, 0x08,   40 /* Private */,
      29,    2,  211,    2, 0x08,   44 /* Private */,
      30,    2,  216,    2, 0x08,   47 /* Private */,
      31,    2,  221,    2, 0x08,   50 /* Private */,
      33,    1,  226,    2, 0x08,   53 /* Private */,
      34,    2,  229,    2, 0x08,   55 /* Private */,
      35,    0,  234,    2, 0x0a,   58 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QJsonObject,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6,   10,   11,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6, QMetaType::QString,   10,    7,   13,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6, QMetaType::QString, QMetaType::QString,   10,    7,   15,   16,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QJsonObject,    7,    8,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,   19,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,   15,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   25,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QString,    7,   13,   10,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QStringList,    7,   13,   28,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   13,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   13,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,   32,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QJsonObject,   15,   10,
    QMetaType::Void,

       0        // eod
};

void ChatServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->stopAllClients(); break;
        case 2: _t->parseJson((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 3: _t->broadcastAll((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2]))); break;
        case 4: _t->broadcastRoom((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->broadcastOne((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 6: _t->jsonReceived((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 7: _t->userDisconnected((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->userError((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 9: _t->logFinished(); break;
        case 10: _t->sendPrivateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 11: _t->userListRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 12: _t->createRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->sendRoomMessage((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->sendOutRoomInvitations((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[3]))); break;
        case 15: _t->roomUsersRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->leaveRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->updateStatus((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->sendConnectedUsers((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 19: _t->sendJson((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 20: _t->stopServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatServer::*)(const QString & );
            if (_t _q_method = &ChatServer::logMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatServer::*)();
            if (_t _q_method = &ChatServer::stopAllClients; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatServer::*)(ServerWorker * , const QJsonObject & );
            if (_t _q_method = &ChatServer::parseJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ChatServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_ChatServer.offsetsAndSizes,
    qt_meta_data_ChatServer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChatServer_t
, QtPrivate::TypeAndForceComplete<ChatServer, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChatServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int ChatServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ChatServer::logMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatServer::stopAllClients()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatServer::parseJson(ServerWorker * _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
