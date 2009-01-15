/****************************************************************************
** Meta object code from reading C++ file 'readmeDialogImpl.h'
**
** Created: Thu Jan 15 17:00:17 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/readmeDialogImpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readmeDialogImpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_readmeDialogImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_readmeDialogImpl[] = {
    "readmeDialogImpl\0"
};

const QMetaObject readmeDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_readmeDialogImpl,
      qt_meta_data_readmeDialogImpl, 0 }
};

const QMetaObject *readmeDialogImpl::metaObject() const
{
    return &staticMetaObject;
}

void *readmeDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_readmeDialogImpl))
        return static_cast<void*>(const_cast< readmeDialogImpl*>(this));
    if (!strcmp(_clname, "Ui7::readmeDialog"))
        return static_cast< Ui7::readmeDialog*>(const_cast< readmeDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int readmeDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
