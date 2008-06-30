#include "item.h"


myitem::myitem(QTimeLine* timer,QGraphicsItem *parent,QGraphicsScene *scene):QGraphicsPolygonItem(parent, scene),Tangible_Type()
	
	{  
		/*if(  (mypolygon)== NULL )
		    {
		        mypolygon = new QPolygon;   	
 			    (*mypolygon) << QPoint(-50, -50) << QPoint(-50, 50)
                      << QPoint(50, 50) << QPoint(50,-50)
                      << QPoint(-50,-50); 
            }*/
  
       //setPolygon(*mypolygon);
    animation = new TUIOanimation;

    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setFlag(QGraphicsItem::ItemIsSelectable,true);
    setCursor(Qt::PointingHandCursor);
    
    tangible_type = 1;
    tangible_geom = QString("Polygon");
    fiducial.append(1);
    OSCdata = new TouchData;
    OSCdata->X = (scenePos()).rx() ;
    OSCdata->LX = (scenePos()).rx() ;
    OSCdata->Y = (scenePos()).ry() ;
    OSCdata->LY = (scenePos()).ry() ;

    
    
	}
	

	
 void myitem::keyPressEvent(QKeyEvent *keyevent)
 {
 	switch (keyevent->key())
 	{
 		case Qt::Key_R : rotate(1);
 					break;
 					
 					
 		case Qt::Key_L : rotate(-1);
 					break;
 		
 		default : break;
 					
 					
 					
		}
 	QGraphicsItem::keyPressEvent(keyevent);
 	
}


  void myitem::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		//std::cout << "Polygon Mouse Release Event TangibleId  " << OSCdata->ID << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void myitem::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		//std::cout << "Polygon Mouse Press Event TangibleId  " << OSCdata->ID << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void myitem::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		//std::cout << "Polygon Mouse Move Event TangibleId  " << OSCdata->ID << "\n" ;
		OSCdata->X = (mouseEvent->scenePos()).rx() ;
		OSCdata->Y = (mouseEvent->scenePos()).ry() ;
		OSCdata->packetUpdate = true ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}

