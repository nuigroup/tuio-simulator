/********************************************************************************
** Form generated from reading ui file 'additem.ui'
**
** Created: Sat Jul 19 23:22:26 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

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

class Ui_Dialog
{
public:
    QLabel *label;
    QSpinBox *X_Vertex;
    QSpinBox *Y_Vertex;
    QPushButton *AddVertex;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *AddItem;
    QSpinBox *VertexNumber;
    QPushButton *cancelButton;
    QComboBox *fillColourComboBox;
    QLabel *label_6;
    QSpinBox *fiducialBox;
    QPushButton *addFiducialButton;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(400, 294);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
    Dialog->setSizePolicy(sizePolicy);
    Dialog->setFocusPolicy(Qt::ClickFocus);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    Dialog->setWindowIcon(icon);
    Dialog->setSizeGripEnabled(true);
    Dialog->setModal(true);
    label = new QLabel(Dialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(9, 9, 382, 41));
    X_Vertex = new QSpinBox(Dialog);
    X_Vertex->setObjectName(QString::fromUtf8("X_Vertex"));
    X_Vertex->setGeometry(QRect(134, 58, 77, 20));
    Y_Vertex = new QSpinBox(Dialog);
    Y_Vertex->setObjectName(QString::fromUtf8("Y_Vertex"));
    Y_Vertex->setGeometry(QRect(221, 58, 77, 20));
    AddVertex = new QPushButton(Dialog);
    AddVertex->setObjectName(QString::fromUtf8("AddVertex"));
    AddVertex->setGeometry(QRect(304, 56, 87, 25));
    label_4 = new QLabel(Dialog);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(220, 90, 41, 21));
    label_2 = new QLabel(Dialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(9, 244, 289, 41));
    label_5 = new QLabel(Dialog);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(9, 87, 71, 42));
    label_3 = new QLabel(Dialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(160, 90, 16, 21));
    AddItem = new QPushButton(Dialog);
    AddItem->setObjectName(QString::fromUtf8("AddItem"));
    AddItem->setGeometry(QRect(86, 213, 77, 25));
    VertexNumber = new QSpinBox(Dialog);
    VertexNumber->setObjectName(QString::fromUtf8("VertexNumber"));
    VertexNumber->setGeometry(QRect(9, 58, 71, 20));
    cancelButton = new QPushButton(Dialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(221, 213, 77, 25));
    fillColourComboBox = new QComboBox(Dialog);
    fillColourComboBox->setObjectName(QString::fromUtf8("fillColourComboBox"));
    fillColourComboBox->setGeometry(QRect(9, 137, 101, 20));
    label_6 = new QLabel(Dialog);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(40, 160, 71, 41));
    fiducialBox = new QSpinBox(Dialog);
    fiducialBox->setObjectName(QString::fromUtf8("fiducialBox"));
    fiducialBox->setGeometry(QRect(197, 137, 101, 20));
    addFiducialButton = new QPushButton(Dialog);
    addFiducialButton->setObjectName(QString::fromUtf8("addFiducialButton"));
    addFiducialButton->setGeometry(QRect(304, 135, 87, 25));
    QWidget::setTabOrder(VertexNumber, X_Vertex);
    QWidget::setTabOrder(X_Vertex, Y_Vertex);
    QWidget::setTabOrder(Y_Vertex, AddVertex);
    QWidget::setTabOrder(AddVertex, fillColourComboBox);
    QWidget::setTabOrder(fillColourComboBox, AddItem);
    QWidget::setTabOrder(AddItem, cancelButton);

    retranslateUi(Dialog);
    QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(close()));

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Add New Item", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Dialog->setToolTip(QApplication::translate("Dialog", "Add New Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    label->setText(QApplication::translate("Dialog", "Give the co-ordinates of the vertices of the polygon with centre at (0,0)", 0, QApplication::UnicodeUTF8));
    AddVertex->setText(QApplication::translate("Dialog", "Add New Vertex", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Dialog", "          Y", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Dialog", "Note:The item rotates with respect to (0,0)", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Dialog", "Vertex Number", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Dialog", "X", 0, QApplication::UnicodeUTF8));
    AddItem->setText(QApplication::translate("Dialog", "Add Item", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("Dialog", "Cancel", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Dialog", "Set Colour", 0, QApplication::UnicodeUTF8));
    addFiducialButton->setText(QApplication::translate("Dialog", "Set Fiducial", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
