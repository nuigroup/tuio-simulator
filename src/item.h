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




class myitem : public QGraphicsPolygonItem 

{
	
	
	public : 
			
			myitem(QPolygon *mypolygon = 0,QTimeLine* timer= 0,QGraphicsItem *parent =0 ,QGraphicsScene *scene = 0); 
			QGraphicsItemAnimation *animation;
	protected :

			 void keyPressEvent(QKeyEvent *keyevent); 
			
			    
			
};



#endif // __ITEM_H__
