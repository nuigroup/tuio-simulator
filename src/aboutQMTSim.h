#ifndef __ABOUTQMTSIM_H__
#define __ABOUTQMTSIM_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutQMTSim
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *aboutQMTSim)
    {
    if (aboutQMTSim->objectName().isEmpty())
        aboutQMTSim->setObjectName(QString::fromUtf8("aboutQMTSim"));
    aboutQMTSim->resize(459, 324);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    aboutQMTSim->setWindowIcon(icon);
    label = new QLabel(aboutQMTSim);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(50, 30, 371, 211));
    pushButton = new QPushButton(aboutQMTSim);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(200, 270, 75, 23));

    retranslateUi(aboutQMTSim);
    QObject::connect(pushButton, SIGNAL(clicked()), aboutQMTSim, SLOT(close()));

    QMetaObject::connectSlotsByName(aboutQMTSim);
    } // setupUi

    void retranslateUi(QDialog *aboutQMTSim)
    {
    aboutQMTSim->setWindowTitle(QApplication::translate("aboutQMTSim", "About QMTSim", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("aboutQMTSim", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:14pt;\">This is Multi-Touch Table Simulator 1.0</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\">Author : Ashish kumar Rai</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\">mr.ashish.rai@gmail.com</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top"
        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><img src=\":/newPrefix/logo.jpg\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("aboutQMTSim", "OK", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(aboutQMTSim);
    } // retranslateUi

};


namespace Ui6 {
    class aboutQMTSim: public Ui_aboutQMTSim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __ABOUTQMTSIM_H__
