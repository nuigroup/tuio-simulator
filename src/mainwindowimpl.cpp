#include "mainwindowimpl.h"
#include "item.h"
#include "dialogimpl.h"
//#include <iostream>
#include "setpathwinodwimpl.h"



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
	scene->addItem(item);
	
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

    item->animation->setItem(item);
    item->animation->setTimeLine(timer);


	
}

void MainWindowImpl::showDialog()
{
	 DialogImpl *dialog = new DialogImpl(this);
	 dialog->show();
	 
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
{	this->timer->stop();
	timer->setCurrentTime((animationtime->value()*n)/framerange);
	this->timer->start();
	
}

void MainWindowImpl::animationFinished()
{
		this->animationStarted = false ;
		startAnimationButton->setText("Start Animation");
		animationProgressBar->setValue(0);
		animationSlider->setValue(0);
		startAnimation_Radio->toggle();
}

