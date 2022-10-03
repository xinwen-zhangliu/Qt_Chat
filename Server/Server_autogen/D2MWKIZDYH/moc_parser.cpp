/****************************************************************************
** Meta object code from reading C++ file 'parser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/parser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Parser_t {
    uint offsetsAndSizes[50];
    char stringdata0[7];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[8];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[16];
    char stringdata11[13];
    char stringdata12[7];
    char stringdata13[15];
    char stringdata14[9];
    char stringdata15[18];
    char stringdata16[6];
    char stringdata17[6];
    char stringdata18[15];
    char stringdata19[10];
    char stringdata20[17];
    char stringdata21[12];
    char stringdata22[16];
    char stringdata23[10];
    char stringdata24[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Parser_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Parser_t qt_meta_stringdata_Parser = {
    {
        QT_MOC_LITERAL(0, 6),  // "Parser"
        QT_MOC_LITERAL(7, 10),  // "disconnect"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 13),  // "ServerWorker*"
        QT_MOC_LITERAL(33, 6),  // "sender"
        QT_MOC_LITERAL(40, 13),  // "publicMessage"
        QT_MOC_LITERAL(54, 7),  // "newJson"
        QT_MOC_LITERAL(62, 14),  // "privateMessage"
        QT_MOC_LITERAL(77, 11),  // "destination"
        QT_MOC_LITERAL(89, 7),  // "message"
        QT_MOC_LITERAL(97, 15),  // "userListRequest"
        QT_MOC_LITERAL(113, 12),  // "updateStatus"
        QT_MOC_LITERAL(126, 6),  // "status"
        QT_MOC_LITERAL(133, 14),  // "newRoomRequest"
        QT_MOC_LITERAL(148, 8),  // "roomName"
        QT_MOC_LITERAL(157, 17),  // "invitationsToRoom"
        QT_MOC_LITERAL(175, 5),  // "sendr"
        QT_MOC_LITERAL(181, 5),  // "users"
        QT_MOC_LITERAL(187, 14),  // "roomInvitation"
        QT_MOC_LITERAL(202, 9),  // "leaveRoom"
        QT_MOC_LITERAL(212, 16),  // "roomUsersRequest"
        QT_MOC_LITERAL(229, 11),  // "roomMessage"
        QT_MOC_LITERAL(241, 15),  // "joinRoomRequest"
        QT_MOC_LITERAL(257, 9),  // "parseJson"
        QT_MOC_LITERAL(267, 4)   // "json"
    },
    "Parser",
    "disconnect",
    "",
    "ServerWorker*",
    "sender",
    "publicMessage",
    "newJson",
    "privateMessage",
    "destination",
    "message",
    "userListRequest",
    "updateStatus",
    "status",
    "newRoomRequest",
    "roomName",
    "invitationsToRoom",
    "sendr",
    "users",
    "roomInvitation",
    "leaveRoom",
    "roomUsersRequest",
    "roomMessage",
    "joinRoomRequest",
    "parseJson",
    "json"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Parser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       5,    2,   95,    2, 0x06,    3 /* Public */,
       7,    2,  100,    2, 0x06,    6 /* Public */,
      10,    1,  105,    2, 0x06,    9 /* Public */,
      11,    2,  108,    2, 0x06,   11 /* Public */,
      13,    2,  113,    2, 0x06,   14 /* Public */,
      15,    3,  118,    2, 0x06,   17 /* Public */,
      18,    2,  125,    2, 0x06,   21 /* Public */,
      19,    2,  130,    2, 0x06,   24 /* Public */,
      20,    2,  135,    2, 0x06,   27 /* Public */,
      21,    3,  140,    2, 0x06,   30 /* Public */,
      22,    2,  147,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    2,  152,    2, 0x0a,   37 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,    8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList, QMetaType::QString,   16,   17,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   14,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QJsonObject,    4,   24,

       0        // eod
};

void Parser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Parser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->disconnect((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 1: _t->publicMessage((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[2]))); break;
        case 2: _t->privateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 3: _t->userListRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1]))); break;
        case 4: _t->updateStatus((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->newRoomRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->invitationsToRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 7: _t->roomInvitation((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->leaveRoom((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->roomUsersRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->roomMessage((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->joinRoomRequest((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->parseJson((*reinterpret_cast< std::add_pointer_t<ServerWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Parser::*)(ServerWorker * );
            if (_t _q_method = &Parser::disconnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QJsonObject & , ServerWorker * );
            if (_t _q_method = &Parser::publicMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & , const QJsonObject & );
            if (_t _q_method = &Parser::privateMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * );
            if (_t _q_method = &Parser::userListRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const int );
            if (_t _q_method = &Parser::updateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & );
            if (_t _q_method = &Parser::newRoomRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , QVector<QString> , const QString & );
            if (_t _q_method = &Parser::invitationsToRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & );
            if (_t _q_method = &Parser::roomInvitation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & );
            if (_t _q_method = &Parser::leaveRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & );
            if (_t _q_method = &Parser::roomUsersRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & , const QString & );
            if (_t _q_method = &Parser::roomMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Parser::*)(ServerWorker * , const QString & );
            if (_t _q_method = &Parser::joinRoomRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject Parser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Parser.offsetsAndSizes,
    qt_meta_data_Parser,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Parser_t
, QtPrivate::TypeAndForceComplete<Parser, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ServerWorker *, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Parser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Parser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Parser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Parser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Parser::disconnect(ServerWorker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Parser::publicMessage(const QJsonObject & _t1, ServerWorker * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Parser::privateMessage(const QString & _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Parser::userListRequest(ServerWorker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Parser::updateStatus(ServerWorker * _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Parser::newRoomRequest(ServerWorker * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Parser::invitationsToRoom(ServerWorker * _t1, QVector<QString> _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Parser::roomInvitation(ServerWorker * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Parser::leaveRoom(ServerWorker * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Parser::roomUsersRequest(ServerWorker * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Parser::roomMessage(ServerWorker * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Parser::joinRoomRequest(ServerWorker * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
