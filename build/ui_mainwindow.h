/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Aug 18 19:22:10 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
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
    QAction *actionView;
    QAction *actionResize_Table;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *view;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
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
    QSlider *opacitySlider;
    QLabel *label;
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
    MainWindow->resize(1019, 696);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    MainWindow->setMaximumSize(QSize(16777215, 16777215));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    MainWindow->setLocale(QLocale(QLocale::English, QLocale::India));
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
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/debug.png")), QIcon::Normal, QIcon::Off);
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
    icon5.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/exit.png")), QIcon::Normal, QIcon::Off);
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
    icon9.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/cursor.png")), QIcon::Normal, QIcon::Off);
    actionCursor->setIcon(icon9);
    actionView = new QAction(MainWindow);
    actionView->setObjectName(QString::fromUtf8("actionView"));
    QIcon icon10;
    icon10.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/view.png")), QIcon::Normal, QIcon::Off);
    actionView->setIcon(icon10);
    actionResize_Table = new QAction(MainWindow);
    actionResize_Table->setObjectName(QString::fromUtf8("actionResize_Table"));
    QIcon icon11;
    icon11.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/icons/resize.png")), QIcon::Normal, QIcon::Off);
    actionResize_Table->setIcon(icon11);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 33, 1019, 644));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    view = new QGraphicsView(centralwidget);
    view->setObjectName(QString::fromUtf8("view"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
    view->setSizePolicy(sizePolicy1);
    view->setMinimumSize(QSize(930, 500));
    view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

    verticalLayout_2->addWidget(view);

    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setMinimumSize(QSize(961, 118));
    layoutWidget = new QWidget(groupBox);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 10, 981, 91));
    verticalLayout = new QVBoxLayout(layoutWidget);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
    addItemButton = new QPushButton(layoutWidget);
    addItemButton->setObjectName(QString::fromUtf8("addItemButton"));

    horizontalLayout->addWidget(addItemButton);

    setPathButton = new QPushButton(layoutWidget);
    setPathButton->setObjectName(QString::fromUtf8("setPathButton"));

    horizontalLayout->addWidget(setPathButton);

    startAnimationButton = new QPushButton(layoutWidget);
    startAnimationButton->setObjectName(QString::fromUtf8("startAnimationButton"));

    horizontalLayout->addWidget(startAnimationButton);

    startAnimation_Radio = new QRadioButton(layoutWidget);
    startAnimation_Radio->setObjectName(QString::fromUtf8("startAnimation_Radio"));

    horizontalLayout->addWidget(startAnimation_Radio);

    animationProgressBar = new QProgressBar(layoutWidget);
    animationProgressBar->setObjectName(QString::fromUtf8("animationProgressBar"));
    animationProgressBar->setValue(24);

    horizontalLayout->addWidget(animationProgressBar);

    animationtime = new QSpinBox(layoutWidget);
    animationtime->setObjectName(QString::fromUtf8("animationtime"));

    horizontalLayout->addWidget(animationtime);

    setAnimationTimeButton = new QPushButton(layoutWidget);
    setAnimationTimeButton->setObjectName(QString::fromUtf8("setAnimationTimeButton"));

    horizontalLayout->addWidget(setAnimationTimeButton);

    animationSlider = new QSlider(layoutWidget);
    animationSlider->setObjectName(QString::fromUtf8("animationSlider"));
    animationSlider->setCursor(QCursor(Qt::PointingHandCursor));
    animationSlider->setOrientation(Qt::Horizontal);

    horizontalLayout->addWidget(animationSlider);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
    addEllipseButton = new QPushButton(layoutWidget);
    addEllipseButton->setObjectName(QString::fromUtf8("addEllipseButton"));

    horizontalLayout_2->addWidget(addEllipseButton);

    addCursorButton = new QPushButton(layoutWidget);
    addCursorButton->setObjectName(QString::fromUtf8("addCursorButton"));

    horizontalLayout_2->addWidget(addCursorButton);

    deleteItemButton = new QPushButton(layoutWidget);
    deleteItemButton->setObjectName(QString::fromUtf8("deleteItemButton"));

    horizontalLayout_2->addWidget(deleteItemButton);

    saveItemButton = new QPushButton(layoutWidget);
    saveItemButton->setObjectName(QString::fromUtf8("saveItemButton"));

    horizontalLayout_2->addWidget(saveItemButton);

    uploadItemButton = new QPushButton(layoutWidget);
    uploadItemButton->setObjectName(QString::fromUtf8("uploadItemButton"));

    horizontalLayout_2->addWidget(uploadItemButton);

    startTxButton = new QPushButton(layoutWidget);
    startTxButton->setObjectName(QString::fromUtf8("startTxButton"));

    horizontalLayout_2->addWidget(startTxButton);

    configureButton = new QPushButton(layoutWidget);
    configureButton->setObjectName(QString::fromUtf8("configureButton"));

    horizontalLayout_2->addWidget(configureButton);

    resetButton = new QPushButton(layoutWidget);
    resetButton->setObjectName(QString::fromUtf8("resetButton"));

    horizontalLayout_2->addWidget(resetButton);

    opacitySlider = new QSlider(layoutWidget);
    opacitySlider->setObjectName(QString::fromUtf8("opacitySlider"));
    opacitySlider->setOrientation(Qt::Horizontal);

    horizontalLayout_2->addWidget(opacitySlider);

    label = new QLabel(layoutWidget);
    label->setObjectName(QString::fromUtf8("label"));

    horizontalLayout_2->addWidget(label);


    verticalLayout->addLayout(horizontalLayout_2);


    verticalLayout_2->addWidget(groupBox);


    gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1019, 21));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    menuAdd = new QMenu(menubar);
    menuAdd->setObjectName(QString::fromUtf8("menuAdd"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 677, 1019, 19));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 21, 1019, 12));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuAdd->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionSave);
    menuFile->addAction(actionUpload);
    menuFile->addAction(actionDebug);
    menuFile->addAction(actionView);
    menuFile->addAction(actionResize_Table);
    menuFile->addAction(actionExit);
    menuHelp->addAction(actionReadme);
    menuHelp->addAction(actionAbout_QMTSim);
    menuHelp->addAction(actionAbout_Qt);
    menuAdd->addAction(actionPolygon);
    menuAdd->addAction(actionEllipse);
    menuAdd->addAction(actionCursor);

    retranslateUi(MainWindow);
    QObject::connect(startAnimationButton, SIGNAL(clicked()), startAnimation_Radio, SLOT(toggle()));

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
    actionView->setText(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
    actionResize_Table->setText(QApplication::translate("MainWindow", "Resize Table", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    view->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    groupBox->setTitle(QString());
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
    label->setText(QApplication::translate("MainWindow", "Opacity", 0, QApplication::UnicodeUTF8));
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
