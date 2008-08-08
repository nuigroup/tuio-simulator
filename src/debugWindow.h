#ifndef __DEBUGWINDOW_H__
#define __DEBUGWINDOW_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_debugWindow
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *fseqLabel;
    QLabel *label;
    QListWidget *aliveCursorList;
    QLabel *label_2;
    QListWidget *setCursorList;
    QLabel *label_3;
    QListWidget *aliveObjectList;
    QLabel *label_4;
    QListWidget *setObjectList;

    void setupUi(QDialog *debugWindow)
    {
    if (debugWindow->objectName().isEmpty())
        debugWindow->setObjectName(QString::fromUtf8("debugWindow"));
    debugWindow->resize(321, 524);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    debugWindow->setWindowIcon(icon);
    groupBox = new QGroupBox(debugWindow);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 10, 278, 494));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy);
    groupBox->setMinimumSize(QSize(221, 491));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    fseqLabel = new QLabel(groupBox);
    fseqLabel->setObjectName(QString::fromUtf8("fseqLabel"));

    verticalLayout->addWidget(fseqLabel);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    verticalLayout->addWidget(label);

    aliveCursorList = new QListWidget(groupBox);
    aliveCursorList->setObjectName(QString::fromUtf8("aliveCursorList"));
    aliveCursorList->setMaximumSize(QSize(500, 85));

    verticalLayout->addWidget(aliveCursorList);

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    verticalLayout->addWidget(label_2);

    setCursorList = new QListWidget(groupBox);
    setCursorList->setObjectName(QString::fromUtf8("setCursorList"));
    setCursorList->setMaximumSize(QSize(500, 85));

    verticalLayout->addWidget(setCursorList);

    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    verticalLayout->addWidget(label_3);

    aliveObjectList = new QListWidget(groupBox);
    aliveObjectList->setObjectName(QString::fromUtf8("aliveObjectList"));
    aliveObjectList->setMaximumSize(QSize(500, 85));

    verticalLayout->addWidget(aliveObjectList);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    verticalLayout->addWidget(label_4);

    setObjectList = new QListWidget(groupBox);
    setObjectList->setObjectName(QString::fromUtf8("setObjectList"));
    setObjectList->setMaximumSize(QSize(500, 85));

    verticalLayout->addWidget(setObjectList);


    gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


    retranslateUi(debugWindow);

    QMetaObject::connectSlotsByName(debugWindow);
    } // setupUi

    void retranslateUi(QDialog *debugWindow)
    {
    debugWindow->setWindowTitle(QApplication::translate("debugWindow", "Debug", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("debugWindow", "Debug Window", 0, QApplication::UnicodeUTF8));
    fseqLabel->setText(QApplication::translate("debugWindow", "Fseq  : ", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("debugWindow", "Alive Cursors", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("debugWindow", "Cursor Set", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("debugWindow", "Alive Object", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("debugWindow", "Object Set", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(debugWindow);
    } // retranslateUi

};

namespace Ui6 {
    class debugWindow: public Ui_debugWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __DEBUGWINDOW_H__
