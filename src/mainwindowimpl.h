#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H

#include <QBrush>
#include <QPen>
#include <QMainWindow>
#include <QGraphicsView>
#include <QHBoxLayout>
#include <QFlags>
#include <QGraphicsItem>
#include <QLayout>
#include <QCursor>
#include <QPolygon>
#include "item.h"
#include "ui_mainwindow.h"



class MainWindowImpl : public QMainWindow , public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	
    QGraphicsScene *scene ;

	
private slots:

void showDialog();



};
#endif





