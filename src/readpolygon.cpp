#include "mainwindowimpl.h"
#include "item.h"
#include <QList>
void MainWindowImpl::readPolygon(QXmlStreamReader * xmlReader)
{
	
	myitem *local_item = new myitem();
	int position_x = 0,position_y = 0,w = 1,h = 1,fiducial = 1,count = 0;
	QPolygon *mypolygon = new QPolygon;

	
	while (!xmlReader->atEnd())
	{
		xmlReader->readNext();
		if (xmlReader->isStartElement()) 
		{
			if (xmlReader->name() ==  "EndItem" ) 
			{
				local_item->setPolygon(*mypolygon);
				scene->addItem(local_item);
				local_item->moveBy(position_x,position_y);
				std::cout << "Moving ploygon " << position_x <<"\t"<< position_y << "\n";
    			local_item->animation->setItem(local_item);
    			local_item->animation->setTimeLine(timer);
    			update();
    			//QMessageBox::information(this,"QMTSim","Added Polygon");
				return ;
			}
			
			
			
			else if (xmlReader->name() ==  "Position" )
			{
				position_x = (xmlReader->attributes().value("Position_x")).toString().toInt();
				position_y = (xmlReader->attributes().value("Position_y")).toString().toInt();
				std::cout << "Moving cursor " << position_x <<"\t"<< position_y << "\n";
				//QMessageBox::information(this,"QMTSim","Setting Position");
			}
				
			else if (xmlReader->name() == "Vertex" )
			{
				
				
				w = (xmlReader->attributes().value("Vertex_x")).toString().toInt();
				h = (xmlReader->attributes().value("Vertex_y")).toString().toInt();
				//QMessageBox::information(this,"QMTSim","Setting Vertices");
				mypolygon->putPoints(count,1,w,h);
				local_item->vertex_x.insert(count,w);
				local_item->vertex_y.insert(count,h);
				count = count + 1;
				
			}
			
			else if (xmlReader->name() == "Fiducial" )
			{
				fiducial = (xmlReader->attributes().value("Value")).toString().toInt();
				local_item->fiducial.append(fiducial);
				//QMessageBox::information(this,"QMTSim","Setting Fiducial");
			}
			
			else if (xmlReader->name() == "Colour")
			{
				int r,g,b,a;
				r = (xmlReader->attributes().value("R")).toString().toInt();
				g = (xmlReader->attributes().value("G")).toString().toInt();
				b = (xmlReader->attributes().value("B")).toString().toInt();
				a = (xmlReader->attributes().value("A")).toString().toInt();
				
				local_item->colour.setRgb(r,g,b,a);
				QBrush *local_brush = new QBrush;
				local_brush->setColor(local_item->colour);
				local_brush->setStyle(Qt::Dense2Pattern);
				local_item->setBrush(*local_brush);
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
							local_item->animation->setPosAt(i / 500.0, QPointF(x,y));
         					local_item->path_x.insert(i,x);
         					local_item->path_y.insert(i,y);
							i++;
						}
						
					}
				}
			}
				
			
			
			
			
			
			
		}
		
		
		
	}
}
