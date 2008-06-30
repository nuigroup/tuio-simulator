#ifndef __TUIOANIMATION_H__
#define __TUIOANIMATION_H__

#include <QGraphicsItemAnimation>
#include <QGraphicsScene>


class TUIOanimation : public QGraphicsItemAnimation
{
	public :
		TUIOanimation();
		void setScene(QGraphicsScene *winScene );
		void afterAnimationStep( qreal step );
		QGraphicsScene *scene ;
	
};

#endif // __TUIOANIMATION_H__
