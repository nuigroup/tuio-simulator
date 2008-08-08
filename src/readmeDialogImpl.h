#ifndef __READMEDIALOGIMPL_H__
#define __READMEDIALOGIMPL_H__

#include "readmeDialog.h"

class readmeDialogImpl : public QDialog, public Ui7::readmeDialog
{
	Q_OBJECT
	public:
	readmeDialogImpl(QWidget * parent = 0, Qt::WFlags f = 0 );


};

#endif // __READMEDIALOGIMPL_H__
