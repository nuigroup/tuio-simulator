#include "mainwindowimpl.h"
#include "item.h"
#include "dialogimpl.h"
//#include <iostream>
#include "setpathwinodwimpl.h"
#include "tangible_type.h"



MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
	
{	
	framerange = 500;
	setupUi(this);
	animationSlider->setTickInterval(framerange/10);
	animationSlider->setTracking(false);
	animationSlider->setRange(0,framerange);
	animationSlider->setTickPosition(QSlider::TicksBelow);
	scene = new QGraphicsScene;
	animationStarted = false;
	QPen pen;
	pen.setBrush(Qt::blue);
	QGraphicsRectItem *rect =  scene->addRect(5,5,600,400,pen);
	rect->setFlag(QGraphicsItem::ItemIsSelectable,false);
    view->setScene(scene);
    view->setRenderHints(QPainter::Antialiasing
                         | QPainter::TextAntialiasing);

	myitem *item;
	item  = new myitem();
	//scene->addItem(item);
	
	timer = new QTimeLine(10000);
	timer->setFrameRange(0, framerange);
	timer->setCurveShape(QTimeLine::LinearCurve);
	
	animationProgressBar->setMaximum(framerange);
	animationProgressBar->setMinimum(0);
	animationProgressBar->setValue(0);
	animationtime->setMinimum(1);
	animationtime->setMaximum(100000);
	animationtime->setValue(10000);
	
	view->setCursor(Qt::PointingHandCursor);
	connect(addItemButton,SIGNAL(clicked()),this,SLOT(showDialog()));
	connect(setPathButton,SIGNAL(clicked()),this,SLOT(setPathDialog()));
	connect(startAnimationButton,SIGNAL(clicked()),this,SLOT(startAnimation()));
	connect(timer,SIGNAL(frameChanged(int)),animationProgressBar,SLOT(setValue(int )));
	connect(setAnimationTimeButton,SIGNAL(clicked()),this,SLOT(setanimationtime()));
	connect(animationSlider,SIGNAL(sliderMoved(int )),this,SLOT(animationslidertime(int)));	
	connect(timer,SIGNAL(frameChanged(int)),animationSlider,SLOT(setValue(int)));
	connect(timer,SIGNAL(finished()),this,SLOT(animationFinished()));
	connect(addEllipseButton,SIGNAL(clicked()),this,SLOT(showAddEllipseDialog()));
	connect(addCursorButton,SIGNAL(clicked()),this,SLOT(showAddCursorDialog()));
	connect(deleteItemButton,SIGNAL(clicked()),this,SLOT(deleteItem()));
	connect(saveProfileButton,SIGNAL(clicked()),this,SLOT(saveProfile()));

    item->animation->setItem(item);
    item->animation->setTimeLine(timer);


	
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
             delete list.takeFirst();
	
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
	this->timer->start();
	
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

void MainWindowImpl::saveProfile()
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
		
		
	QGraphicsItem *localitem = list.at(0);
	Tangible_Type *myTangible = dynamic_cast<Tangible_Type*>(localitem);
	if (myTangible == NULL )
	{
   		QMessageBox::warning(this, tr("QMTSim"),
	   tr("Pointer Casting Error.\n"
	   "Null pointer recieved"));
	   return;
   	
  	}
  	
   QString getType = (myTangible->tangible_geom) ;
   QMessageBox::information(this, tr("QMTSim"),getType);
  	
  	
	 QString fileName =
            QFileDialog::getSaveFileName(this, tr("Save Profile"),
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
	xmlWriter.writeStartElement("TableItem");
	xmlWriter.writeAttribute("Type",getType);
	xmlWriter.writeEndElement();
	xmlWriter.writeStartElement("Position");
	QString str_x,str_y;
	double real_x = (localitem->scenePos()).x();
	str_y.setNum((localitem->scenePos()).y());
	str_x.setNum(real_x);
	xmlWriter.writeAttribute("x",str_x);
	xmlWriter.writeAttribute("y",str_y);
	xmlWriter.writeEndElement();
	xmlWriter.writeEndDocument();
	file.close();
	return;     

   
   

		


	 }


}
