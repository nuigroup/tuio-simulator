#ifndef DIALOGIMPL_H
#define DIALOGIMPL_H

#include <QMessageBox>
#include <QPolygon>
#include <QSpinBox>
#include <QGraphicsScene>
#include <QDialog>
#include <QBrush>
#include <QComboBox>
#include <QColor>
#include <QtGui>


#include "ui_additem.h"
#include "mainwindowimpl.h"

class MainWindowImpl;



class DialogImpl : public QDialog, public Ui::Dialog
{
Q_OBJECT
public:
	
	QPolygon *mypolygon ;
	QGraphicsScene *myscene ;
	MainWindowImpl *mywin;
	DialogImpl(MainWindowImpl *win,QWidget * parent = 0, Qt::WFlags f = 0 );
	
private slots:
	void addNewItem();
	void addNewVertex();
};
#endif





