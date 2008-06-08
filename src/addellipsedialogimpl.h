#ifndef __ADDELLIPSEDIALOGIMPL_H__
#define __ADDELLIPSEDIALOGIMPL_H__


#include <QMessageBox>
#include <QGraphicsScene>

#include "sceneellipse.h"
#include "addellipsedialog.h"
#include "mainwindowimpl.h"

class MainWindowImpl;

class AddEllipseDialogImpl : public QDialog, public Ui3::addEllipseDialog
{
Q_OBJECT
public:
		AddEllipseDialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
		QGraphicsScene *myscene ;
		MainWindowImpl *mywin;
			
	private slots:
		void addEllipse();
			
	
};

#endif // __ADDELLIPSEDIALOGIMPL_H__
