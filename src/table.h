#ifndef __TABLE_H__
#define __TABLE_H__

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QtGui>
#include <iostream>


class Table : public QGraphicsRectItem
{
	public : 
			Table();
			
	private :
			
			
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
	
};

#endif // __TABLE_H__
