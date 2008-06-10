#include "sceneellipse.h"
#include <iostream>

SceneEllipse::SceneEllipse(int x, int y, int w, int h):QGraphicsEllipseItem(x,y,w,h)
{
	
	
	animation = new QGraphicsItemAnimation;
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setFlag(QGraphicsItem::ItemIsSelectable,true);
    setCursor(Qt::PointingHandCursor);
    tangible_type = 2;
    tangible_geom = QString("Ellipse");
    //std::cout << "Tangible type" << "\t" << tangible_type << "\n";
    //std::cout << ((Tangible_Type*)this)->tangible_type << "\n" ;
    //std::cout << this << "\n";
   //Tangible_Type *myTangible = (Tangible_Type*)this;
   //std::cout << this << "\t"  << myTangible <<"\t"<<myTangible->tangible_type<<"\n" ;
   //std::cout << (myTangible->getType()) << "\n" ;
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
