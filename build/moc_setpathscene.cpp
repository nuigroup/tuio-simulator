/****************************************************************************
** Meta object code from reading C++ file 'setpathscene.h'
**
** Created: Sun Aug 10 23:08:59 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/setpathscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setpathscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetPathScene[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SetPathScene[] = {
    "SetPathScene\0\0i,j\0addPoint(double,double)\0"
};

const QMetaObject SetPathScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_SetPathScene,
      qt_meta_data_SetPathScene, 0 }
};

const QMetaObject *SetPathScene::metaObject() const
{
    return &staticMetaObject;
}

void *SetPathScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetPathScene))
	return static_cast<void*>(const_cast< SetPathScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int SetPathScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addPoint((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SetPathScene::addPoint(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
