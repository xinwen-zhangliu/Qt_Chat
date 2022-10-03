/****************************************************************************
** Meta object code from reading C++ file 'serverworker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/serverworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerWorker_t {
    uint offsetsAndSizes[40];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[23];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[11];
    char stringdata8[4];
    char stringdata9[21];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[7];
    char stringdata13[29];
    char stringdata14[12];
    char stringdata15[5];
    char stringdata16[10];
    char stringdata17[10];
    char stringdata18[10];
    char stringdata19[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ServerWorker_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ServerWorker_t qt_meta_stringdata_ServerWorker = {
    {
        QT_MOC_LITERAL(0, 12),  // "ServerWorker"
        QT_MOC_LITERAL(13, 12),  // "jsonReceived"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 7),  // "jsonDoc"
        QT_MOC_LITERAL(35, 22),  // "disconnectedFromClient"
        QT_MOC_LITERAL(58, 5),  // "error"
        QT_MOC_LITERAL(64, 7),  // "timeout"
        QT_MOC_LITERAL(72, 10),  // "logMessage"
        QT_MOC_LITERAL(83, 3),  // "msg"
        QT_MOC_LITERAL(87, 20),  // "disconnectFromClient"
        QT_MOC_LITERAL(108, 8),  // "sendJson"
        QT_MOC_LITERAL(117, 4),  // "json"
        QT_MOC_LITERAL(122, 6),  // "Errors"
        QT_MOC_LITERAL(129, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(158, 11),  // "socketError"
        QT_MOC_LITERAL(170, 4),  // "test"
        QT_MOC_LITERAL(175, 9),  // "setStatus"
        QT_MOC_LITERAL(185, 9),  // "newStatus"
        QT_MOC_LITERAL(195, 9),  // "getStatus"
        QT_MOC_LITERAL(205, 11)   // "receiveJson"
    },
    "ServerWorker",
    "jsonReceived",
    "",
    "jsonDoc",
    "disconnectedFromClient",
    "error",
    "timeout",
    "logMessage",
    "msg",
    "disconnectFromClient",
    "sendJson",
    "json",
    "Errors",
    "QAbstractSocket::SocketError",
    "socketError",
    "test",
    "setStatus",
    "newStatus",
    "getStatus",
    "receiveJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    0,   89,    2, 0x06,    3 /* Public */,
       5,    0,   90,    2, 0x06,    4 /* Public */,
       6,    0,   91,    2, 0x06,    5 /* Public */,
       7,    1,   92,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   95,    2, 0x0a,    8 /* Public */,
      10,    1,   96,    2, 0x0a,    9 /* Public */,
      12,    1,   99,    2, 0x0a,   11 /* Public */,
      15,    0,  102,    2, 0x0a,   13 /* Public */,
      16,    1,  103,    2, 0x0a,   14 /* Public */,
      18,    0,  106,    2, 0x0a,   16 /* Public */,
      19,    0,  107,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void ServerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->disconnectedFromClient(); break;
        case 2: _t->error(); break;
        case 3: _t->timeout(); break;
        case 4: _t->logMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->disconnectFromClient(); break;
        case 6: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->Errors((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 8: _t->test(); break;
        case 9: _t->setStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: { int _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->receiveJson(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerWorker::*)(const QJsonObject & );
            if (_t _q_method = &ServerWorker::jsonReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerWorker::*)();
            if (_t _q_method = &ServerWorker::disconnectedFromClient; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerWorker::*)();
            if (_t _q_method = &ServerWorker::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerWorker::*)();
            if (_t _q_method = &ServerWorker::timeout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerWorker::*)(const QString & );
            if (_t _q_method = &ServerWorker::logMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ServerWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ServerWorker.offsetsAndSizes,
    qt_meta_data_ServerWorker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ServerWorker_t
, QtPrivate::TypeAndForceComplete<ServerWorker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ServerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ServerWorker::jsonReceived(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerWorker::disconnectedFromClient()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ServerWorker::error()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ServerWorker::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ServerWorker::logMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
