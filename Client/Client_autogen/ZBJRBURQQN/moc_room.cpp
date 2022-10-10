/****************************************************************************
** Meta object code from reading C++ file 'room.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Common/room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Room_t {
    uint offsetsAndSizes[18];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[15];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Room_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Room_t qt_meta_stringdata_Room = {
    {
        QT_MOC_LITERAL(0, 4),  // "Room"
        QT_MOC_LITERAL(5, 11),  // "getRoomName"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 8),  // "getUsers"
        QT_MOC_LITERAL(27, 14),  // "getInvitations"
        QT_MOC_LITERAL(42, 7),  // "addUser"
        QT_MOC_LITERAL(50, 8),  // "username"
        QT_MOC_LITERAL(59, 13),  // "addInvitation"
        QT_MOC_LITERAL(73, 10)   // "deleteUser"
    },
    "Room",
    "getRoomName",
    "",
    "getUsers",
    "getInvitations",
    "addUser",
    "username",
    "addInvitation",
    "deleteUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Room[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    1,   53,    2, 0x0a,    4 /* Public */,
       7,    1,   56,    2, 0x0a,    6 /* Public */,
       8,    1,   59,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Room *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->getRoomName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QString> _r = _t->getUsers();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QString> _r = _t->getInvitations();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->addUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->addInvitation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->deleteUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Room::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Room.offsetsAndSizes,
    qt_meta_data_Room,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Room_t
, QtPrivate::TypeAndForceComplete<Room, std::true_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Room.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
