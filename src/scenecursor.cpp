#include "scenecursor.h"

SceneCursor::SceneCursor()
{
	
	
	animation = new QGraphicsItemAnimation;
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setFlag(QGraphicsItem::ItemIsSelectable,true);
    setCursor(Qt::PointingHandCursor);
    local_brush = new QBrush(Qt::red,Qt::SolidPattern);
    setBrush(*local_brush);
    tangible_type = 3;
    tangible_geom = QString("Cursor");
    
}

  void SceneCursor::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		std::cout << "Cursor Mouse Release Event" << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void SceneCursor::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Cursor Mouse Press Event" << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void SceneCursor::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Cursor Mouse Move Event" << "\n" ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}




