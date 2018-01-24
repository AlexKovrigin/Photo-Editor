/****************************************************************************
** Meta object code from reading C++ file 'colorselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../colorselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_colorSelect_t {
    QByteArrayData data[13];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_colorSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_colorSelect_t qt_meta_stringdata_colorSelect = {
    {
QT_MOC_LITERAL(0, 0, 11), // "colorSelect"
QT_MOC_LITERAL(1, 12, 19), // "on_blackBtn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_whiteBtn_clicked"
QT_MOC_LITERAL(4, 53, 18), // "on_grayBtn_clicked"
QT_MOC_LITERAL(5, 72, 17), // "on_redBtn_clicked"
QT_MOC_LITERAL(6, 90, 19), // "on_greenBtn_clicked"
QT_MOC_LITERAL(7, 110, 18), // "on_blueBtn_clicked"
QT_MOC_LITERAL(8, 129, 20), // "on_yellowBtn_clicked"
QT_MOC_LITERAL(9, 150, 21), // "on_magentaBtn_clicked"
QT_MOC_LITERAL(10, 172, 18), // "on_cyanBtn_clicked"
QT_MOC_LITERAL(11, 191, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(12, 213, 21) // "on_buttonBox_rejected"

    },
    "colorSelect\0on_blackBtn_clicked\0\0"
    "on_whiteBtn_clicked\0on_grayBtn_clicked\0"
    "on_redBtn_clicked\0on_greenBtn_clicked\0"
    "on_blueBtn_clicked\0on_yellowBtn_clicked\0"
    "on_magentaBtn_clicked\0on_cyanBtn_clicked\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colorSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void colorSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        colorSelect *_t = static_cast<colorSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_blackBtn_clicked(); break;
        case 1: _t->on_whiteBtn_clicked(); break;
        case 2: _t->on_grayBtn_clicked(); break;
        case 3: _t->on_redBtn_clicked(); break;
        case 4: _t->on_greenBtn_clicked(); break;
        case 5: _t->on_blueBtn_clicked(); break;
        case 6: _t->on_yellowBtn_clicked(); break;
        case 7: _t->on_magentaBtn_clicked(); break;
        case 8: _t->on_cyanBtn_clicked(); break;
        case 9: _t->on_buttonBox_accepted(); break;
        case 10: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject colorSelect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_colorSelect.data,
      qt_meta_data_colorSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *colorSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colorSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_colorSelect.stringdata0))
        return static_cast<void*>(const_cast< colorSelect*>(this));
    return QDialog::qt_metacast(_clname);
}

int colorSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
