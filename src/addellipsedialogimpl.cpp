#include "addellipsedialogimpl.h"

AddEllipseDialogImpl::AddEllipseDialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	{
		setupUi(this);
		mywin = new MainWindowImpl;
		mywin = win;
		myscene = new QGraphicsScene;
		myscene = win->scene;
		connect(addEllipseButton,SIGNAL(clicked()),this,SLOT(addEllipse()));
		Ellipse_x->setMaximum(1000);
		Ellipse_x->setMinimum(-1000);
		Ellipse_y->setMaximum(1000);
		Ellipse_y->setMinimum(-1000);
		Ellipse_width->setMaximum(900);
		Ellipse_width->setMinimum(1);
		Ellipse_height->setMaximum(900);
		Ellipse_height->setMinimum(1);
		
	}
	
void AddEllipseDialogImpl::addEllipse()
{
	SceneEllipse *local_ellipse = new SceneEllipse(Ellipse_width->value()/-2,Ellipse_height->value()/-2,Ellipse_width->value(),Ellipse_height->value());
	myscene->addItem(local_ellipse);
	local_ellipse->moveBy(Ellipse_x->value()+(Ellipse_width->value()/2),Ellipse_y->value()+(Ellipse_height->value()/2));
    local_ellipse->animation->setItem(local_ellipse);
    local_ellipse->animation->setTimeLine(mywin->timer);
    this->close();
}

