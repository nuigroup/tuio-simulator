/****************************************************************************
** Meta object code from reading C++ file 'setpathwinodwimpl.h'
**
** Created: Mon Jun 9 01:26:08 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/setpathwinodwimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setpathwinodwimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetPathWindowImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   18,   18,   18, 0x08,
      46,   18,   18,   18, 0x08,
      64,   60,   18,   18, 0x08,
      95,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetPathWindowImpl[] = {
    "SetPathWindowImpl\0\0setPathSignal()\0"
    "addPoint()\0previewPath()\0i,j\0"
    "addPointOfScene(double,double)\0setpath()\0"
};

const QMetaObject SetPathWindowImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SetPathWindowImpl,
      qt_meta_data_SetPathWindowImpl, 0 }
};

const QMetaObject *SetPathWindowImpl::metaObject() const
{
    return &staticMetaObject;
}

void *SetPathWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetPathWindowImpl))
	return static_cast<void*>(const_cast< SetPathWindowImpl*>(this));
    if (!strcmp(_clname, "Ui2::SetPathWindow"))
	return static_cast< Ui2::SetPathWindow*>(const_cast< SetPathWindowImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SetPathWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setPathSignal(); break;
        case 1: addPoint(); break;
        case 2: previewPath(); break;
        case 3: addPointOfScene((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: setpath(); break;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SetPathWindowImpl::setPathSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
