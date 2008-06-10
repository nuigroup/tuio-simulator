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

class SceneCursor : public QGraphicsEllipseItem , public Tangible_Type
{



	public : 
			SceneCursor(int x, int y, int w, int h);
			QGraphicsItemAnimation *animation;
			QBrush *local_brush;
			
	
	
	
	
};


#endif // __SCENECURSOR_H__
