#ifndef __SETPATHSCENE_H__
#define __SETPATHSCENE_H__

#include <QList>
#include <QGraphicsScene>
#include <QPointF>
#include <QGraphicsSceneMouseEvent>
#include "setpathscene.h"

class SetPathScene : public QGraphicsScene
{
Q_OBJECT

public :
	SetPathScene();
	QList<double> x;
	QList<double> y;
	
	
	
signals :
	void addPoint(double i,double j);
	
	
protected :
	   void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
	   void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
	   void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
};

#endif // __SETPATHSCENE_H__
