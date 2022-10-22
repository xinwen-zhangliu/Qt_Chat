/****************************************************************************
** Meta object code from reading C++ file 'groupchat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/groupchat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupChat_t {
    uint offsetsAndSizes[38];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[16];
    char stringdata7[20];
    char stringdata8[7];
    char stringdata9[8];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[11];
    char stringdata13[17];
    char stringdata14[5];
    char stringdata15[8];
    char stringdata16[12];
    char stringdata17[10];
    char stringdata18[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GroupChat_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_GroupChat_t qt_meta_stringdata_GroupChat = {
    {
        QT_MOC_LITERAL(0, 9),  // "GroupChat"
        QT_MOC_LITERAL(10, 8),  // "sendJson"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 4),  // "json"
        QT_MOC_LITERAL(25, 11),  // "leavingRoom"
        QT_MOC_LITERAL(37, 8),  // "roomName"
        QT_MOC_LITERAL(46, 15),  // "userListRequest"
        QT_MOC_LITERAL(62, 19),  // "receivedRoomMessage"
        QT_MOC_LITERAL(82, 6),  // "sender"
        QT_MOC_LITERAL(89, 7),  // "message"
        QT_MOC_LITERAL(97, 8),  // "userLeft"
        QT_MOC_LITERAL(106, 8),  // "username"
        QT_MOC_LITERAL(115, 10),  // "userJoined"
        QT_MOC_LITERAL(126, 16),  // "receivedUserList"
        QT_MOC_LITERAL(143, 4),  // "list"
        QT_MOC_LITERAL(148, 7),  // "addUser"
        QT_MOC_LITERAL(156, 11),  // "getUserList"
        QT_MOC_LITERAL(168, 9),  // "leaveRoom"
        QT_MOC_LITERAL(178, 11)   // "sendMessage"
    },
    "GroupChat",
    "sendJson",
    "",
    "json",
    "leavingRoom",
    "roomName",
    "userListRequest",
    "receivedRoomMessage",
    "sender",
    "message",
    "userLeft",
    "username",
    "userJoined",
    "receivedUserList",
    "list",
    "addUser",
    "getUserList",
    "leaveRoom",
    "sendMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupChat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    1,   83,    2, 0x06,    3 /* Public */,
       6,    1,   86,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   89,    2, 0x0a,    7 /* Public */,
      10,    1,   94,    2, 0x0a,   10 /* Public */,
      12,    1,   97,    2, 0x0a,   12 /* Public */,
      13,    1,  100,    2, 0x0a,   14 /* Public */,
      15,    0,  103,    2, 0x08,   16 /* Private */,
      16,    0,  104,    2, 0x08,   17 /* Private */,
      17,    0,  105,    2, 0x08,   18 /* Private */,
      18,    0,  106,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GroupChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupChat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->leavingRoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->userListRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->receivedRoomMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->receivedUserList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->addUser(); break;
        case 8: _t->getUserList(); break;
        case 9: _t->leaveRoom(); break;
        case 10: _t->sendMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroupChat::*)(const QJsonObject & );
            if (_t _q_method = &GroupChat::sendJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroupChat::*)(const QString & );
            if (_t _q_method = &GroupChat::leavingRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GroupChat::*)(const QString & );
            if (_t _q_method = &GroupChat::userListRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GroupChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GroupChat.offsetsAndSizes,
    qt_meta_data_GroupChat,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GroupChat_t
, QtPrivate::TypeAndForceComplete<GroupChat, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GroupChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupChat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GroupChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GroupChat::sendJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupChat::leavingRoom(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroupChat::userListRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
