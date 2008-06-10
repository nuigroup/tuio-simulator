#include "tangible_type.h"
#include <iostream>

Tangible_Type::Tangible_Type()
{
	tangible_geom =  QString("Empty") ;
	tangible_type = 0;
	
	
}

int Tangible_Type::getType()
{
	return tangible_type;
}
