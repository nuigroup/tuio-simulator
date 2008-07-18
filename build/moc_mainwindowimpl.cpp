/****************************************************************************
** Meta object code from reading C++ file 'mainwindowimpl.h'
**
** Created: Fri Jul 18 19:16:01 2008
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
      17,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      29,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      55,   15,   15,   15, 0x08,
      66,   15,   15,   15, 0x08,
      82,   15,   15,   15, 0x08,
      99,   15,   15,   15, 0x08,
     118,   15,   15,   15, 0x08,
     138,   15,   15,   15, 0x08,
     160,   15,   15,   15, 0x08,
     185,  183,   15,   15, 0x08,
     210,   15,   15,   15, 0x08,
     232,   15,   15,   15, 0x08,
     242,   15,   15,   15, 0x08,
     263,   15,   15,   15, 0x08,
     273,   15,   15,   15, 0x08,
     291,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowImpl[] = {
    "MainWindowImpl\0\0showDialog()\0deleteItem()\0"
    "uploadItem()\0saveItem()\0setPathDialog()\0"
    "startAnimation()\0setanimationtime()\0"
    "animationFinished()\0showAddCursorDialog()\0"
    "showAddEllipseDialog()\0n\0"
    "animationslidertime(int)\0showConfigureDialog()\0"
    "startTx()\0restartPacketTimer()\0resetTx()\0"
    "showDebugWindow()\0showAboutQMTSim()\0"
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
        case 2: uploadItem(); break;
        case 3: saveItem(); break;
        case 4: setPathDialog(); break;
        case 5: startAnimation(); break;
        case 6: setanimationtime(); break;
        case 7: animationFinished(); break;
        case 8: showAddCursorDialog(); break;
        case 9: showAddEllipseDialog(); break;
        case 10: animationslidertime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: showConfigureDialog(); break;
        case 12: startTx(); break;
        case 13: restartPacketTimer(); break;
        case 14: resetTx(); break;
        case 15: showDebugWindow(); break;
        case 16: showAboutQMTSim(); break;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
