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
    uint offsetsAndSizes[100];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[7];
    char stringdata7[9];
    char stringdata8[18];
    char stringdata9[13];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[12];
    char stringdata13[7];
    char stringdata14[8];
    char stringdata15[22];
    char stringdata16[5];
    char stringdata17[23];
    char stringdata18[8];
    char stringdata19[12];
    char stringdata20[23];
    char stringdata21[11];
    char stringdata22[9];
    char stringdata23[18];
    char stringdata24[6];
    char stringdata25[29];
    char stringdata26[12];
    char stringdata27[11];
    char stringdata28[17];
    char stringdata29[9];
    char stringdata30[16];
    char stringdata31[6];
    char stringdata32[12];
    char stringdata33[16];
    char stringdata34[15];
    char stringdata35[20];
    char stringdata36[9];
    char stringdata37[23];
    char stringdata38[18];
    char stringdata39[26];
    char stringdata40[17];
    char stringdata41[5];
    char stringdata42[32];
    char stringdata43[8];
    char stringdata44[20];
    char stringdata45[10];
    char stringdata46[5];
    char stringdata47[17];
    char stringdata48[15];
    char stringdata49[13];
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
        QT_MOC_LITERAL(79, 17),  // "attemptConnection"
        QT_MOC_LITERAL(97, 12),  // "attemptLogin"
        QT_MOC_LITERAL(110, 8),  // "username"
        QT_MOC_LITERAL(119, 8),  // "loggedIn"
        QT_MOC_LITERAL(128, 11),  // "loginFailed"
        QT_MOC_LITERAL(140, 6),  // "reason"
        QT_MOC_LITERAL(147, 7),  // "logJson"
        QT_MOC_LITERAL(155, 21),  // "publicMessageReceived"
        QT_MOC_LITERAL(177, 4),  // "text"
        QT_MOC_LITERAL(182, 22),  // "privateMessageReceived"
        QT_MOC_LITERAL(205, 7),  // "message"
        QT_MOC_LITERAL(213, 11),  // "sendMessage"
        QT_MOC_LITERAL(225, 22),  // "disconnectedFromServer"
        QT_MOC_LITERAL(248, 10),  // "userJoined"
        QT_MOC_LITERAL(259, 8),  // "userLeft"
        QT_MOC_LITERAL(268, 17),  // "connectedToServer"
        QT_MOC_LITERAL(286, 5),  // "error"
        QT_MOC_LITERAL(292, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(321, 11),  // "socketError"
        QT_MOC_LITERAL(333, 10),  // "createRoom"
        QT_MOC_LITERAL(344, 16),  // "userListReceived"
        QT_MOC_LITERAL(361, 8),  // "userList"
        QT_MOC_LITERAL(370, 15),  // "refreshUserList"
        QT_MOC_LITERAL(386, 5),  // "users"
        QT_MOC_LITERAL(392, 11),  // "getUserList"
        QT_MOC_LITERAL(404, 15),  // "newRoomRejected"
        QT_MOC_LITERAL(420, 14),  // "newRoomCreated"
        QT_MOC_LITERAL(435, 19),  // "containsPrivateChat"
        QT_MOC_LITERAL(455, 8),  // "chatName"
        QT_MOC_LITERAL(464, 22),  // "roomInvitationReceived"
        QT_MOC_LITERAL(487, 17),  // "privateChatClosed"
        QT_MOC_LITERAL(505, 25),  // "on_clientList_itemClicked"
        QT_MOC_LITERAL(531, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(548, 4),  // "item"
        QT_MOC_LITERAL(553, 31),  // "on_clientList_itemDoubleClicked"
        QT_MOC_LITERAL(585, 7),  // "addUser"
        QT_MOC_LITERAL(593, 19),  // "roomMessageReceived"
        QT_MOC_LITERAL(613, 9),  // "roomUsers"
        QT_MOC_LITERAL(623, 4),  // "list"
        QT_MOC_LITERAL(628, 16),  // "requestRoomUsers"
        QT_MOC_LITERAL(645, 14),  // "roomUserJoined"
        QT_MOC_LITERAL(660, 12)   // "roomUserLeft"
    },
    "ChatWindow",
    "sendJson",
    "",
    "json",
    "processTerminated",
    "invitationReceived",
    "sender",
    "roomName",
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
    "users",
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
    "roomMessageReceived",
    "roomUsers",
    "list",
    "requestRoomUsers",
    "roomUserJoined",
    "roomUserLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  212,    2, 0x06,    1 /* Public */,
       4,    0,  215,    2, 0x06,    3 /* Public */,
       5,    2,  216,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  221,    2, 0x08,    7 /* Private */,
       9,    1,  222,    2, 0x08,    8 /* Private */,
      11,    1,  225,    2, 0x08,   10 /* Private */,
      12,    1,  228,    2, 0x08,   12 /* Private */,
      14,    1,  231,    2, 0x08,   14 /* Private */,
      15,    2,  234,    2, 0x08,   16 /* Private */,
      17,    2,  239,    2, 0x08,   19 /* Private */,
      19,    0,  244,    2, 0x08,   22 /* Private */,
      20,    0,  245,    2, 0x08,   23 /* Private */,
      21,    1,  246,    2, 0x08,   24 /* Private */,
      22,    1,  249,    2, 0x08,   26 /* Private */,
      23,    0,  252,    2, 0x08,   28 /* Private */,
      24,    1,  253,    2, 0x08,   29 /* Private */,
      27,    0,  256,    2, 0x08,   31 /* Private */,
      28,    1,  257,    2, 0x08,   32 /* Private */,
      30,    1,  260,    2, 0x08,   34 /* Private */,
      32,    0,  263,    2, 0x08,   36 /* Private */,
      33,    0,  264,    2, 0x08,   37 /* Private */,
      34,    0,  265,    2, 0x08,   38 /* Private */,
      35,    1,  266,    2, 0x08,   39 /* Private */,
      37,    3,  269,    2, 0x08,   41 /* Private */,
      38,    1,  276,    2, 0x08,   45 /* Private */,
      39,    1,  279,    2, 0x08,   47 /* Private */,
      42,    1,  282,    2, 0x08,   49 /* Private */,
      43,    1,  285,    2, 0x08,   51 /* Private */,
      44,    3,  288,    2, 0x08,   53 /* Private */,
      45,    1,  295,    2, 0x08,   57 /* Private */,
      47,    1,  298,    2, 0x08,   59 /* Private */,
      48,    2,  301,    2, 0x08,   61 /* Private */,
      49,    2,  306,    2, 0x08,   64 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,   29,
    QMetaType::Void, QMetaType::QStringList,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   18,    6,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,   18,
    QMetaType::Void, QMetaType::QJsonArray,   46,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,

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
        case 3: _t->attemptConnection(); break;
        case 4: _t->attemptLogin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->loggedIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->loginFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->logJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->publicMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->privateMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->sendMessage(); break;
        case 11: _t->disconnectedFromServer(); break;
        case 12: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->connectedToServer(); break;
        case 15: _t->error((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 16: _t->createRoom(); break;
        case 17: _t->userListReceived((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 18: _t->refreshUserList((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 19: _t->getUserList(); break;
        case 20: _t->newRoomRejected(); break;
        case 21: _t->newRoomCreated(); break;
        case 22: { bool _r = _t->containsPrivateChat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->roomInvitationReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 24: _t->privateChatClosed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->on_clientList_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 26: _t->on_clientList_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 27: _t->addUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->roomMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 29: _t->roomUsers((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 30: _t->requestRoomUsers((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->roomUserJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 32: _t->roomUserLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
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
    }
}

const QMetaObject ChatWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChatWindow.offsetsAndSizes,
    qt_meta_data_ChatWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChatWindow_t
, QtPrivate::TypeAndForceComplete<ChatWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<QString> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


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
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
