#ifndef __TANGIBLE_TYPE_H__
#define __TANGIBLE_TYPE_H__

#include <QString>
#include <QList>
#include <QColor>
#include <QGraphicsItemAnimation>
#include "TouchData.h"
#include "TUIOanimation.h"


class Tangible_Type
{
	public :
			int tangible_type;
			QString tangible_geom ;
			Tangible_Type();
			QList<int> fiducial;
			QList<double> path_x;
			QList<double> path_y;
			TUIOanimation *animation;
			QList<double> vertex_x;
			QList<double> vertex_y;
			int r,h,w;
			QColor colour;
			TouchData *OSCdata;
			//int Id;


			
			int getType();
};

#endif // __TANGIBLE_TYPE_H__
