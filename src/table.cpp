#include "table.h"
//#include "QDebug.h"

Table::Table(MainWindowImpl *win)
{

	//mywin = new MainWindowImpl;
	mywin = win;
	//myscene = new QGraphicsScene;
	myscene = win->scene;
	setFlag(QGraphicsItem::ItemIsMovable,false);
	setFlag(QGraphicsItem::ItemIsFocusable,false);
	setFlag(QGraphicsItem::ItemIsSelectable,true);
	setCursor(Qt::PointingHandCursor);
	OSCdata = new TouchData;
	OSCdata->packetUpdate = false ;
	OSCdata->active = false ;
	twoFinger = false ;
	w = 600 ;
	h = 400 ;

}

  void Table::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{

	if (mouseEvent->button() ==  Qt::LeftButton)
	{
				OSCdata->active = false ;

		delete cursor3;
		
		//std::cout << "Table Mouse Release Event CursorId  "<< OSCdata->ID << "\n" ;
		QGraphicsItem::mouseReleaseEvent(mouseEvent);
	}
	
		else if(mouseEvent->button() ==  Qt::RightButton)
	{
		twoFinger = false ;
		delete cursor1->animation;
		delete cursor1->OSCdata ;
		delete cursor1;
		delete cursor2->animation;
		delete cursor2->OSCdata ;
		delete cursor2;
		
	}



	}

  void Table::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
		
	QPointF presentPos ;
	presentPos = mouseEvent->scenePos();
	
			if (mouseEvent->button() ==  Qt::LeftButton)
	{
		
		cursor3 = new QGraphicsEllipseItem();
		cursor3->setRect(-15,-15,30,30);
		myscene->addItem(cursor3);
		cursor3->setPos(presentPos);
		QBrush *local_brush3 = new QBrush;
		local_brush3->setColor(Qt::blue);
		local_brush3->setStyle(Qt::SolidPattern);
		cursor3->setBrush(*local_brush3);



		mywin->cursorId++;
		OSCdata->ID = mywin->cursorId;
		OSCdata->active = true ;
		//std::cout << "Table Mouse Press Event CursorId  "<< OSCdata->ID << "\n" ;
		OSCdata->X = presentPos.rx() ;
		OSCdata->Y = presentPos.ry();
		OSCdata->LX = presentPos.rx();
		OSCdata->LY = presentPos.ry();
		mywin->table->OSCdata->packetUpdate = true ;
		QGraphicsItem::mousePressEvent(mouseEvent);
	}
	
	else if(mouseEvent->button() ==  Qt::RightButton)
	{
		twoFinger = true ;
		cursor1 = new SceneCursor();
		cursor2 = new SceneCursor();
		
		//Initializing first cursor
		
		cursor1->setRect(-15,-15,30,30);
		myscene->addItem(cursor1);
		cursor1->moveBy(presentPos.rx(),presentPos.ry());
		centrex = presentPos.rx()+ 33;
		centrey = presentPos.ry();
		cursor1->animation->setItem(cursor1);
		cursor1->animation->setTimeLine(mywin->timer);

		mywin->cursorId++ ;
		cursor1->OSCdata->ID = mywin->cursorId ;
    
		QBrush *local_brush = new QBrush;
		local_brush->setColor(Qt::blue);
		local_brush->setStyle(Qt::SolidPattern);
		cursor1->setBrush(*local_brush);
		cursor1->r = 15 ;
		
				//Initializing second cursor
		
		cursor2->setRect(-15,-15,30,30);
		myscene->addItem(cursor2);
		cursor2->moveBy(presentPos.rx()+ 66,presentPos.ry());
		cursor2->animation->setItem(cursor2);
		cursor2->animation->setTimeLine(mywin->timer);

		mywin->cursorId++ ;
		cursor2->OSCdata->ID = mywin->cursorId ;
    
		QBrush *local_brush2 = new QBrush;
		local_brush2->setColor(Qt::blue);
		local_brush2->setStyle(Qt::SolidPattern);
		cursor2->setBrush(*local_brush2);
		cursor2->r = 15 ;
	}
		



	}
	
  void Table::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
	{
	
		if (!twoFinger)
	{
		//std::cout << "Table Mouse Move Event  Cursor Id  "<< OSCdata->ID << "\n" ;
		//qDebug() << mouseEvent->button() << endl ;
		cursor3->setPos((mouseEvent->scenePos()).rx(), (mouseEvent->scenePos()).ry());
		OSCdata->X = (mouseEvent->scenePos()).rx() ;
		OSCdata->Y = (mouseEvent->scenePos()).ry() ;
		mywin->table->OSCdata->packetUpdate = true ;
		QGraphicsItem::mouseMoveEvent(mouseEvent);
	}	
	
	else 
		
	{
		cursor1->setPos((mouseEvent->scenePos()).rx(), (mouseEvent->scenePos()).ry());
		cursor2->setPos( centrex + (centrex - (mouseEvent->scenePos()).rx()),centrey + (centrey - (mouseEvent->scenePos()).ry()));
		cursor1->OSCdata->X = (mouseEvent->scenePos()).rx() ;
		cursor1->OSCdata->Y = (mouseEvent->scenePos()).ry() ;
		cursor1->OSCdata->packetUpdate = true ;
		cursor2->OSCdata->X = centrex + (centrex - (mouseEvent->scenePos()).rx()) ;
		cursor2->OSCdata->Y = centrey + (centrey - (mouseEvent->scenePos()).ry()) ;
		cursor2->OSCdata->packetUpdate = true ;
	}




	}

