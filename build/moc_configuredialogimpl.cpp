/****************************************************************************
** Meta object code from reading C++ file 'configuredialogimpl.h'
**
** Created: Sun Aug 10 23:08:47 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/configuredialogimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuredialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigureDialogImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      35,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigureDialogImpl[] = {
    "ConfigureDialogImpl\0\0newReciever()\0"
    "setReciever()\0"
};

const QMetaObject ConfigureDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigureDialogImpl,
      qt_meta_data_ConfigureDialogImpl, 0 }
};

const QMetaObject *ConfigureDialogImpl::metaObject() const
{
    return &staticMetaObject;
}

void *ConfigureDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureDialogImpl))
	return static_cast<void*>(const_cast< ConfigureDialogImpl*>(this));
    if (!strcmp(_clname, "Ui5::configureDialog"))
	return static_cast< Ui5::configureDialog*>(const_cast< ConfigureDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigureDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newReciever(); break;
        case 1: setReciever(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
