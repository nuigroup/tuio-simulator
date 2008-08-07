#include "dialogimpl.h"
#include "mainwindowimpl.h"


class QComboBox ;

DialogImpl::DialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{  	
	setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose);


	
	connect(AddItem,SIGNAL(clicked()),this,SLOT(addNewItem()));
	connect(AddVertex,SIGNAL(clicked()),this,SLOT(addNewVertex()));
	connect(addFiducialButton,SIGNAL(clicked()),this,SLOT(addFiducial()));
	//mywin = new MainWindowImpl;
	mywin = win;
	//myscene = new QGraphicsScene;
	myscene = win->scene;
	mypolygon = new QPolygon;
	X_Vertex->setMaximum(1000);
	X_Vertex->setMinimum(-1000);
	Y_Vertex->setMaximum(1000);
	Y_Vertex->setMinimum(-1000);
	VertexNumber->setMinimum(0);
	VertexNumber->setMaximum(100);
	fiducialBox->setMinimum(0);
	fiducialBox->setMaximum(999);
	VertexNumber->setValue(0);
	
	
	QStringList colorNames = QColor::colorNames();
    foreach (QString name, colorNames)
    fillColourComboBox->addItem(name, QColor(name));
    
    fillColourComboBox->setCurrentIndex(
      fillColourComboBox->findText("blue"));
      item  = new myitem();
      item->fiducial.replace(0,1);
	
}


void DialogImpl::addNewItem()
{	 
    if (!mypolygon->size())
    {
    	QMessageBox::warning(this, tr("QMTSim"),
                      tr("No polygon secified.\n"
                        "Please Select some points."));
          return;
   	}
	item->setPolygon(*mypolygon);
	myscene->addItem(item);
    item->animation->setItem(item);
    //item->animation->setScene(myscene);
    item->animation->setTimeLine(mywin->timer);
    
    mywin->tangibleId++ ;
    item->OSCdata->ID = mywin->tangibleId ;
    item->OSCdata->tagID = mywin->tangibleId ;
    
    QBrush *local_brush = new QBrush;
    item->colour = qvariant_cast<QColor>(fillColourComboBox->itemData(fillColourComboBox->currentIndex()));    
    local_brush->setColor(item->colour);
    local_brush->setStyle(Qt::Dense2Pattern);
    item->setBrush(*local_brush);
    
    
    
	
	this->close();
	
}

void DialogImpl::addNewVertex()
{	

	mypolygon->putPoints(this->VertexNumber->value(),1,this->X_Vertex->value(),this->Y_Vertex->value());
	item->vertex_x.insert(VertexNumber->value(),X_Vertex->value());
	item->vertex_y.insert(VertexNumber->value(),Y_Vertex->value());
	
	this->VertexNumber->setValue((VertexNumber->value()) + 1) ;
	
	
	X_Vertex->setValue(0);
	Y_Vertex->setValue(0);

}

void DialogImpl::addFiducial()
{
	item->fiducial.replace(0,fiducialBox->value());
	
}


