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
    uint offsetsAndSizes[60];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[15];
    char stringdata5[11];
    char stringdata6[14];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[10];
    char stringdata10[4];
    char stringdata11[13];
    char stringdata12[8];
    char stringdata13[8];
    char stringdata14[14];
    char stringdata15[9];
    char stringdata16[13];
    char stringdata17[12];
    char stringdata18[13];
    char stringdata19[17];
    char stringdata20[10];
    char stringdata21[10];
    char stringdata22[12];
    char stringdata23[19];
    char stringdata24[16];
    char stringdata25[17];
    char stringdata26[17];
    char stringdata27[10];
    char stringdata28[19];
    char stringdata29[11];
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
        QT_MOC_LITERAL(42, 10),  // "createRoom"
        QT_MOC_LITERAL(53, 13),  // "ServerWorker*"
        QT_MOC_LITERAL(67, 6),  // "sender"
        QT_MOC_LITERAL(74, 5),  // "users"
        QT_MOC_LITERAL(80, 9),  // "parseJson"
        QT_MOC_LITERAL(90, 3),  // "doc"
        QT_MOC_LITERAL(94, 12),  // "broadcastAll"
        QT_MOC_LITERAL(107, 7),  // "message"
        QT_MOC_LITERAL(115, 7),  // "exclude"
        QT_MOC_LITERAL(123, 13),  // "broadcastRoom"
        QT_MOC_LITERAL(137, 8),  // "roomName"
        QT_MOC_LITERAL(146, 12),  // "broadcastOne"
        QT_MOC_LITERAL(159, 11),  // "destination"
        QT_MOC_LITERAL(171, 12),  // "jsonReceived"
        QT_MOC_LITERAL(184, 16),  // "userDisconnected"
        QT_MOC_LITERAL(201, 9),  // "threadIdx"
        QT_MOC_LITERAL(211, 9),  // "userError"
        QT_MOC_LITERAL(221, 11),  // "logFinished"
        QT_MOC_LITERAL(233, 18),  // "sendPrivateMessage"
        QT_MOC_LITERAL(252, 15),  // "sendRoomMessage"
        QT_MOC_LITERAL(268, 16),  // "attempCreateRoom"
        QT_MOC_LITERAL(285, 16),  // "roomUsersRequest"
        QT_MOC_LITERAL(302, 9),  // "leaveRoom"
        QT_MOC_LITERAL(312, 18),  // "sendConnectedUsers"
        QT_MOC_LITERAL(331, 10)   // "stopServer"
    },
    "ChatServer",
    "logMessage",
    "",
    "msg",
    "stopAllClients",
    "createRoom",
    "ServerWorker*",
    "sender",
    "users",
    "parseJson",
    "doc",
    "broadcastAll",
    "message",
    "exclude",
    "broadcastRoom",
    "roomName",
    "broadcastOne",
    "destination",
    "jsonReceived",
    "userDisconnected",
    "threadIdx",
    "userError",
    "logFinished",
    "sendPrivateMessage",
    "sendRoomMessage",
    "attempCreateRoom",
    "roomUsersRequest",
    "leaveRoom",
    "sendConnectedUsers",
    "stopServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       4,    0,  125,    2, 0x06,    3 /* Public */,
       5,    2,  126,    2, 0x06,    4 /* Public */,
       9,    2,  131,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    2,  136,    2, 0x08,   10 /* Private */,
      14,    3,  141,    2, 0x08,   13 /* Private */,
      16,    3,  148,    2, 0x08,   17 /* Private */,
      18,    2,  155,    2, 0x08,   21 /* Private */,
      19,    2,  160,    2, 0x08,   24 /* Private */,
      21,    1,  165,    2, 0x08,   27 /* Private */,
      22,    0,  168,    2, 0x08,   29 /* Private */,
      23,    2,  169,    2, 0x08,   30 /* Private */,
      24,    3,  174,    2, 0x08,   33 /* Private */,
      25,    3,  181,    2, 0x08,   37 /* Private */,
      26,    2,  188,    2, 0x08,   41 /* Private */,
      27,    2,  193,    2, 0x08,   44 /* Private */,
      28,    1,  198,    2, 0x08,   47 /* Private */,
      29,    0,  201,    2, 0x0a,   49 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QStringList,    7,    8,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QJsonObject,    7,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6,   12,   13,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6, QMetaType::QString,   12,    7,   15,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6, QMetaType::QString,   12,    7,   17,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QJsonObject,    7,   10,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,   20,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,   17,   12,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QString,    7,   15,   12,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QStringList,    7,   15,    8,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   15,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   15,
    QMetaType::Void, 0x80000000 | 6,    7,
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
        case 2: _t->createRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 3: _t->parseJson((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 4: _t->broadcastAll((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2]))); break;
        case 5: _t->broadcastRoom((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->broadcastOne((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 7: _t->jsonReceived((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 8: _t->userDisconnected((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->userError((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 10: _t->logFinished(); break;
        case 11: _t->sendPrivateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 12: _t->sendRoomMessage((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->attempCreateRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[3]))); break;
        case 14: _t->roomUsersRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->leaveRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->sendConnectedUsers((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 17: _t->stopServer(); break;
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
            using _t = void (ChatServer::*)(ServerWorker * , QVector<QString> );
            if (_t _q_method = &ChatServer::createRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatServer::*)(ServerWorker * , const QJsonObject & );
            if (_t _q_method = &ChatServer::parseJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
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
, QtPrivate::TypeAndForceComplete<ChatServer, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
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
void ChatServer::createRoom(ServerWorker * _t1, QVector<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatServer::parseJson(ServerWorker * _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
