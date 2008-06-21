#ifndef __ITEM_H__
#define __ITEM_H__

#include <QtGui>
#include <Qt>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPolygon>
#include <QRect>
#include <QTimeLine>
#include <QGraphicsItemAnimation>
#include "tangible_type.h"
#include <iostream>




class myitem : public QGraphicsPolygonItem ,public Tangible_Type

{
	
	
	public : 
			

			
			
			myitem(QTimeLine* timer= 0,QGraphicsItem *parent =0 ,QGraphicsScene *scene = 0); 
			
	protected :

			void keyPressEvent(QKeyEvent *keyevent); 
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
};



#endif // __ITEM_H__
