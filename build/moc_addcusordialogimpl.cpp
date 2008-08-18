/****************************************************************************
** Meta object code from reading C++ file 'addcusordialogimpl.h'
**
** Created: Mon Aug 11 17:33:54 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addcusordialogimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcusordialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddCursorDialogImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddCursorDialogImpl[] = {
    "AddCursorDialogImpl\0\0addCursor()\0"
};

const QMetaObject AddCursorDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddCursorDialogImpl,
      qt_meta_data_AddCursorDialogImpl, 0 }
};

const QMetaObject *AddCursorDialogImpl::metaObject() const
{
    return &staticMetaObject;
}

void *AddCursorDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddCursorDialogImpl))
	return static_cast<void*>(const_cast< AddCursorDialogImpl*>(this));
    if (!strcmp(_clname, "Ui4::addCursorDialog"))
	return static_cast< Ui4::addCursorDialog*>(const_cast< AddCursorDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddCursorDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addCursor(); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
