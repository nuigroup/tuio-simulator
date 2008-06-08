#include "addcusordialogimpl.h"


AddCursorDialogImpl::AddCursorDialogImpl(MainWindowImpl *win,QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
	{
		setupUi(this);
		mywin = new MainWindowImpl;
		mywin = win;
		myscene = new QGraphicsScene;
		myscene = win->scene;
		connect(addCursorButton,SIGNAL(clicked()),this,SLOT(addCursor()));
		cursor_x->setMaximum(1000);
		cursor_x->setMinimum(-1000);
		cursor_y->setMaximum(1000);
		cursor_y->setMinimum(-1000);
		cursor_radius->setMaximum(900);
		cursor_radius->setMinimum(1);
		
		QStringList colorNames = QColor::colorNames();
    	foreach (QString name, colorNames)
    	fillColourComboBox->addItem(name, QColor(name));
    
    	fillColourComboBox->setCurrentIndex(
    	fillColourComboBox->findText("red"));

		
	}

void AddCursorDialogImpl::addCursor()
{
	SceneCursor *local_cursor = new SceneCursor(-(cursor_radius->value()),-(cursor_radius->value()),cursor_radius->value() * 2,cursor_radius->value() * 2);
	myscene->addItem(local_cursor);
	local_cursor->moveBy(cursor_x->value()+cursor_radius->value(),cursor_y->value()+cursor_radius->value());
    local_cursor->animation->setItem(local_cursor);
    local_cursor->animation->setTimeLine(mywin->timer);
    
    QBrush *local_brush = new QBrush;
    QColor colour = qvariant_cast<QColor>(fillColourComboBox->itemData(fillColourComboBox->currentIndex()));    
    local_brush->setColor(colour);
    local_brush->setStyle(Qt::SolidPattern);
    local_cursor->setBrush(*local_brush);
    
    
    this->close();
}
