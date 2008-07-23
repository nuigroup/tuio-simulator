#ifndef __CONFIGUREDIALOGIMPL_H__
#define __CONFIGUREDIALOGIMPL_H__

#include "configuredialog.h"
#include "TUIOSender.h"
class TUIOSender;
class MainWindowImpl;


class ConfigureDialogImpl : public QDialog, public Ui5::configureDialog
{
	Q_OBJECT
	public:
	ConfigureDialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
	MainWindowImpl *mywin;
	TUIOSender *newSender;
	
	private slots :
	void newReciever();
	void setReciever();

};


#endif // __CONFIGUREDIALOGIMPL_H__
