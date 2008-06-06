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
#include "item.h"



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

	
private slots:

void showDialog();
void setPathDialog();
void startAnimation();
void setanimationtime();
void animationslidertime(int n);
void animationFinished();




};
#endif





