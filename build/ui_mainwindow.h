/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Fri May 30 07:04:59 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *view;
    QPushButton *addItemButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(900, 607);
    MainWindow->setMinimumSize(QSize(100, 100));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 33, 900, 555));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    view = new QGraphicsView(centralwidget);
    view->setObjectName(QString::fromUtf8("view"));
    view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

    gridLayout->addWidget(view, 0, 0, 1, 2);

    addItemButton = new QPushButton(centralwidget);
    addItemButton->setObjectName(QString::fromUtf8("addItemButton"));

    gridLayout->addWidget(addItemButton, 1, 0, 1, 1);

    horizontalSpacer = new QSpacerItem(717, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 900, 21));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 588, 900, 19));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 21, 900, 12));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QMTSim", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    MainWindow->setStatusTip(QApplication::translate("MainWindow", " In order to move the object, drag it with the left mouse button pressed. In order to rotate the object, select it and then use Key-R to rotate clockwise and press Key-L to rotate counter-clockwise", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP


#ifndef QT_NO_WHATSTHIS
    MainWindow->setWhatsThis(QApplication::translate("MainWindow", "For QMTSim 1.0 , when the simulator is run for the first time, the scene contains only one object.\n"
"Extra customized objects can be put using the dialog.\n"
"\n"
"In order to move the object, drag it with the left mouse button pressed.\n"
"In order to rotate the object, select it and then use Key-R to rotate clockwise and press Key-L to rotate counter-clockwise.\n"
"Item can be translated and rotated at the same time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS


#ifndef QT_NO_TOOLTIP
    view->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    addItemButton->setText(QApplication::translate("MainWindow", "Add New Item", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
