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
}

  void Table::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		
		active = false ;
		std::cout << "Table Mouse Release Event CursorId  "<< Id << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void Table::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		
		mywin->cursorId++;
		Id = mywin->cursorId;
		active = true ;
		std::cout << "Table Mouse Press Event CursorId  "<< Id << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void Table::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Table Mouse Move Event  Cursor Id  "<< Id << "\n" ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}

