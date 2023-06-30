/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Src/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 30), // "on_sliderProgress_valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(5, 68, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(6, 88, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(7, 107, 25), // "on_btnFastForward_clicked"
QT_MOC_LITERAL(8, 133, 26), // "on_btnFastBackward_clicked"
QT_MOC_LITERAL(9, 160, 27), // "on_sliderVolume_sliderMoved"
QT_MOC_LITERAL(10, 188, 8), // "position"
QT_MOC_LITERAL(11, 197, 28), // "on_sliderVolume_valueChanged"
QT_MOC_LITERAL(12, 226, 19), // "on_btnAbout_clicked"
QT_MOC_LITERAL(13, 246, 18), // "on_btnQuit_clicked"
QT_MOC_LITERAL(14, 265, 22) // "on_btnDirectoy_clicked"

    },
    "MainWindow\0on_sliderProgress_valueChanged\0"
    "\0value\0on_btnPlay_clicked\0on_btnPause_clicked\0"
    "on_btnStop_clicked\0on_btnFastForward_clicked\0"
    "on_btnFastBackward_clicked\0"
    "on_sliderVolume_sliderMoved\0position\0"
    "on_sliderVolume_valueChanged\0"
    "on_btnAbout_clicked\0on_btnQuit_clicked\0"
    "on_btnDirectoy_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sliderProgress_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnPlay_clicked(); break;
        case 2: _t->on_btnPause_clicked(); break;
        case 3: _t->on_btnStop_clicked(); break;
        case 4: _t->on_btnFastForward_clicked(); break;
        case 5: _t->on_btnFastBackward_clicked(); break;
        case 6: _t->on_sliderVolume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_sliderVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_btnAbout_clicked(); break;
        case 9: _t->on_btnQuit_clicked(); break;
        case 10: _t->on_btnDirectoy_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
