#include "dialogimpl.h"
#include "item.h"
#include "mainwindowimpl.h"


DialogImpl::DialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{  
	setupUi(this);
	connect(AddItem,SIGNAL(clicked()),this,SLOT(addNewItem()));
	connect(AddVertex,SIGNAL(clicked()),this,SLOT(addNewVertex()));
	mywin = new MainWindowImpl;
	mywin = win;
	myscene = new QGraphicsScene;
	myscene = win->scene;
	mypolygon = new QPolygon;
	X_Vertex->setMaximum(1000);
	X_Vertex->setMinimum(-1000);
	Y_Vertex->setMaximum(1000);
	Y_Vertex->setMinimum(-1000);
	VertexNumber->setMinimum(0);
	VertexNumber->setMaximum(100);
	VertexNumber->setValue(0);
	
}


void DialogImpl::addNewItem()
{	 
      
	myitem *item;
	item  = new myitem(mypolygon);
	myscene->addItem(item);
    item->animation->setItem(item);
    item->animation->setTimeLine(mywin->timer);
    

	this->close();
	
}

void DialogImpl::addNewVertex()
{	

	mypolygon->putPoints(this->VertexNumber->value(),1,this->X_Vertex->value(),this->Y_Vertex->value());
	this->VertexNumber->setValue((VertexNumber->value()) + 1) ;
	X_Vertex->setValue(0);
	Y_Vertex->setValue(0);

}



