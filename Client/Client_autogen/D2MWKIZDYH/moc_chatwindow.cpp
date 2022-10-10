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
#include <QtCore/QList>
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
    uint offsetsAndSizes[92];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[7];
    char stringdata7[9];
    char stringdata8[10];
    char stringdata9[6];
    char stringdata10[18];
    char stringdata11[13];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[12];
    char stringdata15[7];
    char stringdata16[8];
    char stringdata17[22];
    char stringdata18[5];
    char stringdata19[23];
    char stringdata20[8];
    char stringdata21[12];
    char stringdata22[23];
    char stringdata23[11];
    char stringdata24[9];
    char stringdata25[18];
    char stringdata26[6];
    char stringdata27[29];
    char stringdata28[12];
    char stringdata29[11];
    char stringdata30[17];
    char stringdata31[9];
    char stringdata32[16];
    char stringdata33[12];
    char stringdata34[16];
    char stringdata35[15];
    char stringdata36[20];
    char stringdata37[9];
    char stringdata38[23];
    char stringdata39[18];
    char stringdata40[26];
    char stringdata41[17];
    char stringdata42[5];
    char stringdata43[32];
    char stringdata44[8];
    char stringdata45[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChatWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ChatWindow_t qt_meta_stringdata_ChatWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatWindow"
        QT_MOC_LITERAL(11, 8),  // "sendJson"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "json"
        QT_MOC_LITERAL(26, 17),  // "processTerminated"
        QT_MOC_LITERAL(44, 18),  // "invitationReceived"
        QT_MOC_LITERAL(63, 6),  // "sender"
        QT_MOC_LITERAL(70, 8),  // "roomName"
        QT_MOC_LITERAL(79, 9),  // "roomUsers"
        QT_MOC_LITERAL(89, 5),  // "users"
        QT_MOC_LITERAL(95, 17),  // "attemptConnection"
        QT_MOC_LITERAL(113, 12),  // "attemptLogin"
        QT_MOC_LITERAL(126, 8),  // "username"
        QT_MOC_LITERAL(135, 8),  // "loggedIn"
        QT_MOC_LITERAL(144, 11),  // "loginFailed"
        QT_MOC_LITERAL(156, 6),  // "reason"
        QT_MOC_LITERAL(163, 7),  // "logJson"
        QT_MOC_LITERAL(171, 21),  // "publicMessageReceived"
        QT_MOC_LITERAL(193, 4),  // "text"
        QT_MOC_LITERAL(198, 22),  // "privateMessageReceived"
        QT_MOC_LITERAL(221, 7),  // "message"
        QT_MOC_LITERAL(229, 11),  // "sendMessage"
        QT_MOC_LITERAL(241, 22),  // "disconnectedFromServer"
        QT_MOC_LITERAL(264, 10),  // "userJoined"
        QT_MOC_LITERAL(275, 8),  // "userLeft"
        QT_MOC_LITERAL(284, 17),  // "connectedToServer"
        QT_MOC_LITERAL(302, 5),  // "error"
        QT_MOC_LITERAL(308, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(337, 11),  // "socketError"
        QT_MOC_LITERAL(349, 10),  // "createRoom"
        QT_MOC_LITERAL(360, 16),  // "userListReceived"
        QT_MOC_LITERAL(377, 8),  // "userList"
        QT_MOC_LITERAL(386, 15),  // "refreshUserList"
        QT_MOC_LITERAL(402, 11),  // "getUserList"
        QT_MOC_LITERAL(414, 15),  // "newRoomRejected"
        QT_MOC_LITERAL(430, 14),  // "newRoomCreated"
        QT_MOC_LITERAL(445, 19),  // "containsPrivateChat"
        QT_MOC_LITERAL(465, 8),  // "chatName"
        QT_MOC_LITERAL(474, 22),  // "roomInvitationReceived"
        QT_MOC_LITERAL(497, 17),  // "privateChatClosed"
        QT_MOC_LITERAL(515, 25),  // "on_clientList_itemClicked"
        QT_MOC_LITERAL(541, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(558, 4),  // "item"
        QT_MOC_LITERAL(563, 31),  // "on_clientList_itemDoubleClicked"
        QT_MOC_LITERAL(595, 7),  // "addUser"
        QT_MOC_LITERAL(603, 19)   // "roomMessageReceived"
    },
    "ChatWindow",
    "sendJson",
    "",
    "json",
    "processTerminated",
    "invitationReceived",
    "sender",
    "roomName",
    "roomUsers",
    "users",
    "attemptConnection",
    "attemptLogin",
    "username",
    "loggedIn",
    "loginFailed",
    "reason",
    "logJson",
    "publicMessageReceived",
    "text",
    "privateMessageReceived",
    "message",
    "sendMessage",
    "disconnectedFromServer",
    "userJoined",
    "userLeft",
    "connectedToServer",
    "error",
    "QAbstractSocket::SocketError",
    "socketError",
    "createRoom",
    "userListReceived",
    "userList",
    "refreshUserList",
    "getUserList",
    "newRoomRejected",
    "newRoomCreated",
    "containsPrivateChat",
    "chatName",
    "roomInvitationReceived",
    "privateChatClosed",
    "on_clientList_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_clientList_itemDoubleClicked",
    "addUser",
    "roomMessageReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  194,    2, 0x06,    1 /* Public */,
       4,    0,  197,    2, 0x06,    3 /* Public */,
       5,    2,  198,    2, 0x06,    4 /* Public */,
       8,    2,  203,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  208,    2, 0x08,   10 /* Private */,
      11,    1,  209,    2, 0x08,   11 /* Private */,
      13,    1,  212,    2, 0x08,   13 /* Private */,
      14,    1,  215,    2, 0x08,   15 /* Private */,
      16,    1,  218,    2, 0x08,   17 /* Private */,
      17,    2,  221,    2, 0x08,   19 /* Private */,
      19,    2,  226,    2, 0x08,   22 /* Private */,
      21,    0,  231,    2, 0x08,   25 /* Private */,
      22,    0,  232,    2, 0x08,   26 /* Private */,
      23,    1,  233,    2, 0x08,   27 /* Private */,
      24,    1,  236,    2, 0x08,   29 /* Private */,
      25,    0,  239,    2, 0x08,   31 /* Private */,
      26,    1,  240,    2, 0x08,   32 /* Private */,
      29,    0,  243,    2, 0x08,   34 /* Private */,
      30,    1,  244,    2, 0x08,   35 /* Private */,
      32,    1,  247,    2, 0x08,   37 /* Private */,
      33,    0,  250,    2, 0x08,   39 /* Private */,
      34,    0,  251,    2, 0x08,   40 /* Private */,
      35,    0,  252,    2, 0x08,   41 /* Private */,
      36,    1,  253,    2, 0x08,   42 /* Private */,
      38,    2,  256,    2, 0x08,   44 /* Private */,
      39,    1,  261,    2, 0x08,   47 /* Private */,
      40,    1,  264,    2, 0x08,   49 /* Private */,
      43,    1,  267,    2, 0x08,   51 /* Private */,
      44,    1,  270,    2, 0x08,   53 /* Private */,
      45,    3,  273,    2, 0x08,   55 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    7,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,   31,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   20,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,   20,

       0        // eod
};

void ChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendJson((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->processTerminated(); break;
        case 2: _t->invitationReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->roomUsers((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 4: _t->attemptConnection(); break;
        case 5: _t->attemptLogin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->loggedIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->loginFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->logJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->publicMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->privateMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->sendMessage(); break;
        case 12: _t->disconnectedFromServer(); break;
        case 13: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->connectedToServer(); break;
        case 16: _t->error((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 17: _t->createRoom(); break;
        case 18: _t->userListReceived((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 19: _t->refreshUserList((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 20: _t->getUserList(); break;
        case 21: _t->newRoomRejected(); break;
        case 22: _t->newRoomCreated(); break;
        case 23: { bool _r = _t->containsPrivateChat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->roomInvitationReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->privateChatClosed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->on_clientList_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 27: _t->on_clientList_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 28: _t->addUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->roomMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
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
            using _t = void (ChatWindow::*)(const QJsonObject & );
            if (_t _q_method = &ChatWindow::sendJson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatWindow::*)();
            if (_t _q_method = &ChatWindow::processTerminated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatWindow::*)(const QString & , const QString & );
            if (_t _q_method = &ChatWindow::invitationReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatWindow::*)(const QString & , const QVector<QString> & );
            if (_t _q_method = &ChatWindow::roomUsers; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
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
, QtPrivate::TypeAndForceComplete<ChatWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<QString> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<QString> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


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
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void ChatWindow::sendJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatWindow::processTerminated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatWindow::invitationReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatWindow::roomUsers(const QString & _t1, const QVector<QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
