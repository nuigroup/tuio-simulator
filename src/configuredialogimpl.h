#ifndef __CONFIGUREDIALOGIMPL_H__
#define __CONFIGUREDIALOGIMPL_H__

#include "configuredialog.h"


class ConfigureDialogImpl : public QDialog, public Ui5::configureDialog
{
	public:
	ConfigureDialogImpl(QWidget * parent = 0, Qt::WFlags f = 0 );

};


#endif // __CONFIGUREDIALOGIMPL_H__
