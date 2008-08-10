/****************************************************************************
** Meta object code from reading C++ file 'debugWindowImpl.h'
**
** Created: Sun Aug 10 23:09:04 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/debugWindowImpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugWindowImpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_debugWindowImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_debugWindowImpl[] = {
    "debugWindowImpl\0"
};

const QMetaObject debugWindowImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_debugWindowImpl,
      qt_meta_data_debugWindowImpl, 0 }
};

const QMetaObject *debugWindowImpl::metaObject() const
{
    return &staticMetaObject;
}

void *debugWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_debugWindowImpl))
	return static_cast<void*>(const_cast< debugWindowImpl*>(this));
    if (!strcmp(_clname, "Ui6::debugWindow"))
	return static_cast< Ui6::debugWindow*>(const_cast< debugWindowImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int debugWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
