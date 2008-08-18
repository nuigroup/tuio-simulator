#ifndef __READMEDIALOG_H__
#define __READMEDIALOG_H__

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_readmeDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *readmeDialog)
    {
    if (readmeDialog->objectName().isEmpty())
        readmeDialog->setObjectName(QString::fromUtf8("readmeDialog"));
    readmeDialog->resize(466, 475);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.png")), QIcon::Normal, QIcon::Off);
    readmeDialog->setWindowIcon(icon);
    gridLayout = new QGridLayout(readmeDialog);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(readmeDialog);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    textBrowser = new QTextBrowser(readmeDialog);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

    gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


    retranslateUi(readmeDialog);

    QMetaObject::connectSlotsByName(readmeDialog);
    } // setupUi

    void retranslateUi(QDialog *readmeDialog)
    {
    readmeDialog->setWindowTitle(QApplication::translate("readmeDialog", "Readme", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("readmeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:12pt; font-weight:600;\">QMTSim Help</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    textBrowser->setHtml(QApplication::translate("readmeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><a name=\"QMTSim_Help\"></a>   QMTSim<span style=\" font-weight:400;\"> is a new advanced multi touch simulatorbased on Qt 4.4. Its written in C++ so now onwards there will be no JVM:) The simulator helps you add new items ( both a tangible and a cursor) in real time , customize their property and delete them when notrequired. It also lets you define a pat"
        "h for the item to follow duringthe animation run.You can define the path by selecting points on thepath which are then joined using bezier curves giving a smooth path.Theitem with its properties along with its path if specified can be savedin a XML file which can be reloaded in future.All the items that areselected are saved in the same file. Thus selective bunch of items canbe saved and uploaded.The path of the item can be changed also. QMTSimalso has the support for two-finger emulation with right click. Morefeatures are discussed below in the appropriate section. Hope you enjoyusing QMTSim. For any more feature request or bug , please mail tomr.ashish.rai@gmail.com </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><a name=\""
        "Details\"></a><span style=\" font-size:xx-large;\">D</span><span style=\" font-size:xx-large;\">etails</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">R</span><span style=\" font-weight:600;\">ight and Left Mouse Clicks</span>: Using the left click you can emulate a single finger touch which youcan navigate using the mouse without lifting the mouse finger.Two-finger touch for zooming etc can be emulated using the rightclick.You control one of the cursor with the mouse movement while theother is a mirror image of the first. The cursor is destroyed as soonas you lift your finger up and cursors with new IDs are created at nextusage. </p>\n"
"<p style=\"-qt-paragraph-type:"
        "empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">A</span><span style=\" font-weight:600;\">dding New Items</span> :All types of 2D geometrical figures can be created and added to thetable to represent various tangibles.These items can be stored in XMLfiles for future use. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a>Add Polygon : Apolygon can be added by specifying its vertices in a closed format ieyou have to repeat the first vertex as the last vertex.Fiducialattached to it and its color can be specified too. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
        "-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a>AddEllipse : For sake of geometrical completeness, you can add an ellipseon the table by providing the rectangle containing it and specifyingwhere to place it on the scene. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a>AddCursor : In order to support multiple cursors, an extra class of itemscalled cursors is implemented which sends cursor data and thus emulatesmultiple cursors on the table. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">D</span><span style=\" font-weight:600;\">elete Item</span> : All "
        "the items that are selected ( multiple items can be selected using Ctrl + left click ) can be deleted . </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">S</span><span style=\" font-weight:600;\">et Path</span>:With just one mouse at your disposal , even if you have multipleobjects you can move just one at a time and hence will not be able toproduce complex gestures. In order to overcome this, you can specifythe path to be followed by the items which are required to move byproviding points on the scene which are then joined using Bezier curveproducing a smooth path.You can even provide normalized time periodbetween which the motion should occur. Normalized time period helps youinflate or defla"
        "te the time of animation and the items co-ordinateaccordingly to run in the stipulated time period.The points can beprovided with the mouse or can be added numerically. The smoothness ofthe path formed between the points can be varied too. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">S</span><span style=\" font-weight:600;\">tart Animation</span>All the items whose path has been set will follow their path in thestipulated normalized time for the animation time set ( which is bydefault 10000 ms ). The percentage of animation time is shown in theprogress bar. You can <span style=\" font-weight:600;\">forward or backward  the animation time</span> using the animation timeline at the speed of"
        " your mouse.The animation can be paused and then restarted. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">N</span><span style=\" font-weight:600;\">OTE</span>: Even while the animation is running , you are free to move objectswith the mouse and use the cursor associated with the right and leftclicks of the mouse.However it is advisable not to move items which areunder animation. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">R</span><span style=\" font-weight:600;\">eset Animation</span>: After the animation has been done, it can be re-"
        "started right fromthe place where they are present or changed with the mouse.They can allbe set to their starting position by the Reset button. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">S</span><span style=\" font-weight:600;\">ave and Upload</span>: Once an item is created, it can be saved along with its allproperties in an XML file and can be uploaded for future use leading toreuse of your hard work building the gesture. Items can be selectivelysaved by choosing only those items with ctrl-left click for multipleobjects.Thus several gestures can be saved individually or as a sessionand uploaded in a similar fashion. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-"
        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">D</span><span style=\" font-weight:600;\">ebug</span>: Debug window has been implemented as an external non-modal windowwhich shows on when the debug is triggered from the file menu. Thedebug window comprises of four small views which shows the IDs of thealive tangibles and cursors separately and also what values are send ina SET TUIO data. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">T</sp"
        "an><span style=\" font-weight:600;\">UIO Transmission</span>: The TUIO dats is not started to transmit until this button ispressed. A default TUIO sender is connected to 127.0.0.1 at port number3333. Extra TUIO senders can be set using <span style=\" font-weight:600;\">Configure Transmission</span> by specifying appropriate address and port number. Currently there is support only for UDP packets. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">O</span><span style=\" font-weight:600;\">pacity Control</span>: A slider is provided to change the opacity of the QMTSim mainwindow.This will help to keep the simulator just above the application,make QMTSim transpaernt , do a bit of resizing and then"
        " both theapplication and QMTSim will work in the same frame and give animpression that the application itself is loaded in the simulator. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Resize Table: </span>The table, represented by the rectanguluar region, can be resized dynamically from a dialog which pops up when Menu-&gt;Resize Table is triggered. The dialog contains two sliders which control the height and width of the table.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
        "nt:0px; font-size:8pt;\">When QMTSim is started, it starts with an opacity of 0.5 and buttons on the main window being hidden. The buttons can be viewed by Menu-&gt;View. They can again be hidden by Menu-&gt;View.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a>Please report any bug or query or feature-request to <span style=\" font-weight:600;\">mr.ashish.rai@gmail.com</span> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><a name=\"Details\"></a><span style=\" font-weight:600;\">H</span><span style=\" font-weight:600;\">OPE YOU ENJOY USING QMTSim</span> </p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(readmeDialog);
    } // retranslateUi

};

namespace Ui7 {
    class readmeDialog: public Ui_readmeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // __READMEDIALOG_H__
