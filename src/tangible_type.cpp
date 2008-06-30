#include "tangible_type.h"
#include <iostream>

Tangible_Type::Tangible_Type()
{
	tangible_geom =  QString("Empty") ;
	tangible_type = 0;
	for ( int i = 0 ; i < 500 ; i ++ )
	{
		path_x.prepend(0);
		path_y.prepend(0);
		
		
	}

	std::cout << "Size is " << path_x.size() << "\n" ;
	
}

int Tangible_Type::getType()
{
	return tangible_type;
}
