/****************************************************************************
** Meta object code from reading C++ file 'photomain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../photomain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'photomain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhotoMain_t {
    QByteArrayData data[14];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhotoMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhotoMain_t qt_meta_stringdata_PhotoMain = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PhotoMain"
QT_MOC_LITERAL(1, 10, 19), // "on_pointBtn_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "on_lineBtn_clicked"
QT_MOC_LITERAL(4, 50, 18), // "on_rectBtn_clicked"
QT_MOC_LITERAL(5, 69, 22), // "on_colorSelect_clicked"
QT_MOC_LITERAL(6, 92, 27), // "on_actionAbout_us_triggered"
QT_MOC_LITERAL(7, 120, 32), // "on_spinBoxRadius_editingFinished"
QT_MOC_LITERAL(8, 153, 20), // "on_elipseBtn_clicked"
QT_MOC_LITERAL(9, 174, 26), // "on_smallEliplseBtn_clicked"
QT_MOC_LITERAL(10, 201, 25), // "on_actionImport_triggered"
QT_MOC_LITERAL(11, 227, 20), // "on_eraserBtn_clicked"
QT_MOC_LITERAL(12, 248, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(13, 268, 25) // "on_actionExport_triggered"

    },
    "PhotoMain\0on_pointBtn_clicked\0\0"
    "on_lineBtn_clicked\0on_rectBtn_clicked\0"
    "on_colorSelect_clicked\0"
    "on_actionAbout_us_triggered\0"
    "on_spinBoxRadius_editingFinished\0"
    "on_elipseBtn_clicked\0on_smallEliplseBtn_clicked\0"
    "on_actionImport_triggered\0"
    "on_eraserBtn_clicked\0on_clearBtn_clicked\0"
    "on_actionExport_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhotoMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void PhotoMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PhotoMain *_t = static_cast<PhotoMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pointBtn_clicked(); break;
        case 1: _t->on_lineBtn_clicked(); break;
        case 2: _t->on_rectBtn_clicked(); break;
        case 3: _t->on_colorSelect_clicked(); break;
        case 4: _t->on_actionAbout_us_triggered(); break;
        case 5: _t->on_spinBoxRadius_editingFinished(); break;
        case 6: _t->on_elipseBtn_clicked(); break;
        case 7: _t->on_smallEliplseBtn_clicked(); break;
        case 8: _t->on_actionImport_triggered(); break;
        case 9: _t->on_eraserBtn_clicked(); break;
        case 10: _t->on_clearBtn_clicked(); break;
        case 11: _t->on_actionExport_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PhotoMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PhotoMain.data,
      qt_meta_data_PhotoMain,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PhotoMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhotoMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhotoMain.stringdata0))
        return static_cast<void*>(const_cast< PhotoMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PhotoMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
