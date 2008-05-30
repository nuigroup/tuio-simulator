#include "mainwindowimpl.h"
#include "item.h"
#include "dialogimpl.h"

QGraphicsScene scene;
MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);
	scene = new QGraphicsScene;
	QPen pen;
	
	

	pen.setBrush(Qt::blue);
	//scene->addRect(5,5,600,400,pen);
    view->setScene(scene);
    view->setRenderHints(QPainter::Antialiasing
                         | QPainter::TextAntialiasing);

	myitem *item;
	item  = new myitem();
	scene->addItem(item);
	item->setFocus();
	
	view->setCursor(Qt::PointingHandCursor);
	connect(addItemButton,SIGNAL(clicked()),this,SLOT(showDialog()));
	
}

void MainWindowImpl::showDialog()
{
	 DialogImpl *dialog = new DialogImpl(this->scene);
	 dialog->show();
	 
}




