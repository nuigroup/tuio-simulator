#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__

#include <QtGui>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimeLine>
#include <QGraphicsItemAnimation>
#include "tangible_type.h"
#include <iostream>

class SceneEllipse : public QGraphicsEllipseItem,public Tangible_Type
{
	

	public : 
			SceneEllipse();
			
			
			
	
	
	
	protected :
			void keyPressEvent(QKeyEvent *keyevent);
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
};


#endif // __ELLIPSE_H__
