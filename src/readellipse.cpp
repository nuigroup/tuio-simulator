#include "mainwindowimpl.h"
#include "sceneellipse.h"
#include <QList>


void MainWindowImpl::readEllipse(QXmlStreamReader * xmlReader)
{
	
	SceneEllipse *local_ellipse = new SceneEllipse();
	float position_x = 0,position_y = 0; 
	int w = 1,h = 1,fiducial = 2;
	
    tangibleId++ ;
    local_ellipse->OSCdata->ID = tangibleId ;
    local_ellipse->OSCdata->tagID = tangibleId ;

	
	while (!xmlReader->atEnd())
	{
		xmlReader->readNext();
		if (xmlReader->isStartElement()) 
		{
			if (xmlReader->name() ==  "EndItem" ) 
			{

				scene->addItem(local_ellipse);
				local_ellipse->moveBy(position_x+w/2,position_y+h/2);
				std::cout << "Moving ellipse " << position_x+w/2 <<"\t"<< position_y+h/2 << "\n";
    			local_ellipse->animation->setItem(local_ellipse);
    			local_ellipse->animation->setTimeLine(timer);
    			local_ellipse->w = w;
    			local_ellipse->h = h;
    			update();
    			//QMessageBox::information(this,"QMTSim","Added Ellipse");
				return ;
			}
			
			
			
			else if (xmlReader->name() ==  "Position" )
			{
				position_x = (xmlReader->attributes().value("Position_x")).toString().toFloat();
				position_y = (xmlReader->attributes().value("Position_y")).toString().toFloat();
				//std::cout << "Moving cursor " << position_x <<"\t"<< position_y << "\n";
				//QMessageBox::information(this,"QMTSim","Setting Position");
			}
				
			else if (xmlReader->name() == "Geometry" )
			{
				w = (xmlReader->attributes().value("Width")).toString().toInt();
				h = (xmlReader->attributes().value("Height")).toString().toInt();
				//QMessageBox::information(this,"QMTSim","Setting Rectangle");
				local_ellipse->setRect(w/-2,h/-2,w,h);
			}
			
			else if (xmlReader->name() == "Fiducial" )
			{
				fiducial = (xmlReader->attributes().value("Value")).toString().toInt();
				local_ellipse->fiducial.append(fiducial);
				//QMessageBox::information(this,"QMTSim","Setting Fiducial");
			}
			
			else if (xmlReader->name() == "Colour")
			{
				int r,g,b,a;
				r = (xmlReader->attributes().value("R")).toString().toInt();
				g = (xmlReader->attributes().value("G")).toString().toInt();
				b = (xmlReader->attributes().value("B")).toString().toInt();
				a = (xmlReader->attributes().value("A")).toString().toInt();
				
				local_ellipse->colour.setRgb(r,g,b,a);
				QBrush *local_brush = new QBrush;
				local_brush->setColor(local_ellipse->colour);
				local_brush->setStyle(Qt::Dense1Pattern);
				local_ellipse->setBrush(*local_brush);
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
							local_ellipse->animation->setPosAt(i / 500.0, QPointF(x,y));
         					local_ellipse->path_x.replace(i,x);
         					local_ellipse->path_y.replace(i,y);
							i++;
						}
						
					}
				}
			}
				
			
			
			
			
			
			
		}
		
		
		
	}
}
