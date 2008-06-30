#ifndef __TOUCHLIB_TOUCHDATA__
#define __TOUCHLIB_TOUCHDATA__

class TouchData
{
	
public :

	TouchData()
	{
		ID = -1;
		tagID = -1;
		X = 0.0 ;
		Y = 0.0 ;
		LX = 0.0 ;
		LY = 0.0 ;
		height = 0.0 ;
		width = 0.0 ;
		angle = 0.0 ;
		area = 0.0 ;
		packetUpdate = false ;
		active = false ;
	}
	int ID;
	int tagID;
	float X,LX;
	float Y,LY;

	float height;
	float width;
	float angle;

	float area;

	//float dX;
	//float dY;
	
	bool packetUpdate ; // flag to indicate that an update is made and a packet needs to be send
	bool active ; // flag to indicate if the item is on the table

};

#endif
