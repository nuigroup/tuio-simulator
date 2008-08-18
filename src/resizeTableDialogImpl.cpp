#include "resizeTableDialogImpl.h"

resizeTableDialogImpl::resizeTableDialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	
	{
		setupUi(this);
		mywin = win ;
		h = mywin->table->h ;
		w = mywin->table->w ;
		setAttribute(Qt::WA_DeleteOnClose);
		widthSlider->setTickInterval(180);
		widthSlider->setTracking(false);
		widthSlider->setRange(200,2000);
		widthSlider->setTickPosition(QSlider::TicksBelow);
		heightSlider->setTickInterval(180);
		heightSlider->setTracking(false);
		heightSlider->setRange(200,2000);
		heightSlider->setTickPosition(QSlider::TicksBelow);
		connect(widthSlider,SIGNAL(sliderMoved(int )),this,SLOT(resizeWidth(int)));
		connect(heightSlider,SIGNAL(sliderMoved(int )),this,SLOT(resizeHeight(int)));
		heightSlider->setSliderPosition(mywin->table->h);
		widthSlider->setSliderPosition(mywin->table->w);
		
	}
	
void resizeTableDialogImpl::resizeWidth(int n)
{
	w = n ;
	mywin->table->setRect(5,5,w,h);
	mywin->table->w = n;
}

void resizeTableDialogImpl::resizeHeight(int n)
{
	h = n;
	mywin->table->setRect(5,5,w,h);
	mywin->table->h = n ;
}

