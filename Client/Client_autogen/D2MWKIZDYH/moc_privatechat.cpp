/****************************************************************************
** Meta object code from reading C++ file 'privatechat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/privatechat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privatechat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrivateChat_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[19];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[9];
    char stringdata8[5];
    char stringdata9[11];
    char stringdata10[5];
    char stringdata11[27];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PrivateChat_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_PrivateChat_t qt_meta_stringdata_PrivateChat = {
    {
        QT_MOC_LITERAL(0, 11),  // "PrivateChat"
        QT_MOC_LITERAL(12, 11),  // "closeDialog"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 8),  // "username"
        QT_MOC_LITERAL(34, 18),  // "sendPrivateMessage"
        QT_MOC_LITERAL(53, 8),  // "receiver"
        QT_MOC_LITERAL(62, 7),  // "message"
        QT_MOC_LITERAL(70, 8),  // "sendJson"
        QT_MOC_LITERAL(79, 4),  // "json"
        QT_MOC_LITERAL(84, 10),  // "chatClosed"
        QT_MOC_LITERAL(95, 4),  // "name"
        QT_MOC_LITERAL(100, 26),  // "onSendMessageButtonClicked"
        QT_MOC_LITERAL(127, 18)   // "getChatPartnerName"
    },
    "PrivateChat",
    "closeDialog",
    "",
    "username",
    "sendPrivateMessage",
    "receiver",
    "message",
    "sendJson",
    "json",
    "chatClosed",
    "name",
    "onSendMessageButtonClicked",
    "getChatPartnerName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivateChat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    2,   53,    2, 0x06,    3 /* Public */,
       7,    1,   58,    2, 0x06,    6 /* Public */,
       9,    1,   61,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   64,    2, 0x0a,   10 /* Public */,
      12,    0,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QJsonObject,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString,

       0        // eod
};

void PrivateChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrivateChat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->sendPrivateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 3: _t->chatClosed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onSendMessageButtonClicked(); break;
        case 5: { QString _r = _t->getChatPartnerName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PrivateChat::*)(QString );
            if (_t _q_method = &PrivateChat::closeDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PrivateChat::*)(QString , QString );
            if (_t _q_method = &PrivateChat::sendPrivateMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PrivateChat::*)(const QJsonObject & );
            if (_t _q_method = &PrivateChat::sendJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PrivateChat::*)(const QString & );
            if (_t _q_method = &PrivateChat::chatClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PrivateChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PrivateChat.offsetsAndSizes,
    qt_meta_data_PrivateChat,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PrivateChat_t
, QtPrivate::TypeAndForceComplete<PrivateChat, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *PrivateChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivateChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateChat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PrivateChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PrivateChat::closeDialog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrivateChat::sendPrivateMessage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrivateChat::sendJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrivateChat::chatClosed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
