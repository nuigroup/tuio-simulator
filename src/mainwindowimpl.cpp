#include "mainwindowimpl.h"
#include "item.h"
#include "sceneellipse.h"
#include "scenecursor.h"
#include "dialogimpl.h"

#include "setpathwinodwimpl.h"
#include "tangible_type.h"


static bool Verbose = false ;

#define ADDRESS "127.0.0.1"
#define PORT 3333




MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
	
{	
	

	
	
	framerange = 500;
	setupUi(this);
	//layout()->setSizeConstraint(QLayout::SetNoConstraint);
	//groupBox->hide();
	animationSlider->setTickInterval(framerange/10);
	animationSlider->setTracking(false);
	animationSlider->setRange(0,framerange);
	animationSlider->setTickPosition(QSlider::TicksBelow);
	opacitySlider->setTickInterval(5);
	opacitySlider->setTracking(false);
	opacitySlider->setRange(20,100);
	opacitySlider->setTickPosition(QSlider::TicksBelow);
	scene = new QGraphicsScene;
	scene->setBackgroundBrush(Qt::transparent);
	animationStarted = false;
	txStarted = false ;
	QPen pen;
	pen.setBrush(Qt::blue);
	table = new Table(this) ;
	table->setRect(5,5,600,400);
	//table->setPen(pen);
	scene->addItem(table);
	//QGraphicsRectItem *rect =  scene->addRect(5,5,600,400,pen);
	//rect->setFlag(QGraphicsItem::ItemIsSelectable,false);
    view->setScene(scene);
    view->setRenderHints(QPainter::Antialiasing
                         | QPainter::TextAntialiasing);

	//myitem *item;
	//item  = new myitem();
	//scene->addItem(item);
	//view->setWindowOpacity(0);
	setWindowOpacity(0.5);
	//view->setStyleSheet("background: rgba(255, 255, 255, 30%);");
	
	timer = new QTimeLine(10000);
	timer->setFrameRange(0, framerange);
	timer->setCurveShape(QTimeLine::LinearCurve);
	
	animationProgressBar->setMaximum(framerange);
	animationProgressBar->setMinimum(0);
	animationProgressBar->setValue(0);
	animationtime->setMinimum(1);
	animationtime->setMaximum(100000);
	animationtime->setValue(10000);
	
	cursorId   = 0;
	tangibleId = 0 ;
	packetTimer = new QTimer ;
	mainSender = new TUIOSender(this);
	
	std::string ip_address = ADDRESS;
	int port = PORT;
	mainSender->connectSocket(ip_address,port);
	
	packetTimer->setInterval(100);
	count = 0 ;
	
	myDebug = new debugWindowImpl;
	myReadme = new readmeDialogImpl;
	

	
	view->setCursor(Qt::PointingHandCursor);
	connect(addItemButton,SIGNAL(clicked()),this,SLOT(showDialog()));
	connect(setPathButton,SIGNAL(clicked()),this,SLOT(setPathDialog()));
	connect(startAnimationButton,SIGNAL(clicked()),this,SLOT(startAnimation()));
	connect(timer,SIGNAL(frameChanged(int)),animationProgressBar,SLOT(setValue(int )));
	connect(setAnimationTimeButton,SIGNAL(clicked()),this,SLOT(setanimationtime()));
	connect(animationSlider,SIGNAL(sliderMoved(int )),this,SLOT(animationslidertime(int)));	
	connect(opacitySlider,SIGNAL(sliderMoved(int )),this,SLOT(opacitySliderImpl(int)));	
	connect(timer,SIGNAL(frameChanged(int)),animationSlider,SLOT(setValue(int)));
	connect(timer,SIGNAL(finished()),this,SLOT(animationFinished()));
	connect(addEllipseButton,SIGNAL(clicked()),this,SLOT(showAddEllipseDialog()));
	connect(addCursorButton,SIGNAL(clicked()),this,SLOT(showAddCursorDialog()));
	connect(deleteItemButton,SIGNAL(clicked()),this,SLOT(deleteItem()));
	connect(saveItemButton,SIGNAL(clicked()),this,SLOT(saveItem()));
	connect(uploadItemButton,SIGNAL(clicked()),this,SLOT(uploadItem()));
	connect(configureButton,SIGNAL(clicked()),this,SLOT(showConfigureDialog()));
	connect(startTxButton,SIGNAL(clicked()),this,SLOT(startTx()));
	connect(packetTimer,SIGNAL(timeout()),this,SLOT(restartPacketTimer()));
	connect(resetButton,SIGNAL(clicked()),this,SLOT(resetTx()));
	connect(actionSave, SIGNAL(triggered()), this, SLOT(saveItem()));
	connect(actionUpload, SIGNAL(triggered()), this, SLOT(uploadItem()));
	connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
	connect(actionDebug, SIGNAL(triggered()), this, SLOT(showDebugWindow()));
	connect(actionPolygon, SIGNAL(triggered()), this, SLOT(showDialog()));
	connect(actionEllipse, SIGNAL(triggered()), this, SLOT(showAddEllipseDialog()));
	connect(actionCursor, SIGNAL(triggered()), this, SLOT(showAddCursorDialog()));
	connect(actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
	connect(actionAbout_QMTSim, SIGNAL(triggered()),this, SLOT(showAboutQMTSim()));
	connect(actionReadme, SIGNAL(triggered()),this, SLOT(showReadme()));


	
	
	t.start();

    //item->animation->setItem(item);
    //item->animation->setTimeLine(timer);
    


	
}

void MainWindowImpl::resetTx()
{
	this->timer->stop();
	timer->setCurrentTime(0);
	this->timer->stop();
	startAnimation_Radio->setChecked(false);
	startAnimationButton->setText("Start Animation");
	this->animationStarted = false ;
	//mainSender->resetTx();
	emit resetTxSignal();
}

void MainWindowImpl::showAboutQMTSim()
{
	AboutQMTSimImpl *aboutSim  = new AboutQMTSimImpl();
	aboutSim->show();
}

void MainWindowImpl::showReadme()
{
	myReadme->show();
}

void MainWindowImpl::showDialog()
{
	 DialogImpl *dialog = new DialogImpl(this);
	 dialog->show();
	 
}

void MainWindowImpl::showAddEllipseDialog()
{
	AddEllipseDialogImpl *addEllipse = new AddEllipseDialogImpl(this);
	addEllipse->show();
}

void MainWindowImpl::showAddCursorDialog()
{
	AddCursorDialogImpl *addCursor  = new AddCursorDialogImpl(this);
	addCursor->show();
}

void MainWindowImpl::setPathDialog()
{
	QList<QGraphicsItem*> list = this->scene->selectedItems();
	if (list.isEmpty()) 
        QMessageBox::warning(this, tr("QMTSim"),
                           tr("There is no selected item.\n"
                               "Please Select an item and then try again.")); 
	else
	
	{
		SetPathWindowImpl *setpathwindow = new SetPathWindowImpl(list.at(0));
		setpathwindow->show();
	}
}

void MainWindowImpl::deleteItem()
{
	QList<QGraphicsItem*> list = this->scene->selectedItems();
		if (list.isEmpty()) 
        QMessageBox::warning(this, tr("QMTSim"),
                           tr("There is no selected item.\n"
                               "Please Select an item and then try again."));
     
              while (!list.isEmpty())
         {		
         	QGraphicsItem *localitem = list.takeFirst();
         	Tangible_Type *myTangible = dynamic_cast<Tangible_Type*>(localitem);
         	if (myTangible)
         	{
         	//std::cout << "Deleting animation" << "\n" ;
         	delete myTangible->animation;
         	//std::cout << "Deleting OSCData" << "\n" ;
         	delete myTangible->OSCdata ;
         	//std::cout << "Deleting Item" << "\n" ;
            delete localitem;
        	}

             
         }
}

void MainWindowImpl::startAnimation()
{
	if (this->animationStarted)

	{
		
		this->timer->stop();
		this->animationStarted = false ;
		startAnimationButton->setText("Start Animation");
		
	}
	else

	{

			startAnimationButton->setText("Stop Animation");
			this->animationStarted = true ;
			this->timer->start();
	}

}

void MainWindowImpl::setanimationtime()
{
	timer->setDuration(animationtime->value());
}

void MainWindowImpl::animationslidertime(int n)
{
	this->timer->stop();
	timer->setCurrentTime((animationtime->value()*n)/framerange);
	this->timer->stop();
	startAnimation_Radio->setChecked(true);
	startAnimationButton->setText("Stop Animation");
	this->animationStarted = true ;
	this->timer->start();
	
}


void MainWindowImpl::opacitySliderImpl(int n)
{
	double d;
	d = n/100.00;
	this->setWindowOpacity(d);
	//update();
	//std::cout<<d<<"\n";
	
}

void MainWindowImpl::animationFinished()
{
		this->animationStarted = false ;
		startAnimationButton->setText("Start Animation");
		animationProgressBar->setValue(0);
		animationSlider->setValue(0);
		startAnimation_Radio->setChecked(false);
		this->timer->stop();
}

void MainWindowImpl::startTx()
{
	
	if (this->txStarted)

	{
		
		packetTimer->stop();
		mainSender->lastTime = t.elapsed();
		this->txStarted = false ;
		startTxButton->setText("Start Transmission");
		
	}
	else

	{
			packetTimer->start();
			startTxButton->setText("Stop  Transmission");
			this->txStarted = true ;
			
	}
	
}

void MainWindowImpl::restartPacketTimer()
{
	if (Verbose) std::cout << "Send Packet	" << count << "\n" ;
	//mainSender->frame();
	emit frameSignal();
	packetTimer->start();
	count++ ;
}


void MainWindowImpl::showConfigureDialog()
{

	ConfigureDialogImpl *configure_Dialog = new ConfigureDialogImpl(this);
	configure_Dialog->show();
	
}

void MainWindowImpl::saveItem()
{
	QList<QGraphicsItem*> list = this->scene->selectedItems();
	if (list.isEmpty()) 
	{
		
	QMessageBox::warning(this, tr("QMTSim"),
	tr("There is no selected item.\n"
	   "Please Select an item and then try again."));	
	return;
	}
	   
	else
	{
		
		QString fileName =
		QFileDialog::getSaveFileName(this, tr("QMTSim : Save Item"),
                                         QDir::currentPath(),
                                         tr("XML Files ( *.xml)"));
		if (fileName.isEmpty())
		return;



		QFile file(fileName);
		if (!file.open(QFile::WriteOnly | QFile::Text)) 
		{
			QMessageBox::warning(this, tr("QMTSim \n Save Profile \n"),
								tr("Cannot write file %1:\n%2.")
								.arg(fileName)
								.arg(file.errorString()));
			return;
		}
		
		
		
		
		
	QXmlStreamWriter xmlWriter(&file);
	xmlWriter.setAutoFormatting(true);
	xmlWriter.writeStartDocument();
	xmlWriter.writeStartElement("QMTSim");
	while(!list.isEmpty())
	{
		
	
	QGraphicsItem *localitem = list.takeFirst();
	Tangible_Type *myTangible = dynamic_cast<Tangible_Type*>(localitem);
	if (myTangible == NULL )
	{
   		QMessageBox::warning(this, tr("QMTSim"),
	   tr("Pointer Casting Error.\n"
	   "Null pointer recieved"));
	   return;
  	}
  	
   QString getType = (myTangible->tangible_geom) ;
   //QMessageBox::information(this, tr("QMTSim"),getType);
  	
  	

	
	QString str_x,str_y;
	
	
	

	xmlWriter.writeStartElement("TableItem");
	xmlWriter.writeAttribute("Type",getType);
	str_x.setNum(myTangible->tangible_type);
	xmlWriter.writeAttribute("TypeNo",str_x);
	xmlWriter.writeEndElement();
	xmlWriter.writeStartElement("Position");

	double real_x = (localitem->scenePos()).x();
	str_y.setNum((localitem->scenePos()).y());
	str_x.setNum(real_x);
	xmlWriter.writeAttribute("Position_x",str_x);
	xmlWriter.writeAttribute("Position_y",str_y);
	xmlWriter.writeEndElement();
	
	xmlWriter.writeStartElement("Geometry");
	switch(myTangible->tangible_type)
	{
		case 1:
		{	
			this->statusbar->showMessage("Polygon Item is being Saved",1500);
			for(int j = 0 ; j < (myTangible->vertex_x).size() ; j++ )
			{	
				xmlWriter.writeStartElement("Vertex");
				str_x.setNum(myTangible->vertex_x.at(j));
				str_y.setNum(myTangible->vertex_y.at(j));
				xmlWriter.writeAttribute("Vertex_x",str_x);
				xmlWriter.writeAttribute("Vertex_y",str_y);
				xmlWriter.writeEndElement();	
			}
			xmlWriter.writeStartElement("EndVertex");
			xmlWriter.writeEndElement();
			
			break;
		}
			
		case 2:
		{
			this->statusbar->showMessage("Ellipse Item is being Saved",1500);
			str_x.setNum(myTangible->w);
			str_y.setNum(myTangible->h);
			xmlWriter.writeAttribute("Width",str_x);
			xmlWriter.writeAttribute("Height",str_y);
			break;
		}
		case 3:
		{
			this->statusbar->showMessage("Cursor Item is being Saved",1500);
			str_x.setNum(myTangible->r);
			xmlWriter.writeAttribute("Radius",str_x);
			break;
		}
			
		default:
			break;
		
	}
	
	xmlWriter.writeEndElement();
	
	xmlWriter.writeStartElement("Colour");
	int r,g,b,a;
	myTangible->colour.getRgb(&r,&g,&b,&a);
	str_x.setNum(r);
	xmlWriter.writeAttribute("R",str_x);
	str_x.setNum(g);
	xmlWriter.writeAttribute("G",str_x);
	str_x.setNum(b);
	xmlWriter.writeAttribute("B",str_x);
	str_x.setNum(a);
	xmlWriter.writeAttribute("A",str_x);
	xmlWriter.writeEndElement();
	
	
	//for(int j = 0 ; j < (myTangible->fiducial).size() ; j++ )
	if ((myTangible->fiducial).size())
	{	xmlWriter.writeStartElement("Fiducial");
		str_x.setNum((myTangible->fiducial).at(0));
		xmlWriter.writeAttribute("Value",str_x);
		xmlWriter.writeEndElement();
	}
	

	if(myTangible->path_x.size())
  {
		
	
	xmlWriter.writeStartElement("Path");
	std::cout << "path_size  " << myTangible->path_x.size() << "\n"  ;
	
	for (int j = 0 ; j < myTangible->path_x.size() ; j++ )
	{
		xmlWriter.writeStartElement("Path_x");
		str_x.setNum((myTangible->path_x).at(j));
		xmlWriter.writeAttribute("X",str_x);
		xmlWriter.writeEndElement();
		
		xmlWriter.writeStartElement("Path_y");
		str_x.setNum((myTangible->path_y).at(j));
		xmlWriter.writeAttribute("Y",str_x);
		xmlWriter.writeEndElement();
		
		
	}
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("EndPath");
	xmlWriter.writeEndElement();
	
	
  }
	
	xmlWriter.writeStartElement("EndItem");
	xmlWriter.writeEndElement();
	
	
	
	
}
	xmlWriter.writeEndElement();
	xmlWriter.writeEndDocument();
	file.close();
	return;     



	 }


}

void MainWindowImpl::uploadItem()
{
	   //QMessageBox::information(this, tr("QMTSim"),"Upload Item");

	
	QString fileName =QFileDialog::getOpenFileName(this, tr("QMTSim : Open Item XML file"),
                                         QDir::currentPath(),
                                         tr("XML Files ( *.xml)"));
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("QXmlStream Bookmarks"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }
    
    QString str_x;
    QString str_y;

    int typeno;
    
     QXmlStreamReader xmlReader;
     
     xmlReader.setDevice(&file);
     
	 while (!xmlReader.atEnd()) 
{
     xmlReader.readNext();

        if (xmlReader.isStartElement()) 
       {
            if ((xmlReader.name()).toString() == "QMTSim" )
            {	
            	
            	
            	//QMessageBox::information(this, tr("QMTSim"),"Upload Item");
            	
            	while (!xmlReader.atEnd())
            {
            	
            	xmlReader.readNext();
            	
            	//if (xmlReader.isEndElement()) break;
            	if (xmlReader.isStartElement())  
            	{
            		
           		
            		if (xmlReader.name() == "TableItem" )
            		{
            		str_x = (xmlReader.attributes().value("Type")).toString();
            		str_y = (xmlReader.attributes().value("TypeNo")).toString();
            		typeno = str_y.toInt();
            		//QMessageBox::information(this, tr("QMTSim"),str_x);
            		
            		switch(typeno)
            		{
            			case 1 : {
            						this->statusbar->showMessage("Polygon Item is being Uploaded",1500);
            						readPolygon(&xmlReader);
            						break ;
           						 }
            			
            					
            					
            			case 2 :
            					{
            						this->statusbar->showMessage("Ellipse Item is being Uploaded",1500);
            						readEllipse(&xmlReader);
            						break ;
           						}
           						
            			case 3 :
            					{
            						this->statusbar->showMessage("Cursor Item is being Uploaded",1500);
            						readCursor(&xmlReader);
            						break;
           						}
            			default :
            					QMessageBox::warning(this,"QMTSim","Item not supported");
     							break;
            			
            					
            				
           			}
           			

           			}
           			else	QMessageBox::warning(this, tr("QMTSim"),xmlReader.name().toString()); 
               		
              	
             	}
            	
           	}
                return;
            }
            else
            {
                xmlReader.raiseError(QObject::tr("The file is not an QMTSim Item file."));
                QMessageBox::warning(this, tr("QMTSim"),"The file is not an QMTSim Item file");
                return;
             }
        }
}
    
    return;
}

void MainWindowImpl::showDebugWindow()
{

	myDebug->show();

}


