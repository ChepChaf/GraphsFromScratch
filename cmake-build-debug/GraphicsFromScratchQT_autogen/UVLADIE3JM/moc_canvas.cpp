/****************************************************************************
** Meta object code from reading C++ file 'canvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Canvas_t {
    const uint offsetsAndSize[28];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Canvas_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Canvas_t qt_meta_stringdata_Canvas = {
    {
QT_MOC_LITERAL(0, 6), // "Canvas"
QT_MOC_LITERAL(7, 27), // "projectionPlaneValueChanged"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 5), // "value"
QT_MOC_LITERAL(42, 19), // "cameraXValueChanged"
QT_MOC_LITERAL(62, 19), // "cameraYValueChanged"
QT_MOC_LITERAL(82, 19), // "cameraZValueChanged"
QT_MOC_LITERAL(102, 23), // "canvasWidthValueChanged"
QT_MOC_LITERAL(126, 24), // "canvasHeightValueChanged"
QT_MOC_LITERAL(151, 16), // "tMinValueChanged"
QT_MOC_LITERAL(168, 16), // "tMaxValueChanged"
QT_MOC_LITERAL(185, 20), // "sceneListItemChanged"
QT_MOC_LITERAL(206, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(223, 7) // "current"

    },
    "Canvas\0projectionPlaneValueChanged\0\0"
    "value\0cameraXValueChanged\0cameraYValueChanged\0"
    "cameraZValueChanged\0canvasWidthValueChanged\0"
    "canvasHeightValueChanged\0tMinValueChanged\0"
    "tMaxValueChanged\0sceneListItemChanged\0"
    "QListWidgetItem*\0current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Canvas[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    0 /* Public */,
       4,    1,   71,    2, 0x0a,    2 /* Public */,
       5,    1,   74,    2, 0x0a,    4 /* Public */,
       6,    1,   77,    2, 0x0a,    6 /* Public */,
       7,    1,   80,    2, 0x0a,    8 /* Public */,
       8,    1,   83,    2, 0x0a,   10 /* Public */,
       9,    1,   86,    2, 0x0a,   12 /* Public */,
      10,    1,   89,    2, 0x0a,   14 /* Public */,
      11,    1,   92,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Canvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->projectionPlaneValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cameraXValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->cameraYValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->cameraZValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->canvasWidthValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->canvasHeightValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->tMinValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->tMaxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->sceneListItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Canvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Canvas.offsetsAndSize,
    qt_meta_data_Canvas,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Canvas_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Canvas.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
