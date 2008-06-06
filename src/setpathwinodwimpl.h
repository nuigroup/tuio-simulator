#ifndef __SETPATHWINODWIMPL_H__
#define __SETPATHWINODWIMPL_H__

#include "setpathwindow.h"
#include <QPainterPath>
#include <QPointF>
#include <QPen>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QTimeLine>
#include "item.h"

#include <iostream>

#include "setpathscene.h"



class SetPathWindowImpl : public QMainWindow , public Ui2::SetPathWindow
{
Q_OBJECT
public:
	SetPathWindowImpl( QGraphicsItem* ,QWidget * parent = 0, Qt::WFlags f = 0 );
	
	int count;
	QPainterPath *path;
	SetPathScene *scene;
	myitem *setpathitem;
	QTimeLine *setpathtimer;
	
	void bezierControlPoint (int i , double& cp1x, double& cp1y,double& cp2x, double& cp2y);

	
private slots:
	void addPoint();
	void previewPath();
	void addPointOfScene(double i,double j);
	void setpath();



};

#endif // __SETPATHWINODWIMPL_H__
