/****************************************************************************
** Meta object code from reading C++ file 'chatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/chatwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatWindow_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[8];
    char stringdata9[5];
    char stringdata10[22];
    char stringdata11[7];
    char stringdata12[5];
    char stringdata13[12];
    char stringdata14[23];
    char stringdata15[11];
    char stringdata16[9];
    char stringdata17[18];
    char stringdata18[6];
    char stringdata19[29];
    char stringdata20[12];
    char stringdata21[26];
    char stringdata22[17];
    char stringdata23[5];
    char stringdata24[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChatWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ChatWindow_t qt_meta_stringdata_ChatWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatWindow"
        QT_MOC_LITERAL(11, 17),  // "attemptConnection"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "attemptLogin"
        QT_MOC_LITERAL(43, 8),  // "username"
        QT_MOC_LITERAL(52, 8),  // "loggedIn"
        QT_MOC_LITERAL(61, 11),  // "loginFailed"
        QT_MOC_LITERAL(73, 6),  // "reason"
        QT_MOC_LITERAL(80, 7),  // "logJson"
        QT_MOC_LITERAL(88, 4),  // "json"
        QT_MOC_LITERAL(93, 21),  // "publicMessageReceived"
        QT_MOC_LITERAL(115, 6),  // "sender"
        QT_MOC_LITERAL(122, 4),  // "text"
        QT_MOC_LITERAL(127, 11),  // "sendMessage"
        QT_MOC_LITERAL(139, 22),  // "disconnectedFromServer"
        QT_MOC_LITERAL(162, 10),  // "userJoined"
        QT_MOC_LITERAL(173, 8),  // "userLeft"
        QT_MOC_LITERAL(182, 17),  // "connectedToServer"
        QT_MOC_LITERAL(200, 5),  // "error"
        QT_MOC_LITERAL(206, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(235, 11),  // "socketError"
        QT_MOC_LITERAL(247, 25),  // "on_clientList_itemClicked"
        QT_MOC_LITERAL(273, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(290, 4),  // "item"
        QT_MOC_LITERAL(295, 31)   // "on_clientList_itemDoubleClicked"
    },
    "ChatWindow",
    "attemptConnection",
    "",
    "attemptLogin",
    "username",
    "loggedIn",
    "loginFailed",
    "reason",
    "logJson",
    "json",
    "publicMessageReceived",
    "sender",
    "text",
    "sendMessage",
    "disconnectedFromServer",
    "userJoined",
    "userLeft",
    "connectedToServer",
    "error",
    "QAbstractSocket::SocketError",
    "socketError",
    "on_clientList_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_clientList_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    1,   99,    2, 0x08,    2 /* Private */,
       5,    0,  102,    2, 0x08,    4 /* Private */,
       6,    1,  103,    2, 0x08,    5 /* Private */,
       8,    1,  106,    2, 0x08,    7 /* Private */,
      10,    2,  109,    2, 0x08,    9 /* Private */,
      13,    0,  114,    2, 0x08,   12 /* Private */,
      14,    0,  115,    2, 0x08,   13 /* Private */,
      15,    1,  116,    2, 0x08,   14 /* Private */,
      16,    1,  119,    2, 0x08,   16 /* Private */,
      17,    0,  122,    2, 0x08,   18 /* Private */,
      18,    1,  123,    2, 0x08,   19 /* Private */,
      21,    1,  126,    2, 0x08,   21 /* Private */,
      24,    1,  129,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void ChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->attemptConnection(); break;
        case 1: _t->attemptLogin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->loggedIn(); break;
        case 3: _t->loginFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->logJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->publicMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->sendMessage(); break;
        case 7: _t->disconnectedFromServer(); break;
        case 8: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->connectedToServer(); break;
        case 11: _t->error((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 12: _t->on_clientList_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 13: _t->on_clientList_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject ChatWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChatWindow.offsetsAndSizes,
    qt_meta_data_ChatWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChatWindow_t
, QtPrivate::TypeAndForceComplete<ChatWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
