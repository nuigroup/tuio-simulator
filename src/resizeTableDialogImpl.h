#ifndef __RESIZETABLEDIALOGIMPL_H__
#define __RESIZETABLEDIALOGIMPL_H__
#include "resizeTableDialog.h"
#include "mainwindowimpl.h"

class MainWindowImpl;

class resizeTableDialogImpl : public QDialog, public Ui8::resizeTableDialog
{
	Q_OBJECT
	public:
	resizeTableDialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
	MainWindowImpl *mywin;
	int h;
	int w;
	
	private slots :
	void resizeWidth(int n);
	void resizeHeight(int n);


};
#endif // __RESIZETABLEDIALOGIMPL_H__
