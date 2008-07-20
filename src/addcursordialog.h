#ifndef __ADDCURSORDIALOG_H__
#define __ADDCURSORDIALOG_H__

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

class Ui_addCursorDialog
{
public:
    QPushButton *addCursorButton;
    QPushButton *cancelButton;
    QSpinBox *cursor_x;
    QSpinBox *cursor_y;
    QSpinBox *cursor_radius;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *fillColourComboBox;
    QLabel *label_4;

    void setupUi(QDialog *addCursorDialog)
    {
    if (addCursorDialog->objectName().isEmpty())
        addCursorDialog->setObjectName(QString::fromUtf8("addCursorDialog"));
    addCursorDialog->resize(400, 300);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    addCursorDialog->setWindowIcon(icon);
    addCursorButton = new QPushButton(addCursorDialog);
    addCursorButton->setObjectName(QString::fromUtf8("addCursorButton"));
    addCursorButton->setGeometry(QRect(100, 230, 75, 23));
    cancelButton = new QPushButton(addCursorDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(210, 230, 75, 23));
    cursor_x = new QSpinBox(addCursorDialog);
    cursor_x->setObjectName(QString::fromUtf8("cursor_x"));
    cursor_x->setGeometry(QRect(60, 70, 52, 22));
    cursor_y = new QSpinBox(addCursorDialog);
    cursor_y->setObjectName(QString::fromUtf8("cursor_y"));
    cursor_y->setGeometry(QRect(160, 70, 52, 22));
    cursor_radius = new QSpinBox(addCursorDialog);
    cursor_radius->setObjectName(QString::fromUtf8("cursor_radius"));
    cursor_radius->setGeometry(QRect(270, 70, 52, 22));
    label = new QLabel(addCursorDialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(80, 50, 16, 16));
    label_2 = new QLabel(addCursorDialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(170, 50, 16, 16));
    label_3 = new QLabel(addCursorDialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(270, 50, 46, 14));
    fillColourComboBox = new QComboBox(addCursorDialog);
    fillColourComboBox->setObjectName(QString::fromUtf8("fillColourComboBox"));
    fillColourComboBox->setGeometry(QRect(130, 140, 131, 22));
    label_4 = new QLabel(addCursorDialog);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(170, 120, 71, 20));
    QWidget::setTabOrder(cursor_x, cursor_y);
    QWidget::setTabOrder(cursor_y, cursor_radius);
    QWidget::setTabOrder(cursor_radius, addCursorButton);
    QWidget::setTabOrder(addCursorButton, cancelButton);

    retranslateUi(addCursorDialog);
    QObject::connect(cancelButton, SIGNAL(clicked()), addCursorDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(addCursorDialog);
    } // setupUi

    void retranslateUi(QDialog *addCursorDialog)
    {
    addCursorDialog->setWindowTitle(QApplication::translate("addCursorDialog", "Add New Cursor", 0, QApplication::UnicodeUTF8));
    addCursorButton->setText(QApplication::translate("addCursorDialog", "Add Cursor", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("addCursorDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("addCursorDialog", "X", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("addCursorDialog", "Y", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("addCursorDialog", "Radius", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("addCursorDialog", "Set Colour", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(addCursorDialog);
    } // retranslateUi

};


namespace Ui4 {
    class addCursorDialog: public Ui_addCursorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __ADDCURSORDIALOG_H__
