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
		SceneEllipse *local_ellipse;
		AddEllipseDialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
		QGraphicsScene *myscene ;
		MainWindowImpl *mywin;
			
	private slots:
		void addEllipse();
		void addFiducial();
			
	
};

#endif // __ADDELLIPSEDIALOGIMPL_H__
