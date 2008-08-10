#ifndef __RESIZETABLEDIALOG_H__
#define __RESIZETABLEDIALOG_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_resizeTableDialog
{
public:
    QSlider *widthSlider;
    QSlider *heightSlider;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *resizeTableDialog)
    {
    if (resizeTableDialog->objectName().isEmpty())
        resizeTableDialog->setObjectName(QString::fromUtf8("resizeTableDialog"));
    resizeTableDialog->resize(400, 111);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    resizeTableDialog->setWindowIcon(icon);
    widthSlider = new QSlider(resizeTableDialog);
    widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
    widthSlider->setGeometry(QRect(90, 70, 271, 21));
    widthSlider->setOrientation(Qt::Horizontal);
    heightSlider = new QSlider(resizeTableDialog);
    heightSlider->setObjectName(QString::fromUtf8("heightSlider"));
    heightSlider->setGeometry(QRect(90, 30, 271, 21));
    heightSlider->setOrientation(Qt::Horizontal);
    label_2 = new QLabel(resizeTableDialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 30, 46, 14));
    label_3 = new QLabel(resizeTableDialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(20, 70, 46, 14));

    retranslateUi(resizeTableDialog);

    QMetaObject::connectSlotsByName(resizeTableDialog);
    } // setupUi

    void retranslateUi(QDialog *resizeTableDialog)
    {
    resizeTableDialog->setWindowTitle(QApplication::translate("resizeTableDialog", "Resize Table", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("resizeTableDialog", "Height", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("resizeTableDialog", "Width", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(resizeTableDialog);
    } // retranslateUi

};

namespace Ui8 {
    class resizeTableDialog: public Ui_resizeTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __RESIZETABLEDIALOG_H__
