/****************************************************************************
** Meta object code from reading C++ file 'homescreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SocialNetwork/homescreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HomeScreen_t {
    QByteArrayData data[11];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomeScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomeScreen_t qt_meta_stringdata_HomeScreen = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HomeScreen"
QT_MOC_LITERAL(1, 11, 4), // "redy"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "disc"
QT_MOC_LITERAL(4, 22, 18), // "connection_to_user"
QT_MOC_LITERAL(5, 41, 14), // "server_connect"
QT_MOC_LITERAL(6, 56, 29), // "on_pushButton_connect_clicked"
QT_MOC_LITERAL(7, 86, 32), // "on_pushButton_disconnect_clicked"
QT_MOC_LITERAL(8, 119, 27), // "on_pushButton_rules_clicked"
QT_MOC_LITERAL(9, 147, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(10, 174, 20) // "on_buttonLog_clicked"

    },
    "HomeScreen\0redy\0\0disc\0connection_to_user\0"
    "server_connect\0on_pushButton_connect_clicked\0"
    "on_pushButton_disconnect_clicked\0"
    "on_pushButton_rules_clicked\0"
    "on_pushButton_send_clicked\0"
    "on_buttonLog_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomeScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HomeScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HomeScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redy(); break;
        case 1: _t->disc(); break;
        case 2: _t->connection_to_user(); break;
        case 3: _t->server_connect(); break;
        case 4: _t->on_pushButton_connect_clicked(); break;
        case 5: _t->on_pushButton_disconnect_clicked(); break;
        case 6: _t->on_pushButton_rules_clicked(); break;
        case 7: _t->on_pushButton_send_clicked(); break;
        case 8: _t->on_buttonLog_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HomeScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HomeScreen.data,
    qt_meta_data_HomeScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HomeScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HomeScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HomeScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
