#include "mainwindowimpl.h"
#include "scenecursor.h"
#include <QList>

void MainWindowImpl::readCursor(QXmlStreamReader *xmlReader)
{
	
	SceneCursor *local_cursor = new SceneCursor();
	int position_x = 0,position_y = 0,r = 1,fiducial = 3;

	
	while (!xmlReader->atEnd())
	{
		xmlReader->readNext();
		if (xmlReader->isStartElement()) 
		{
			if (xmlReader->name() ==  "EndItem" ) 
			{
				local_cursor->setRect(-r,-r,r*2,r*2);
				scene->addItem(local_cursor);
				local_cursor->moveBy(position_x+r,position_y+r);
				std::cout << "Moving cursor " << position_x+r <<"\t"<< position_y+r << "\n";
    			local_cursor->animation->setItem(local_cursor);
    			local_cursor->animation->setTimeLine(timer);
    			local_cursor->r = r;
    			update();
    			//QMessageBox::information(this,"QMTSim","Added Cursor");
				return ;
			}
			
			
			
			else if (xmlReader->name() ==  "Position" )
			{
				position_x = (xmlReader->attributes().value("Position_x")).toString().toInt();
				position_y = (xmlReader->attributes().value("Position_¶y")).toString().toInt();
				std::cout << "Moving cursor " << position_x <<"\t"<< position_y << "\n";
				//QMessageBox::information(this,"QMTSim","Setting Position");
			}
				
			else if (xmlReader->name() == "Geometry" )
			{
				r = (xmlReader->attributes().value("Radius")).toString().toInt();
				//QMessageBox::information(this,"QMTSim","Setting Radius");
				
				
				
			}
			
			else if (xmlReader->name() == "Fiducial" )
			{
				fiducial = (xmlReader->attributes().value("Value")).toString().toInt();
				local_cursor->fiducial.append(fiducial);
				//QMessageBox::information(this,"QMTSim","Setting Fiducial");
			}
			
			else if (xmlReader->name() == "Colour")
			{
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
							local_cursor->animation->setPosAt(i / 500.0, QPointF(x,y));
         					local_cursor->path_x.insert(i,x);
         					local_cursor->path_y.insert(i,y);
							i++;
						}
						
					}
				}
			}
				
			
			
			
			
			
			
		}
		
		
		
	}
	
}
