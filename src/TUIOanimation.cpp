#include "TUIOanimation.h"
#include <iostream>
#include <QList>
#include <QGraphicsItem>
#include "tangible_type.h"
static bool Verbose = false ;


TUIOanimation::TUIOanimation()
{
	
}

void TUIOanimation::setScene(QGraphicsScene *winScene )
{
	scene = winScene ;
}

void TUIOanimation::afterAnimationStep( qreal step )
{
	
	if (Verbose) std::cout << "After Animation Step" << step <<"\n" ;
	//QList<QGraphicsItem *> list 
	QGraphicsItem *localItem = item();
	Tangible_Type *myTangible = dynamic_cast<Tangible_Type*>(localItem);
	myTangible->OSCdata->packetUpdate = true ;
	myTangible->OSCdata->X = (localItem->scenePos()).rx();
	myTangible->OSCdata->Y = (localItem->scenePos()).ry();
	
	
	
}
