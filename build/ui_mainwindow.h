/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Jul 20 08:32:41 2008
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionUpload;
    QAction *actionDebug;
    QAction *actionReadme;
    QAction *actionAbout_QMTSim;
    QAction *actionExit;
    QAction *actionAbout_Qt;
    QAction *actionPolygon;
    QAction *actionEllipse;
    QAction *actionCursor;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGraphicsView *view;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *fseqLabel;
    QLabel *label;
    QListWidget *aliveCursorList;
    QLabel *label_2;
    QListWidget *setCursorList;
    QLabel *label_3;
    QListWidget *aliveObjectList;
    QLabel *label_4;
    QListWidget *setObjectList;
    QHBoxLayout *horizontalLayout;
    QPushButton *addItemButton;
    QPushButton *setPathButton;
    QPushButton *startAnimationButton;
    QRadioButton *startAnimation_Radio;
    QProgressBar *animationProgressBar;
    QSpinBox *animationtime;
    QPushButton *setAnimationTimeButton;
    QSlider *animationSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addEllipseButton;
    QPushButton *addCursorButton;
    QPushButton *deleteItemButton;
    QPushButton *saveItemButton;
    QPushButton *uploadItemButton;
    QPushButton *startTxButton;
    QPushButton *configureButton;
    QPushButton *resetButton;
    QPushButton *debugButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuAdd;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1200, 636);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    MainWindow->setMinimumSize(QSize(1200, 636));
    MainWindow->setMaximumSize(QSize(1200, 636));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    actionSave = new QAction(MainWindow);
    actionSave->setObjectName(QString::fromUtf8("actionSave"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/save.png")), QIcon::Normal, QIcon::Off);
    actionSave->setIcon(icon1);
    actionUpload = new QAction(MainWindow);
    actionUpload->setObjectName(QString::fromUtf8("actionUpload"));
    QIcon icon2;
    icon2.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/upload.png")), QIcon::Normal, QIcon::Off);
    actionUpload->setIcon(icon2);
    actionDebug = new QAction(MainWindow);
    actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
    QIcon icon3;
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/debug_icon.png")), QIcon::Normal, QIcon::Off);
    actionDebug->setIcon(icon3);
    actionReadme = new QAction(MainWindow);
    actionReadme->setObjectName(QString::fromUtf8("actionReadme"));
    QIcon icon4;
    icon4.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/readme.png")), QIcon::Normal, QIcon::Off);
    actionReadme->setIcon(icon4);
    actionAbout_QMTSim = new QAction(MainWindow);
    actionAbout_QMTSim->setObjectName(QString::fromUtf8("actionAbout_QMTSim"));
    actionAbout_QMTSim->setIcon(icon);
    actionExit = new QAction(MainWindow);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    QIcon icon5;
    icon5.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/System - Shutdown.png")), QIcon::Normal, QIcon::Off);
    actionExit->setIcon(icon5);
    actionAbout_Qt = new QAction(MainWindow);
    actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
    QIcon icon6;
    icon6.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/qt4.png")), QIcon::Normal, QIcon::Off);
    actionAbout_Qt->setIcon(icon6);
    actionPolygon = new QAction(MainWindow);
    actionPolygon->setObjectName(QString::fromUtf8("actionPolygon"));
    QIcon icon7;
    icon7.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/polygon.png")), QIcon::Normal, QIcon::Off);
    actionPolygon->setIcon(icon7);
    actionEllipse = new QAction(MainWindow);
    actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
    QIcon icon8;
    icon8.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/ellipse.png")), QIcon::Normal, QIcon::Off);
    actionEllipse->setIcon(icon8);
    actionCursor = new QAction(MainWindow);
    actionCursor->setObjectName(QString::fromUtf8("actionCursor"));
    QIcon icon9;
    icon9.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/pointing-finger.png")), QIcon::Normal, QIcon::Off);
    actionCursor->setIcon(icon9);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 33, 1200, 584));
    gridLayout_2 = new QGridLayout(centralwidget);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    view = new QGraphicsView(centralwidget);
    view->setObjectName(QString::fromUtf8("view"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
    view->setSizePolicy(sizePolicy1);
    view->setMinimumSize(QSize(930, 500));
    view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

    gridLayout_2->addWidget(view, 0, 0, 1, 1);

    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy1);
    groupBox->setMinimumSize(QSize(221, 491));
    groupBox->setMaximumSize(QSize(221, 491));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    fseqLabel = new QLabel(groupBox);
    fseqLabel->setObjectName(QString::fromUtf8("fseqLabel"));

    gridLayout->addWidget(fseqLabel, 0, 0, 1, 1);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 1, 0, 1, 1);

    aliveCursorList = new QListWidget(groupBox);
    aliveCursorList->setObjectName(QString::fromUtf8("aliveCursorList"));
    aliveCursorList->setMaximumSize(QSize(200, 95));

    gridLayout->addWidget(aliveCursorList, 2, 0, 1, 1);

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 3, 0, 1, 1);

    setCursorList = new QListWidget(groupBox);
    setCursorList->setObjectName(QString::fromUtf8("setCursorList"));
    setCursorList->setMaximumSize(QSize(200, 95));

    gridLayout->addWidget(setCursorList, 4, 0, 1, 1);

    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 5, 0, 1, 1);

    aliveObjectList = new QListWidget(groupBox);
    aliveObjectList->setObjectName(QString::fromUtf8("aliveObjectList"));
    aliveObjectList->setMaximumSize(QSize(200, 95));

    gridLayout->addWidget(aliveObjectList, 6, 0, 1, 1);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 7, 0, 1, 1);

    setObjectList = new QListWidget(groupBox);
    setObjectList->setObjectName(QString::fromUtf8("setObjectList"));
    setObjectList->setMaximumSize(QSize(200, 95));

    gridLayout->addWidget(setObjectList, 8, 0, 1, 1);


    gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
    addItemButton = new QPushButton(centralwidget);
    addItemButton->setObjectName(QString::fromUtf8("addItemButton"));

    horizontalLayout->addWidget(addItemButton);

    setPathButton = new QPushButton(centralwidget);
    setPathButton->setObjectName(QString::fromUtf8("setPathButton"));

    horizontalLayout->addWidget(setPathButton);

    startAnimationButton = new QPushButton(centralwidget);
    startAnimationButton->setObjectName(QString::fromUtf8("startAnimationButton"));

    horizontalLayout->addWidget(startAnimationButton);

    startAnimation_Radio = new QRadioButton(centralwidget);
    startAnimation_Radio->setObjectName(QString::fromUtf8("startAnimation_Radio"));

    horizontalLayout->addWidget(startAnimation_Radio);

    animationProgressBar = new QProgressBar(centralwidget);
    animationProgressBar->setObjectName(QString::fromUtf8("animationProgressBar"));
    animationProgressBar->setValue(24);

    horizontalLayout->addWidget(animationProgressBar);

    animationtime = new QSpinBox(centralwidget);
    animationtime->setObjectName(QString::fromUtf8("animationtime"));

    horizontalLayout->addWidget(animationtime);

    setAnimationTimeButton = new QPushButton(centralwidget);
    setAnimationTimeButton->setObjectName(QString::fromUtf8("setAnimationTimeButton"));

    horizontalLayout->addWidget(setAnimationTimeButton);

    animationSlider = new QSlider(centralwidget);
    animationSlider->setObjectName(QString::fromUtf8("animationSlider"));
    animationSlider->setCursor(QCursor(Qt::PointingHandCursor));
    animationSlider->setOrientation(Qt::Horizontal);

    horizontalLayout->addWidget(animationSlider);


    gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
    addEllipseButton = new QPushButton(centralwidget);
    addEllipseButton->setObjectName(QString::fromUtf8("addEllipseButton"));

    horizontalLayout_2->addWidget(addEllipseButton);

    addCursorButton = new QPushButton(centralwidget);
    addCursorButton->setObjectName(QString::fromUtf8("addCursorButton"));

    horizontalLayout_2->addWidget(addCursorButton);

    deleteItemButton = new QPushButton(centralwidget);
    deleteItemButton->setObjectName(QString::fromUtf8("deleteItemButton"));

    horizontalLayout_2->addWidget(deleteItemButton);

    saveItemButton = new QPushButton(centralwidget);
    saveItemButton->setObjectName(QString::fromUtf8("saveItemButton"));

    horizontalLayout_2->addWidget(saveItemButton);

    uploadItemButton = new QPushButton(centralwidget);
    uploadItemButton->setObjectName(QString::fromUtf8("uploadItemButton"));

    horizontalLayout_2->addWidget(uploadItemButton);

    startTxButton = new QPushButton(centralwidget);
    startTxButton->setObjectName(QString::fromUtf8("startTxButton"));

    horizontalLayout_2->addWidget(startTxButton);

    configureButton = new QPushButton(centralwidget);
    configureButton->setObjectName(QString::fromUtf8("configureButton"));

    horizontalLayout_2->addWidget(configureButton);

    resetButton = new QPushButton(centralwidget);
    resetButton->setObjectName(QString::fromUtf8("resetButton"));

    horizontalLayout_2->addWidget(resetButton);

    debugButton = new QPushButton(centralwidget);
    debugButton->setObjectName(QString::fromUtf8("debugButton"));
    debugButton->setCheckable(true);

    horizontalLayout_2->addWidget(debugButton);

    horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_2->addItem(horizontalSpacer);


    gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1200, 21));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    menuAdd = new QMenu(menubar);
    menuAdd->setObjectName(QString::fromUtf8("menuAdd"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 617, 1200, 19));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 21, 1200, 12));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuAdd->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionSave);
    menuFile->addAction(actionUpload);
    menuFile->addAction(actionDebug);
    menuFile->addAction(actionExit);
    menuHelp->addAction(actionReadme);
    menuHelp->addAction(actionAbout_QMTSim);
    menuHelp->addAction(actionAbout_Qt);
    menuAdd->addAction(actionPolygon);
    menuAdd->addAction(actionEllipse);
    menuAdd->addAction(actionCursor);

    retranslateUi(MainWindow);
    QObject::connect(startAnimationButton, SIGNAL(clicked()), startAnimation_Radio, SLOT(toggle()));
    QObject::connect(debugButton, SIGNAL(toggled(bool)), groupBox, SLOT(setVisible(bool)));

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QMTSim", 0, QApplication::UnicodeUTF8));
    actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
    actionUpload->setText(QApplication::translate("MainWindow", "Upload", 0, QApplication::UnicodeUTF8));
    actionDebug->setText(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
    actionReadme->setText(QApplication::translate("MainWindow", "Readme", 0, QApplication::UnicodeUTF8));
    actionAbout_QMTSim->setText(QApplication::translate("MainWindow", "About QMTSim", 0, QApplication::UnicodeUTF8));
    actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
    actionPolygon->setText(QApplication::translate("MainWindow", "Polygon", 0, QApplication::UnicodeUTF8));
    actionEllipse->setText(QApplication::translate("MainWindow", "Ellipse", 0, QApplication::UnicodeUTF8));
    actionCursor->setText(QApplication::translate("MainWindow", "Cursor", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    view->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    groupBox->setTitle(QApplication::translate("MainWindow", "Debug Window", 0, QApplication::UnicodeUTF8));
    fseqLabel->setText(QApplication::translate("MainWindow", "Fseq  : ", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindow", "Alive Cursors", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MainWindow", "Cursor Set", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("MainWindow", "Alive Object", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("MainWindow", "Object Set", 0, QApplication::UnicodeUTF8));
    addItemButton->setText(QApplication::translate("MainWindow", "Add Polygon", 0, QApplication::UnicodeUTF8));
    setPathButton->setText(QApplication::translate("MainWindow", "Set Path", 0, QApplication::UnicodeUTF8));
    startAnimationButton->setText(QApplication::translate("MainWindow", "Start Animation", 0, QApplication::UnicodeUTF8));
    startAnimation_Radio->setText(QString());

#ifndef QT_NO_STATUSTIP
    animationtime->setStatusTip(QApplication::translate("MainWindow", "Time in milliseconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    setAnimationTimeButton->setText(QApplication::translate("MainWindow", "Set Animation Time", 0, QApplication::UnicodeUTF8));
    addEllipseButton->setText(QApplication::translate("MainWindow", "Add Ellipse", 0, QApplication::UnicodeUTF8));
    addCursorButton->setText(QApplication::translate("MainWindow", "Add Cursor", 0, QApplication::UnicodeUTF8));
    deleteItemButton->setText(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
    saveItemButton->setText(QApplication::translate("MainWindow", "Save Item", 0, QApplication::UnicodeUTF8));
    uploadItemButton->setText(QApplication::translate("MainWindow", "Upload Item", 0, QApplication::UnicodeUTF8));
    startTxButton->setText(QApplication::translate("MainWindow", "Start Transmission", 0, QApplication::UnicodeUTF8));
    configureButton->setText(QApplication::translate("MainWindow", "Configure Transmission", 0, QApplication::UnicodeUTF8));
    resetButton->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
    debugButton->setText(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    menuAdd->setTitle(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
