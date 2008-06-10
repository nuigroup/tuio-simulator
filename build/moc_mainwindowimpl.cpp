/****************************************************************************
** Meta object code from reading C++ file 'mainwindowimpl.h'
**
** Created: Wed Jun 11 01:49:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindowimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      29,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      56,   15,   15,   15, 0x08,
      72,   15,   15,   15, 0x08,
      89,   15,   15,   15, 0x08,
     108,   15,   15,   15, 0x08,
     128,   15,   15,   15, 0x08,
     150,   15,   15,   15, 0x08,
     175,  173,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowImpl[] = {
    "MainWindowImpl\0\0showDialog()\0deleteItem()\0"
    "saveProfile()\0setPathDialog()\0"
    "startAnimation()\0setanimationtime()\0"
    "animationFinished()\0showAddCursorDialog()\0"
    "showAddEllipseDialog()\0n\0"
    "animationslidertime(int)\0"
};

const QMetaObject MainWindowImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowImpl,
      qt_meta_data_MainWindowImpl, 0 }
};

const QMetaObject *MainWindowImpl::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowImpl))
	return static_cast<void*>(const_cast< MainWindowImpl*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
	return static_cast< Ui::MainWindow*>(const_cast< MainWindowImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showDialog(); break;
        case 1: deleteItem(); break;
        case 2: saveProfile(); break;
        case 3: setPathDialog(); break;
        case 4: startAnimation(); break;
        case 5: setanimationtime(); break;
        case 6: animationFinished(); break;
        case 7: showAddCursorDialog(); break;
        case 8: showAddEllipseDialog(); break;
        case 9: animationslidertime((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
