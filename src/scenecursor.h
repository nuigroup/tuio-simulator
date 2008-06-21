#ifndef __SCENECURSOR_H__
#define __SCENECURSOR_H__

#include <QtGui>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimeLine>
#include <QGraphicsItemAnimation>
#include <QBrush>
#include "tangible_type.h"
#include <iostream>

class SceneCursor : public QGraphicsEllipseItem , public Tangible_Type
{



	public : 
			SceneCursor();
		
			QBrush *local_brush;
			
	
	protected :
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
	
	
};


#endif // __SCENECURSOR_H__
