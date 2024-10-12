/****************************************************************************
** Meta object code from reading C++ file 'customerwindget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/customerwindget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customerwindget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomerWindget_t {
    QByteArrayData data[17];
    char stringdata[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomerWindget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomerWindget_t qt_meta_stringdata_CustomerWindget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CustomerWindget"
QT_MOC_LITERAL(1, 16, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "on_btnMenu_Min_clicked"
QT_MOC_LITERAL(4, 63, 24), // "on_btnMenu_Close_clicked"
QT_MOC_LITERAL(5, 88, 18), // "on_punroom_clicked"
QT_MOC_LITERAL(6, 107, 19), // "on_pbnGuest_clicked"
QT_MOC_LITERAL(7, 127, 17), // "on_pbnROK_clicked"
QT_MOC_LITERAL(8, 145, 29), // "on_comboBoxRoomType_activated"
QT_MOC_LITERAL(9, 175, 4), // "arg1"
QT_MOC_LITERAL(10, 180, 25), // "on_pbnroomPicture_clicked"
QT_MOC_LITERAL(11, 206, 20), // "on_pbnmodify_clicked"
QT_MOC_LITERAL(12, 227, 22), // "on_pbuModifyOk_clicked"
QT_MOC_LITERAL(13, 250, 20), // "on_pbnCancle_clicked"
QT_MOC_LITERAL(14, 271, 37), // "on_punroom_customContextMenuR..."
QT_MOC_LITERAL(15, 309, 3), // "pos"
QT_MOC_LITERAL(16, 313, 14) // "showCustomInfo"

    },
    "CustomerWindget\0on_btnMenu_Max_clicked\0"
    "\0on_btnMenu_Min_clicked\0"
    "on_btnMenu_Close_clicked\0on_punroom_clicked\0"
    "on_pbnGuest_clicked\0on_pbnROK_clicked\0"
    "on_comboBoxRoomType_activated\0arg1\0"
    "on_pbnroomPicture_clicked\0"
    "on_pbnmodify_clicked\0on_pbuModifyOk_clicked\0"
    "on_pbnCancle_clicked\0"
    "on_punroom_customContextMenuRequested\0"
    "pos\0showCustomInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomerWindget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void,

       0        // eod
};

void CustomerWindget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomerWindget *_t = static_cast<CustomerWindget *>(_o);
        switch (_id) {
        case 0: _t->on_btnMenu_Max_clicked(); break;
        case 1: _t->on_btnMenu_Min_clicked(); break;
        case 2: _t->on_btnMenu_Close_clicked(); break;
        case 3: _t->on_punroom_clicked(); break;
        case 4: _t->on_pbnGuest_clicked(); break;
        case 5: _t->on_pbnROK_clicked(); break;
        case 6: _t->on_comboBoxRoomType_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pbnroomPicture_clicked(); break;
        case 8: _t->on_pbnmodify_clicked(); break;
        case 9: _t->on_pbuModifyOk_clicked(); break;
        case 10: _t->on_pbnCancle_clicked(); break;
        case 11: _t->on_punroom_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->showCustomInfo(); break;
        default: ;
        }
    }
}

const QMetaObject CustomerWindget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomerWindget.data,
      qt_meta_data_CustomerWindget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomerWindget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerWindget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomerWindget.stringdata))
        return static_cast<void*>(const_cast< CustomerWindget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomerWindget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
