#ifndef __ADDCUSORDIALOGIMPL_H__
#define __ADDCUSORDIALOGIMPL_H__


#include "addcursordialog.h"
#include "mainwindowimpl.h"
#include "scenecursor.h"

class MainWindowImpl;

class AddCursorDialogImpl : public QDialog, public Ui4::addCursorDialog
{
Q_OBJECT
public:
		AddCursorDialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
		QGraphicsScene *myscene ;
		MainWindowImpl *mywin;
			
	private slots:
		void addCursor();
			
	
};


#endif // __ADDCUSORDIALOGIMPL_H__
