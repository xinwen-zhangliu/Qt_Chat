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
    uint offsetsAndSizes[46];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[7];
    char stringdata6[22];
    char stringdata7[7];
    char stringdata8[5];
    char stringdata9[23];
    char stringdata10[8];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[17];
    char stringdata14[5];
    char stringdata15[9];
    char stringdata16[5];
    char stringdata17[10];
    char stringdata18[15];
    char stringdata19[18];
    char stringdata20[9];
    char stringdata21[9];
    char stringdata22[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Parser_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Parser_t qt_meta_stringdata_Parser = {
    {
        QT_MOC_LITERAL(0, 6),  // "Parser"
        QT_MOC_LITERAL(7, 8),  // "loggedIn"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 8),  // "username"
        QT_MOC_LITERAL(26, 10),  // "loginError"
        QT_MOC_LITERAL(37, 6),  // "reason"
        QT_MOC_LITERAL(44, 21),  // "publicMessageReceived"
        QT_MOC_LITERAL(66, 6),  // "sender"
        QT_MOC_LITERAL(73, 4),  // "text"
        QT_MOC_LITERAL(78, 22),  // "privateMessageReceived"
        QT_MOC_LITERAL(101, 7),  // "message"
        QT_MOC_LITERAL(109, 10),  // "userJoined"
        QT_MOC_LITERAL(120, 8),  // "userLeft"
        QT_MOC_LITERAL(129, 16),  // "receivedUserList"
        QT_MOC_LITERAL(146, 4),  // "list"
        QT_MOC_LITERAL(151, 8),  // "sendJson"
        QT_MOC_LITERAL(160, 4),  // "json"
        QT_MOC_LITERAL(165, 9),  // "newStatus"
        QT_MOC_LITERAL(175, 14),  // "newRoomCreated"
        QT_MOC_LITERAL(190, 17),  // "errorCreatingRoom"
        QT_MOC_LITERAL(208, 8),  // "roomName"
        QT_MOC_LITERAL(217, 8),  // "showJson"
        QT_MOC_LITERAL(226, 9)   // "parseJson"
    },
    "Parser",
    "loggedIn",
    "",
    "username",
    "loginError",
    "reason",
    "publicMessageReceived",
    "sender",
    "text",
    "privateMessageReceived",
    "message",
    "userJoined",
    "userLeft",
    "receivedUserList",
    "list",
    "sendJson",
    "json",
    "newStatus",
    "newRoomCreated",
    "errorCreatingRoom",
    "roomName",
    "showJson",
    "parseJson"
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
       4,    1,   95,    2, 0x06,    3 /* Public */,
       6,    2,   98,    2, 0x06,    5 /* Public */,
       9,    2,  103,    2, 0x06,    8 /* Public */,
      11,    1,  108,    2, 0x06,   11 /* Public */,
      12,    1,  111,    2, 0x06,   13 /* Public */,
      13,    1,  114,    2, 0x06,   15 /* Public */,
      15,    1,  117,    2, 0x06,   17 /* Public */,
      17,    2,  120,    2, 0x06,   19 /* Public */,
      18,    0,  125,    2, 0x06,   22 /* Public */,
      19,    1,  126,    2, 0x06,   23 /* Public */,
      21,    1,  129,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  132,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QJsonArray,   14,
    QMetaType::Void, QMetaType::QJsonObject,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,   16,

       0        // eod
};

void Parser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Parser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loggedIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->loginError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->publicMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->privateMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->receivedUserList((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 7: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 8: _t->newStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->newRoomCreated(); break;
        case 10: _t->errorCreatingRoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->showJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->parseJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::loggedIn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::loginError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & , const QString & );
            if (_t _q_method = &Parser::publicMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & , const QString & );
            if (_t _q_method = &Parser::privateMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::userJoined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::userLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QJsonArray & );
            if (_t _q_method = &Parser::receivedUserList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QJsonObject & );
            if (_t _q_method = &Parser::sendJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & , const int & );
            if (_t _q_method = &Parser::newStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Parser::*)();
            if (_t _q_method = &Parser::newRoomCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::errorCreatingRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::showJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
, QtPrivate::TypeAndForceComplete<Parser, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const int &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>


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
void Parser::loggedIn(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Parser::loginError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Parser::publicMessageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Parser::privateMessageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Parser::userJoined(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Parser::userLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Parser::receivedUserList(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Parser::sendJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Parser::newStatus(const QString & _t1, const int & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Parser::newRoomCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Parser::errorCreatingRoom(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Parser::showJson(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
