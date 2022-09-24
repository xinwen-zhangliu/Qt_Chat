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
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[7];
    char stringdata5[22];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[11];
    char stringdata9[9];
    char stringdata10[9];
    char stringdata11[17];
    char stringdata12[5];
    char stringdata13[9];
    char stringdata14[5];
    char stringdata15[10];
    char stringdata16[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Parser_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Parser_t qt_meta_stringdata_Parser = {
    {
        QT_MOC_LITERAL(0, 6),  // "Parser"
        QT_MOC_LITERAL(7, 8),  // "loggedIn"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 10),  // "loginError"
        QT_MOC_LITERAL(28, 6),  // "reason"
        QT_MOC_LITERAL(35, 21),  // "publicMessageReceived"
        QT_MOC_LITERAL(57, 6),  // "sender"
        QT_MOC_LITERAL(64, 4),  // "text"
        QT_MOC_LITERAL(69, 10),  // "userJoined"
        QT_MOC_LITERAL(80, 8),  // "username"
        QT_MOC_LITERAL(89, 8),  // "userLeft"
        QT_MOC_LITERAL(98, 16),  // "receivedUserList"
        QT_MOC_LITERAL(115, 4),  // "list"
        QT_MOC_LITERAL(120, 8),  // "sendJson"
        QT_MOC_LITERAL(129, 4),  // "json"
        QT_MOC_LITERAL(134, 9),  // "newStatus"
        QT_MOC_LITERAL(144, 9)   // "parseJson"
    },
    "Parser",
    "loggedIn",
    "",
    "loginError",
    "reason",
    "publicMessageReceived",
    "sender",
    "text",
    "userJoined",
    "username",
    "userLeft",
    "receivedUserList",
    "list",
    "sendJson",
    "json",
    "newStatus",
    "parseJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Parser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    1,   69,    2, 0x06,    2 /* Public */,
       5,    2,   72,    2, 0x06,    4 /* Public */,
       8,    1,   77,    2, 0x06,    7 /* Public */,
      10,    1,   80,    2, 0x06,    9 /* Public */,
      11,    1,   83,    2, 0x06,   11 /* Public */,
      13,    1,   86,    2, 0x06,   13 /* Public */,
      15,    2,   89,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,   94,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QJsonArray,   12,
    QMetaType::Void, QMetaType::QJsonObject,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,   14,

       0        // eod
};

void Parser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Parser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loggedIn(); break;
        case 1: _t->loginError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->publicMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->receivedUserList((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 6: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->newStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->parseJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Parser::*)();
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
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::userJoined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & );
            if (_t _q_method = &Parser::userLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QJsonArray & );
            if (_t _q_method = &Parser::receivedUserList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QJsonObject & );
            if (_t _q_method = &Parser::sendJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Parser::*)(const QString & , const int & );
            if (_t _q_method = &Parser::newStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
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
, QtPrivate::TypeAndForceComplete<Parser, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const int &, std::false_type>
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Parser::loggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
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
void Parser::userJoined(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Parser::userLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Parser::receivedUserList(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Parser::sendJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Parser::newStatus(const QString & _t1, const int & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
