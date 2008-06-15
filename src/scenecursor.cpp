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


