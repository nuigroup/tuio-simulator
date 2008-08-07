#include "addellipsedialogimpl.h"

AddEllipseDialogImpl::AddEllipseDialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	{
		setupUi(this);
		setAttribute(Qt::WA_DeleteOnClose);
		//mywin = new MainWindowImpl;
		mywin = win;
		//myscene = new QGraphicsScene;
		myscene = win->scene;
		connect(addEllipseButton,SIGNAL(clicked()),this,SLOT(addEllipse()));
		connect(addFiducialButton,SIGNAL(clicked()),this,SLOT(addFiducial()));
		Ellipse_x->setMaximum(1000);
		Ellipse_x->setMinimum(-1000);
		Ellipse_y->setMaximum(1000);
		Ellipse_y->setMinimum(-1000);
		Ellipse_width->setMaximum(900);
		Ellipse_width->setMinimum(1);
		Ellipse_height->setMaximum(900);
		Ellipse_height->setMinimum(1);
		fiducialBox->setMinimum(0);
		fiducialBox->setMaximum(999);
		
		
		QStringList colorNames = QColor::colorNames();
    	foreach (QString name, colorNames)
    	fillColourComboBox->addItem(name, QColor(name));
    
    	fillColourComboBox->setCurrentIndex(
    	fillColourComboBox->findText("limegreen"));
    	local_ellipse = new SceneEllipse();
    	local_ellipse->fiducial.replace(0,2);
		
	}
	
void AddEllipseDialogImpl::addEllipse()
{

	local_ellipse->setRect(Ellipse_width->value()/-2,Ellipse_height->value()/-2,Ellipse_width->value(),Ellipse_height->value());
	myscene->addItem(local_ellipse);
	local_ellipse->moveBy(Ellipse_x->value()+(Ellipse_width->value()/2),Ellipse_y->value()+(Ellipse_height->value()/2));
    local_ellipse->animation->setItem(local_ellipse);
    local_ellipse->animation->setTimeLine(mywin->timer);
    local_ellipse->w = Ellipse_width->value();
    local_ellipse->h = Ellipse_height->value();
    
    mywin->tangibleId++ ;
    local_ellipse->OSCdata->ID = mywin->tangibleId ;
    local_ellipse->OSCdata->tagID = mywin->tangibleId ;

    
    
    QBrush *local_brush = new QBrush;
    local_ellipse->colour = qvariant_cast<QColor>(fillColourComboBox->itemData(fillColourComboBox->currentIndex()));    
    local_brush->setColor(local_ellipse->colour);
    local_brush->setStyle(Qt::Dense1Pattern);
    local_ellipse->setBrush(*local_brush);
    
    this->close();
}

void AddEllipseDialogImpl::addFiducial()
{
	local_ellipse->fiducial.replace(0,fiducialBox->value());
	
}



