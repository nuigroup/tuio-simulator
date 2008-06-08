#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__

#include <QtGui>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimeLine>
#include <QGraphicsItemAnimation>

class SceneEllipse : public QGraphicsEllipseItem
{
	

	public : 
			SceneEllipse(int x, int y, int w, int h);
			QGraphicsItemAnimation *animation;
	
	
	
	protected :
			void keyPressEvent(QKeyEvent *keyevent);	
};


#endif // __ELLIPSE_H__
