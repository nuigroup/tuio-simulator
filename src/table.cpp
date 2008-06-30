#include "table.h"

Table::Table(MainWindowImpl *win)
{

	//mywin = new MainWindowImpl;
	mywin = win;
	//myscene = new QGraphicsScene;
	myscene = win->scene;
	setFlag(QGraphicsItem::ItemIsMovable,false);
	setFlag(QGraphicsItem::ItemIsFocusable,false);
	setFlag(QGraphicsItem::ItemIsSelectable,true);
	setCursor(Qt::PointingHandCursor);
	OSCdata = new TouchData;
	OSCdata->packetUpdate = false ;
	OSCdata->active = false ;
}

  void Table::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		
		OSCdata->active = false ;
		std::cout << "Table Mouse Release Event CursorId  "<< OSCdata->ID << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void Table::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		QPointF presentPos ;
		mywin->cursorId++;
		OSCdata->ID = mywin->cursorId;
		OSCdata->active = true ;
		std::cout << "Table Mouse Press Event CursorId  "<< OSCdata->ID << "\n" ;
		presentPos = mouseEvent->scenePos();
		OSCdata->X = presentPos.rx()/600 ;
		OSCdata->Y = presentPos.ry()/400 ;
		OSCdata->LX = presentPos.rx()/600 ;
		OSCdata->LY = presentPos.ry()/500 ;
		mywin->table->OSCdata->packetUpdate = true ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void Table::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Table Mouse Move Event  Cursor Id  "<< OSCdata->ID << "\n" ;
		OSCdata->X = (mouseEvent->scenePos()).rx()/600 ;
		OSCdata->Y = (mouseEvent->scenePos()).ry()/400 ;
		mywin->table->OSCdata->packetUpdate = true ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}
