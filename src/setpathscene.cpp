#include "setpathscene.h"
#include "setpathwinodwimpl.h"

SetPathScene::SetPathScene()

{
	
}

void SetPathScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	
	QGraphicsScene::mouseReleaseEvent(mouseEvent);
	std::cout << "mouseReleaseEvent" << "\n" ;
}

void SetPathScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	
	QPointF point = mouseEvent->scenePos();
	QGraphicsScene::mouseMoveEvent(mouseEvent);
	emit addPoint(point.x(),point.y());
	std::cout << "mousePressEvent" << "\n" ;
}

void SetPathScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	QGraphicsScene::mouseMoveEvent(mouseEvent);
	std::cout << "mouseMoveEvent" << "\n" ;
}

