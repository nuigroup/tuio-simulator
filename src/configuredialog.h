#ifndef __CONFIGUREDIALOG_H__
#define __CONFIGUREDIALOG_H__


#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_configureDialog
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_5;
    QPushButton *pushButton;
    QPushButton *cancelButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox_6;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;

    void setupUi(QDialog *configureDialog)
    {
    if (configureDialog->objectName().isEmpty())
        configureDialog->setObjectName(QString::fromUtf8("configureDialog"));
    configureDialog->setWindowModality(Qt::WindowModal);
    configureDialog->resize(400, 300);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    configureDialog->setWindowIcon(icon);
    label = new QLabel(configureDialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(90, 100, 61, 16));
    spinBox = new QSpinBox(configureDialog);
    spinBox->setObjectName(QString::fromUtf8("spinBox"));
    spinBox->setGeometry(QRect(20, 130, 42, 22));
    spinBox_2 = new QSpinBox(configureDialog);
    spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
    spinBox_2->setGeometry(QRect(70, 130, 42, 22));
    spinBox_3 = new QSpinBox(configureDialog);
    spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
    spinBox_3->setGeometry(QRect(120, 130, 42, 22));
    spinBox_4 = new QSpinBox(configureDialog);
    spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
    spinBox_4->setGeometry(QRect(170, 130, 42, 22));
    label_2 = new QLabel(configureDialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(230, 130, 16, 31));
    label_3 = new QLabel(configureDialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(270, 100, 71, 16));
    spinBox_5 = new QSpinBox(configureDialog);
    spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
    spinBox_5->setGeometry(QRect(270, 130, 81, 22));
    pushButton = new QPushButton(configureDialog);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(90, 240, 75, 23));
    cancelButton = new QPushButton(configureDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(180, 240, 75, 23));
    pushButton_2 = new QPushButton(configureDialog);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(20, 50, 111, 23));
    spinBox_6 = new QSpinBox(configureDialog);
    spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
    spinBox_6->setGeometry(QRect(150, 50, 42, 22));
    label_4 = new QLabel(configureDialog);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(150, 30, 46, 14));
    pushButton_3 = new QPushButton(configureDialog);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(270, 50, 75, 23));
    radioButton = new QRadioButton(configureDialog);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(160, 190, 84, 18));
    radioButton_2 = new QRadioButton(configureDialog);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(280, 190, 84, 18));
    label_5 = new QLabel(configureDialog);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(30, 190, 111, 20));
    QWidget::setTabOrder(spinBox, spinBox_2);
    QWidget::setTabOrder(spinBox_2, spinBox_3);
    QWidget::setTabOrder(spinBox_3, spinBox_4);
    QWidget::setTabOrder(spinBox_4, spinBox_5);
    QWidget::setTabOrder(spinBox_5, radioButton);
    QWidget::setTabOrder(radioButton, radioButton_2);
    QWidget::setTabOrder(radioButton_2, pushButton_2);
    QWidget::setTabOrder(pushButton_2, spinBox_6);
    QWidget::setTabOrder(spinBox_6, pushButton_3);
    QWidget::setTabOrder(pushButton_3, pushButton);
    QWidget::setTabOrder(pushButton, cancelButton);

    retranslateUi(configureDialog);
    QObject::connect(cancelButton, SIGNAL(clicked()), configureDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(configureDialog);
    } // setupUi

    void retranslateUi(QDialog *configureDialog)
    {
    configureDialog->setWindowTitle(QApplication::translate("configureDialog", "Configure Transmission", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("configureDialog", "IP Address", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("configureDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("configureDialog", "Port Number", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("configureDialog", "Apply", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("configureDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("configureDialog", "Add New Reciever", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("configureDialog", "Index", 0, QApplication::UnicodeUTF8));
    pushButton_3->setText(QApplication::translate("configureDialog", "SET", 0, QApplication::UnicodeUTF8));
    radioButton->setText(QApplication::translate("configureDialog", "UDP", 0, QApplication::UnicodeUTF8));
    radioButton_2->setText(QApplication::translate("configureDialog", "TCP", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("configureDialog", "Type of Transmission", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(configureDialog);
    } // retranslateUi

};


namespace Ui5 {
    class configureDialog: public Ui_configureDialog {};
} // namespace Ui

QT_END_NAMESPACE



#endif 
