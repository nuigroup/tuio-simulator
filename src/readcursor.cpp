#include "mainwindowimpl.h"
#include "scenecursor.h"
#include <QList>
#include <iostream>

void MainWindowImpl::readCursor(QXmlStreamReader *xmlReader)
{
	
	SceneCursor *local_cursor = new SceneCursor();
	float position_x = 0,position_y = 0;
	int r = 1,fiducial = 3;

    
    cursorId++ ;
    local_cursor->OSCdata->ID = cursorId ;

	
	while (!xmlReader->atEnd())
	{
		xmlReader->readNext();
		if (xmlReader->isStartElement()) 
		{
			if (xmlReader->name() ==  "EndItem" ) 
			{
				//std::cout << "In end item" << "\n" ;
				local_cursor->setRect(-r,-r,r*2,r*2);
				scene->addItem(local_cursor);
				local_cursor->moveBy(position_x+r,position_y+r);
				//std::cout << "Moving cursor " << position_x+r <<"\t"<< position_y+r << "\n";
    			local_cursor->animation->setItem(local_cursor);
    			local_cursor->animation->setTimeLine(timer);
    			local_cursor->r = r;
    			update();
    			//QMessageBox::information(this,"QMTSim","Added Cursor");
				return ;
			}
			
			
			
			else if (xmlReader->name() ==  "Position" )
			{
				//std::cout << "In position " << "\n" ;
				position_x = (xmlReader->attributes().value("Position_x")).toString().toFloat();
				position_y = (xmlReader->attributes().value("Position_¶y")).toString().toFloat();
				//std::cout << "Moving cursor " << position_x <<"\t"<< position_y << "\n";
				//QMessageBox::information(this,"QMTSim","Setting Position");
			}
				
			else if (xmlReader->name() == "Geometry" )
			{
				//std::cout << "In geometry" << "\n" ;
				r = (xmlReader->attributes().value("Radius")).toString().toInt();
				//QMessageBox::information(this,"QMTSim","Setting Radius");
				
				
				
			}
			
			else if (xmlReader->name() == "Fiducial" )
			{
				//std::cout << "In fiducial" << "\n" ;
				fiducial = (xmlReader->attributes().value("Value")).toString().toInt();
				local_cursor->fiducial.append(fiducial);
				//QMessageBox::information(this,"QMTSim","Setting Fiducial");
			}
			
			else if (xmlReader->name() == "Colour")
			{
				//std::cout << "in color" << "\n" ;
				int r,g,b,a;
				r = (xmlReader->attributes().value("R")).toString().toInt();
				g = (xmlReader->attributes().value("G")).toString().toInt();
				b = (xmlReader->attributes().value("B")).toString().toInt();
				a = (xmlReader->attributes().value("A")).toString().toInt();
				
				local_cursor->colour.setRgb(r,g,b,a);
				QBrush *local_brush = new QBrush;
				local_brush->setColor(local_cursor->colour);
				local_brush->setStyle(Qt::SolidPattern);
				local_cursor->setBrush(*local_brush);
			}
			
			else if (xmlReader->name() == "Path" )
			{
				//std::cout << "in path" << "\n" ;
				int i = 0 ;
				bool pathx = false ,pathy = false ;
				double x = 0 ,y = 0 ;
				while(xmlReader->name() != "EndPath" )
				{
					xmlReader->readNext();
					if (xmlReader->isStartElement())
					{
						if (xmlReader->name() == "Path_x" )
						{
							x = (xmlReader->attributes().value("X")).toString().toDouble();
							pathx = true ;
						}
						
						if (xmlReader->name() == "Path_y" )
						{
							y = (xmlReader->attributes().value("Y")).toString().toDouble();
							pathy = true ;
						}
						
						if (pathx && pathy)
						{
							pathx = false;
							pathy = false;
							//std::cout << "Animation Step "<< i << "\t" ;
							local_cursor->animation->setPosAt(i / 500.0, QPointF(x,y));
         					local_cursor->path_x.replace(i,x);
         					local_cursor->path_y.replace(i,y);
							i++;
						}
						
					}
				}
			}
				
			
			
			
			
			
			
		}
		
		
		
	}
	
}
