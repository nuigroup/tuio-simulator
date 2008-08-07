#include "configuredialogimpl.h"
#include "TUIOSender.h"

ConfigureDialogImpl::ConfigureDialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	
	{
		setupUi(this);
		mywin = win ;
		setAttribute(Qt::WA_DeleteOnClose);
		connect(newRecieverButton,SIGNAL(clicked()),this,SLOT(newReciever()));
		connect(applyButton,SIGNAL(clicked()),this,SLOT(setReciever()));
		indexBox->setValue(0);
		indexBox->setMaximum(100);
		indexBox->setMinimum(0);
		portNumberBox->setMaximum(99999);
	}
	
void ConfigureDialogImpl::newReciever()
{
	
	indexBox->setValue(indexBox->value() + 1 );
}

void ConfigureDialogImpl::setReciever()
{
	newSender = new TUIOSender(mywin);
	newSender->connectSocket((ipAddress->text()).toStdString(),portNumberBox->value());
	close();

}

