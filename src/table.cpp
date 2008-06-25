#include "table.h"

Table::Table()
{

	setFlag(QGraphicsItem::ItemIsMovable,false);
	setFlag(QGraphicsItem::ItemIsFocusable,false);
	setFlag(QGraphicsItem::ItemIsSelectable,false);
	setCursor(Qt::PointingHandCursor);
}

  void Table::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		std::cout << "Table Mouse Release Event" << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void Table::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Table Mouse Press Event" << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void Table::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Table Mouse Move Event" << "\n" ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}

