/****************************************************************************
** Meta object code from reading C++ file 'mainwindowimpl.h'
**
** Created: Fri Aug 1 00:56:23 2008
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
      20,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      30,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   15,   15,   15, 0x08,
      59,   15,   15,   15, 0x08,
      72,   15,   15,   15, 0x08,
      85,   15,   15,   15, 0x08,
      96,   15,   15,   15, 0x08,
     112,   15,   15,   15, 0x08,
     129,   15,   15,   15, 0x08,
     148,   15,   15,   15, 0x08,
     168,   15,   15,   15, 0x08,
     190,   15,   15,   15, 0x08,
     215,  213,   15,   15, 0x08,
     240,  213,   15,   15, 0x08,
     263,   15,   15,   15, 0x08,
     285,   15,   15,   15, 0x08,
     295,   15,   15,   15, 0x08,
     316,   15,   15,   15, 0x08,
     326,   15,   15,   15, 0x08,
     344,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowImpl[] = {
    "MainWindowImpl\0\0frameSignal()\0"
    "resetTxSignal()\0showDialog()\0deleteItem()\0"
    "uploadItem()\0saveItem()\0setPathDialog()\0"
    "startAnimation()\0setanimationtime()\0"
    "animationFinished()\0showAddCursorDialog()\0"
    "showAddEllipseDialog()\0n\0"
    "animationslidertime(int)\0"
    "opacitySliderImpl(int)\0showConfigureDialog()\0"
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
        case 0: frameSignal(); break;
        case 1: resetTxSignal(); break;
        case 2: showDialog(); break;
        case 3: deleteItem(); break;
        case 4: uploadItem(); break;
        case 5: saveItem(); break;
        case 6: setPathDialog(); break;
        case 7: startAnimation(); break;
        case 8: setanimationtime(); break;
        case 9: animationFinished(); break;
        case 10: showAddCursorDialog(); break;
        case 11: showAddEllipseDialog(); break;
        case 12: animationslidertime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: opacitySliderImpl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: showConfigureDialog(); break;
        case 15: startTx(); break;
        case 16: restartPacketTimer(); break;
        case 17: resetTx(); break;
        case 18: showDebugWindow(); break;
        case 19: showAboutQMTSim(); break;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWindowImpl::frameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainWindowImpl::resetTxSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
