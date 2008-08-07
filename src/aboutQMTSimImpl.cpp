#include "aboutQMTSimImpl.h"

AboutQMTSimImpl::AboutQMTSimImpl(QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	{
		setupUi(this);
		setAttribute(Qt::WA_DeleteOnClose);
	}
