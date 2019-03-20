/****************************************************************************
** Meta object code from reading C++ file 'vncview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vncview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vncview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VncView_t {
    QByteArrayData data[16];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VncView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VncView_t qt_meta_stringdata_VncView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "VncView"
QT_MOC_LITERAL(1, 8, 11), // "scaleResize"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "w"
QT_MOC_LITERAL(4, 23, 1), // "h"
QT_MOC_LITERAL(5, 25, 11), // "updateImage"
QT_MOC_LITERAL(6, 37, 1), // "x"
QT_MOC_LITERAL(7, 39, 1), // "y"
QT_MOC_LITERAL(8, 41, 6), // "setCut"
QT_MOC_LITERAL(9, 48, 4), // "text"
QT_MOC_LITERAL(10, 53, 15), // "requestPassword"
QT_MOC_LITERAL(11, 69, 17), // "includingUsername"
QT_MOC_LITERAL(12, 87, 18), // "outputErrorMessage"
QT_MOC_LITERAL(13, 106, 7), // "message"
QT_MOC_LITERAL(14, 114, 15), // "sshErrorMessage"
QT_MOC_LITERAL(15, 130, 20) // "clipboardDataChanged"

    },
    "VncView\0scaleResize\0\0w\0h\0updateImage\0"
    "x\0y\0setCut\0text\0requestPassword\0"
    "includingUsername\0outputErrorMessage\0"
    "message\0sshErrorMessage\0clipboardDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VncView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       5,    4,   54,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,
      14,    1,   72,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    3,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void VncView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VncView *_t = static_cast<VncView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->setCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->requestPassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->outputErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sshErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->clipboardDataChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VncView::staticMetaObject = { {
    &RemoteView::staticMetaObject,
    qt_meta_stringdata_VncView.data,
    qt_meta_data_VncView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VncView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VncView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VncView.stringdata0))
        return static_cast<void*>(this);
    return RemoteView::qt_metacast(_clname);
}

int VncView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
