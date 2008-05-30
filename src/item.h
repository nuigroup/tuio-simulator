#ifndef __ITEM_H__
#define __ITEM_H__

#include <QtGui>
#include <Qt>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPolygon>
#include <QRect>




class myitem : public QGraphicsPolygonItem 

{
	
	
	public : 
			myitem(QPolygon *mypolygon = 0,QGraphicsItem *parent =0 ,QGraphicsScene *scene = 0); 
			
	protected :

			 void keyPressEvent(QKeyEvent *keyevent); 
			    
			
};



#endif // __ITEM_H__
