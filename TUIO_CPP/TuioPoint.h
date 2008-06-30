/*
	TUIO C++ Library - part of the reacTIVision project
	http://reactivision.sourceforge.net/

	Copyright (c) 2005-2008 Martin Kaltenbrunner <mkalten@iua.upf.edu>
	
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef INCLUDED_TUIOPOINT_H
#define INCLUDED_TUIOPOINT_H

class TuioPoint {

	protected:
		float xpos, ypos;
	
	public:
	TuioPoint (float xpos, float ypos) {
		this->xpos = xpos;
		this->ypos = ypos;
	};

	TuioPoint (TuioPoint *tuioPoint) {
		this->xpos = tuioPoint->getX();
		this->ypos = tuioPoint->getY();
	};
	
	~TuioPoint(){};

	void update (TuioPoint *tuioPoint) {
		this->xpos = tuioPoint->getX();
		this->ypos = tuioPoint->getY();
	};
	
	void update (float xpos, float ypos) {
		this->xpos = xpos;
		this->ypos = ypos;
	};
	
	float getX() { return xpos; };
	float getY() { return ypos; };

	float getDistance(float x, float y) {
		float dx = xpos-x;
		float dy = ypos-y;
		return sqrtf(dx*dx+dy*dy);
	}
	
	float getDistance(TuioPoint *tuioPoint) {
		float dx = xpos-tuioPoint->getX();
		float dy = ypos-tuioPoint->getY();
		return sqrtf(dx*dx+dy*dy);
	}

	float getAngle(TuioPoint *tuioPoint) {
		
		float side = tuioPoint->getX()-xpos;
		float height = tuioPoint->getY()-ypos;
		float distance = tuioPoint->getDistance(xpos,ypos);
		
		float angle = (float)(asin(side/distance)+M_PI/2);
		if (height<0) angle = 2.0f*(float)M_PI-angle;
		
		return angle;
	}
	
	float getScreenX(int w) { return xpos*w; };
	float getScreenY(int h) { return ypos*h; };
};

#endif
