#ifndef __TABLE_H__
#define __TABLE_H__

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QPointF>
#include <QtGui>
#include <iostream>
#include "mainwindowimpl.h"
#include "TouchData.h"


class Table : public QGraphicsRectItem
{
	public : 
			Table(MainWindowImpl *win);
			QGraphicsScene *myscene ;
			MainWindowImpl *mywin;
			TouchData *OSCdata ;
			
			
	private :
			
			
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
	
};

#endif // __TABLE_H__
