#ifndef __DEBUGWINDOWIMPL_H__
#define __DEBUGWINDOWIMPL_H__

#include "debugWindow.h"

class debugWindowImpl : public QDialog, public Ui6::debugWindow
{
	Q_OBJECT
	public:
	debugWindowImpl(QWidget * parent = 0, Qt::WFlags f = 0 );


};

#endif // __DEBUGWINDOWIMPL_H__
