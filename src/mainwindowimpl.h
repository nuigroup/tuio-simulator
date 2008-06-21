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
#include <QLayout>
#include <QCursor>
#include <QPolygon>
#include <QPainterPath>
#include <QAbstractSlider>
#include <QXMLStreamWriter>
#include <QXMLStreamReader>
#include "item.h"
#include "addellipsedialogimpl.h"
#include "addcusordialogimpl.h"
#include "configuredialogimpl.h"
#include <iostream>



#include "ui_mainwindow.h"

class MainWindowImpl : public QMainWindow , public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	
    QGraphicsScene *scene ;
    QTimeLine *timer;
    bool animationStarted ;
    int framerange;
    void readEllipse(QXmlStreamReader * xmlReader);
    void readCursor(QXmlStreamReader * xmlReader);
    void readPolygon(QXmlStreamReader * xmlReader);

	
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
void showConfigureDialog();




};
#endif





