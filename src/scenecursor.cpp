#include "scenecursor.h"

SceneCursor::SceneCursor()
{
	
	
	//animation = new QGraphicsItemAnimation;
	animation = new TUIOanimation;
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setFlag(QGraphicsItem::ItemIsSelectable,true);
    setCursor(Qt::PointingHandCursor);
    local_brush = new QBrush(Qt::red,Qt::SolidPattern);
    setBrush(*local_brush);
    tangible_type = 3;
    tangible_geom = QString("Cursor");
    OSCdata = new TouchData;
    OSCdata->X = (scenePos()).rx() ;
    OSCdata->LX = (scenePos()).rx() ;
    OSCdata->Y = (scenePos()).ry() ;
    OSCdata->LY = (scenePos()).ry() ;
    
    
}

  void SceneCursor::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		//std::cout << "Cursor Mouse Release Event CursorID  " << OSCdata->ID  << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void SceneCursor::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		//std::cout << "Cursor Mouse Press Event CursorId  " << OSCdata->ID << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void SceneCursor::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		//std::cout << "Cursor Mouse Move Event CursorId  " << OSCdata->ID << "\n" ;
		OSCdata->X = (mouseEvent->scenePos()).rx()/600 ;
		OSCdata->Y = (mouseEvent->scenePos()).ry()/400 ;
		OSCdata->packetUpdate = true ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}




