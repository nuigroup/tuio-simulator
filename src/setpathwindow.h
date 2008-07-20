#ifndef __SETPATHWINDOW_H__
#define __SETPATHWINDOW_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetPathWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *view;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QSpinBox *index;
    QDoubleSpinBox *pointx;
    QDoubleSpinBox *pointy;
    QPushButton *addPointButton;
    QDoubleSpinBox *smoothness;
    QPushButton *previewPathButton;
    QPushButton *setPathButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CancelButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SetPathWindow)
    {
    if (SetPathWindow->objectName().isEmpty())
        SetPathWindow->setObjectName(QString::fromUtf8("SetPathWindow"));
    SetPathWindow->setWindowModality(Qt::ApplicationModal);
    SetPathWindow->resize(900, 607);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    SetPathWindow->setWindowIcon(icon);
    centralwidget = new QWidget(SetPathWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 21, 900, 567));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    view = new QGraphicsView(centralwidget);
    view->setObjectName(QString::fromUtf8("view"));
    view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));

    gridLayout->addWidget(view, 0, 0, 1, 11);

    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 1, 1, 1);

    label_3 = new QLabel(centralwidget);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 1, 2, 1, 2);

    label_4 = new QLabel(centralwidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 1, 4, 1, 2);

    label_5 = new QLabel(centralwidget);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 1, 6, 1, 1);

    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 2, 0, 1, 1);

    index = new QSpinBox(centralwidget);
    index->setObjectName(QString::fromUtf8("index"));

    gridLayout->addWidget(index, 2, 1, 1, 1);

    pointx = new QDoubleSpinBox(centralwidget);
    pointx->setObjectName(QString::fromUtf8("pointx"));

    gridLayout->addWidget(pointx, 2, 2, 1, 1);

    pointy = new QDoubleSpinBox(centralwidget);
    pointy->setObjectName(QString::fromUtf8("pointy"));

    gridLayout->addWidget(pointy, 2, 3, 1, 2);

    addPointButton = new QPushButton(centralwidget);
    addPointButton->setObjectName(QString::fromUtf8("addPointButton"));

    gridLayout->addWidget(addPointButton, 2, 5, 1, 1);

    smoothness = new QDoubleSpinBox(centralwidget);
    smoothness->setObjectName(QString::fromUtf8("smoothness"));

    gridLayout->addWidget(smoothness, 2, 6, 1, 1);

    previewPathButton = new QPushButton(centralwidget);
    previewPathButton->setObjectName(QString::fromUtf8("previewPathButton"));

    gridLayout->addWidget(previewPathButton, 2, 7, 1, 1);

    setPathButton = new QPushButton(centralwidget);
    setPathButton->setObjectName(QString::fromUtf8("setPathButton"));

    gridLayout->addWidget(setPathButton, 2, 8, 1, 1);

    horizontalSpacer = new QSpacerItem(403, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 9, 1, 1);

    CancelButton = new QPushButton(centralwidget);
    CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

    gridLayout->addWidget(CancelButton, 2, 10, 1, 1);

    SetPathWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(SetPathWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 900, 21));
    SetPathWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(SetPathWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 588, 900, 19));
    SetPathWindow->setStatusBar(statusbar);

    retranslateUi(SetPathWindow);
    QObject::connect(CancelButton, SIGNAL(clicked()), SetPathWindow, SLOT(close()));

    QMetaObject::connectSlotsByName(SetPathWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SetPathWindow)
    {
    SetPathWindow->setWindowTitle(QApplication::translate("SetPathWindow", "Set Animation Path", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    view->setStatusTip(QApplication::translate("SetPathWindow", "Click To Add Point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    label_2->setText(QApplication::translate("SetPathWindow", "Index No.", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("SetPathWindow", "X", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("SetPathWindow", "Y", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("SetPathWindow", "Smoothness", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("SetPathWindow", "Points Added", 0, QApplication::UnicodeUTF8));
    addPointButton->setText(QApplication::translate("SetPathWindow", "Add Point", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    previewPathButton->setStatusTip(QApplication::translate("SetPathWindow", "Add at least three points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    previewPathButton->setText(QApplication::translate("SetPathWindow", "Preview Path", 0, QApplication::UnicodeUTF8));
    setPathButton->setText(QApplication::translate("SetPathWindow", "Set Path", 0, QApplication::UnicodeUTF8));
    CancelButton->setText(QApplication::translate("SetPathWindow", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(SetPathWindow);
    } // retranslateUi

};

namespace Ui2 {
    class SetPathWindow: public Ui_SetPathWindow {};
} // namespace Ui

QT_END_NAMESPACE


#endif // __SETPATHWINDOW_H__
