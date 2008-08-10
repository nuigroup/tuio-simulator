#ifndef __TABLE_H__
#define __TABLE_H__

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QPointF>
#include <QtGui>
#include <iostream>
#include "mainwindowimpl.h"
#include "scenecursor.h"
#include "TouchData.h"
#include <QGraphicsEllipseItem>


class Table : public QGraphicsRectItem
{
	public : 
			Table(MainWindowImpl *win);
			QGraphicsScene *myscene ;
			MainWindowImpl *mywin;
			TouchData *OSCdata ;
			SceneCursor *cursor1;
			SceneCursor *cursor2;
			int w,h;
			QGraphicsEllipseItem *cursor3;
			
			double centrex,centrey;
			bool twoFinger;
			
	private :
			
			
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
	
};

#endif // __TABLE_H__
