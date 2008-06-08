#ifndef __ADDELLIPSEDIALOG_H__
#define __ADDELLIPSEDIALOG_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addEllipseDialog
{
public:
    QSpinBox *Ellipse_x;
    QSpinBox *Ellipse_y;
    QSpinBox *Ellipse_width;
    QSpinBox *Ellipse_height;
    QPushButton *addEllipseButton;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *fillColourComboBox;
    QLabel *label_5;

    void setupUi(QDialog *addEllipseDialog)
    {
    if (addEllipseDialog->objectName().isEmpty())
        addEllipseDialog->setObjectName(QString::fromUtf8("addEllipseDialog"));
    addEllipseDialog->resize(400, 300);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    addEllipseDialog->setWindowIcon(icon);
    Ellipse_x = new QSpinBox(addEllipseDialog);
    Ellipse_x->setObjectName(QString::fromUtf8("Ellipse_x"));
    Ellipse_x->setGeometry(QRect(50, 70, 52, 22));
    Ellipse_y = new QSpinBox(addEllipseDialog);
    Ellipse_y->setObjectName(QString::fromUtf8("Ellipse_y"));
    Ellipse_y->setGeometry(QRect(140, 70, 52, 22));
    Ellipse_width = new QSpinBox(addEllipseDialog);
    Ellipse_width->setObjectName(QString::fromUtf8("Ellipse_width"));
    Ellipse_width->setGeometry(QRect(220, 70, 52, 22));
    Ellipse_height = new QSpinBox(addEllipseDialog);
    Ellipse_height->setObjectName(QString::fromUtf8("Ellipse_height"));
    Ellipse_height->setGeometry(QRect(310, 70, 52, 22));
    addEllipseButton = new QPushButton(addEllipseDialog);
    addEllipseButton->setObjectName(QString::fromUtf8("addEllipseButton"));
    addEllipseButton->setGeometry(QRect(120, 230, 75, 23));
    cancelButton = new QPushButton(addEllipseDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(210, 230, 75, 23));
    label = new QLabel(addEllipseDialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(57, 47, 16, 16));
    label_2 = new QLabel(addEllipseDialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(147, 47, 46, 14));
    label_3 = new QLabel(addEllipseDialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(220, 47, 46, 14));
    label_4 = new QLabel(addEllipseDialog);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(300, 47, 46, 14));
    fillColourComboBox = new QComboBox(addEllipseDialog);
    fillColourComboBox->setObjectName(QString::fromUtf8("fillColourComboBox"));
    fillColourComboBox->setGeometry(QRect(140, 140, 131, 22));
    label_5 = new QLabel(addEllipseDialog);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(170, 110, 61, 16));

    retranslateUi(addEllipseDialog);
    QObject::connect(cancelButton, SIGNAL(clicked()), addEllipseDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(addEllipseDialog);
    } // setupUi

    void retranslateUi(QDialog *addEllipseDialog)
    {
    addEllipseDialog->setWindowTitle(QApplication::translate("addEllipseDialog", "Add Ellipse", 0, QApplication::UnicodeUTF8));
    addEllipseButton->setText(QApplication::translate("addEllipseDialog", "Add Ellipse", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("addEllipseDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("addEllipseDialog", "X", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("addEllipseDialog", "Y", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("addEllipseDialog", "Width", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("addEllipseDialog", "Height", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("addEllipseDialog", "Set Colour", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(addEllipseDialog);
    } // retranslateUi

};


namespace Ui3 {
    class addEllipseDialog: public Ui_addEllipseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __ADDELLIPSEDIALOG_H__
