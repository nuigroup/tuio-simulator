#ifndef __TABLE_H__
#define __TABLE_H__

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QtGui>
#include <iostream>
#include "mainwindowimpl.h"


class Table : public QGraphicsRectItem
{
	public : 
			Table(MainWindowImpl *win);
			QGraphicsScene *myscene ;
			MainWindowImpl *mywin;
			bool active;  // Used to represent whether the mouse cursor is an active tnagible cursor
			int Id ; 
			
	private :
			
			
			void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);
			void mousePressEvent(QGraphicsSceneMouseEvent *mouseevent);
			void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseevent);
	
};

#endif // __TABLE_H__
