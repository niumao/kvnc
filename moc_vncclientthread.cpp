/****************************************************************************
** Meta object code from reading C++ file 'vncclientthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vncclientthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vncclientthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VncClientThread_t {
    QByteArrayData data[28];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VncClientThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VncClientThread_t qt_meta_stringdata_VncClientThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VncClientThread"
QT_MOC_LITERAL(1, 16, 12), // "imageUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "x"
QT_MOC_LITERAL(4, 32, 1), // "y"
QT_MOC_LITERAL(5, 34, 1), // "w"
QT_MOC_LITERAL(6, 36, 1), // "h"
QT_MOC_LITERAL(7, 38, 6), // "gotCut"
QT_MOC_LITERAL(8, 45, 4), // "text"
QT_MOC_LITERAL(9, 50, 15), // "passwordRequest"
QT_MOC_LITERAL(10, 66, 17), // "includingUsername"
QT_MOC_LITERAL(11, 84, 18), // "outputErrorMessage"
QT_MOC_LITERAL(12, 103, 7), // "message"
QT_MOC_LITERAL(13, 111, 18), // "clientStateChanged"
QT_MOC_LITERAL(14, 130, 24), // "RemoteView::RemoteStatus"
QT_MOC_LITERAL(15, 155, 6), // "status"
QT_MOC_LITERAL(16, 162, 7), // "details"
QT_MOC_LITERAL(17, 170, 10), // "mouseEvent"
QT_MOC_LITERAL(18, 181, 10), // "buttonMask"
QT_MOC_LITERAL(19, 192, 8), // "keyEvent"
QT_MOC_LITERAL(20, 201, 3), // "key"
QT_MOC_LITERAL(21, 205, 7), // "pressed"
QT_MOC_LITERAL(22, 213, 9), // "clientCut"
QT_MOC_LITERAL(23, 223, 23), // "checkOutputErrorMessage"
QT_MOC_LITERAL(24, 247, 10), // "ColorDepth"
QT_MOC_LITERAL(25, 258, 5), // "bpp32"
QT_MOC_LITERAL(26, 264, 5), // "bpp16"
QT_MOC_LITERAL(27, 270, 4) // "bpp8"

    },
    "VncClientThread\0imageUpdated\0\0x\0y\0w\0"
    "h\0gotCut\0text\0passwordRequest\0"
    "includingUsername\0outputErrorMessage\0"
    "message\0clientStateChanged\0"
    "RemoteView::RemoteStatus\0status\0details\0"
    "mouseEvent\0buttonMask\0keyEvent\0key\0"
    "pressed\0clientCut\0checkOutputErrorMessage\0"
    "ColorDepth\0bpp32\0bpp16\0bpp8"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VncClientThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x26 /* Public | MethodCloned */,
      11,    1,   80,    2, 0x06 /* Public */,
      13,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    3,   88,    2, 0x0a /* Public */,
      19,    2,   95,    2, 0x0a /* Public */,
      22,    1,  100,    2, 0x0a /* Public */,
      23,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   20,   21,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      24,   24, 0x0,    3,  109,

 // enum data: key, value
      25, uint(VncClientThread::bpp32),
      26, uint(VncClientThread::bpp16),
      27, uint(VncClientThread::bpp8),

       0        // eod
};

void VncClientThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VncClientThread *_t = static_cast<VncClientThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->gotCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->passwordRequest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->passwordRequest(); break;
        case 4: _t->outputErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->clientStateChanged((*reinterpret_cast< RemoteView::RemoteStatus(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->mouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->keyEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->clientCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->checkOutputErrorMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VncClientThread::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncClientThread::imageUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VncClientThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncClientThread::gotCut)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VncClientThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncClientThread::passwordRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VncClientThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncClientThread::outputErrorMessage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VncClientThread::*)(RemoteView::RemoteStatus , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VncClientThread::clientStateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VncClientThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_VncClientThread.data,
    qt_meta_data_VncClientThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VncClientThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VncClientThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VncClientThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int VncClientThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void VncClientThread::imageUpdated(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VncClientThread::gotCut(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VncClientThread::passwordRequest(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void VncClientThread::outputErrorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VncClientThread::clientStateChanged(RemoteView::RemoteStatus _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
