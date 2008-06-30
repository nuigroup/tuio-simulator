/****************************************************************************
** Meta object code from reading C++ file 'addellipsedialogimpl.h'
**
** Created: Tue Jul 1 01:18:08 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addellipsedialogimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addellipsedialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddEllipseDialogImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      35,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddEllipseDialogImpl[] = {
    "AddEllipseDialogImpl\0\0addEllipse()\0"
    "addFiducial()\0"
};

const QMetaObject AddEllipseDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddEllipseDialogImpl,
      qt_meta_data_AddEllipseDialogImpl, 0 }
};

const QMetaObject *AddEllipseDialogImpl::metaObject() const
{
    return &staticMetaObject;
}

void *AddEllipseDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddEllipseDialogImpl))
	return static_cast<void*>(const_cast< AddEllipseDialogImpl*>(this));
    if (!strcmp(_clname, "Ui3::addEllipseDialog"))
	return static_cast< Ui3::addEllipseDialog*>(const_cast< AddEllipseDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddEllipseDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addEllipse(); break;
        case 1: addFiducial(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
