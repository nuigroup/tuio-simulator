#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H

#include <QBrush>
#include <QProgressBar>
#include <QPen>
#include <QMainWindow>
#include <QGraphicsView>
#include <QHBoxLayout>
#include <QFlags>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QLayout>
#include <QCursor>
#include <QPolygon>
#include <QPainterPath>
#include <QAbstractSlider>
#include <QXMLStreamWriter>
#include <QXMLStreamReader>
#include <QTimer>
#include <QTime>
#include "item.h"
#include "addellipsedialogimpl.h"
#include "addcusordialogimpl.h"
#include "configuredialogimpl.h"
#include "table.h"
#include "TUIOSender.h"
#include "aboutQMTSimImpl.h"
#include "debugWindowImpl.h"
#include "readmeDialogImpl.h"
#include <iostream>




#include "ui_mainwindow.h"

class Table ;
class TUIOSender ;
class debugWindowImpl;
class readmeDialogImpl;

class MainWindowImpl : public QMainWindow , public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	
    QGraphicsScene *scene ;
    QTimeLine *timer;
    QTime t;
    bool animationStarted ;
    bool txStarted ;
    int framerange;
    Table *table;
    int cursorId;
    int tangibleId;
    QTimer *packetTimer;
    TUIOSender *mainSender;
    debugWindowImpl *myDebug;
    readmeDialogImpl *myReadme;
    int count ;
    
    void readEllipse(QXmlStreamReader * xmlReader);
    void readCursor(QXmlStreamReader * xmlReader);
    void readPolygon(QXmlStreamReader * xmlReader);
    
    signals :
	void frameSignal();
	void resetTxSignal();

	
private slots:

void showDialog();
void deleteItem();
void uploadItem();
void saveItem();
void setPathDialog();
void startAnimation();
void setanimationtime();
void animationFinished();
void showAddCursorDialog();
void showAddEllipseDialog();
void animationslidertime(int n);
void opacitySliderImpl(int n);
void showConfigureDialog();
void startTx();
void restartPacketTimer();
void resetTx();
void showDebugWindow();
void showAboutQMTSim();
void showReadme();





};
#endif





