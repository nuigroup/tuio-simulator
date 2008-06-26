#include "sceneellipse.h"
#include <iostream>

SceneEllipse::SceneEllipse()
{
	
	
	animation = new QGraphicsItemAnimation;
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setFlag(QGraphicsItem::ItemIsSelectable,true);
    setCursor(Qt::PointingHandCursor);
    
    tangible_type = 2;
    tangible_geom = QString("Ellipse");
    fiducial.append(2);

}


 void SceneEllipse::keyPressEvent(QKeyEvent *keyevent)
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


  void SceneEllipse::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

		std::cout << "Ellipse Mouse Release Event TangibleId  " << Id << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);


	}

  void SceneEllipse::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Ellipse Mouse Press Event TangibleId  " << Id << "\n" ;
		QGraphicsItem::mousePressEvent(mouseEvent);


	}
	
  void SceneEllipse::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		std::cout << "Ellipse Mouse Move Event TangibleId  " << Id << "\n" ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);



	}

