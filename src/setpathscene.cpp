#include "setpathscene.h"
#include "setpathwinodwimpl.h"

SetPathScene::SetPathScene()

{
	
}

void SetPathScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	
	QGraphicsScene::mouseReleaseEvent(mouseEvent);
}

void SetPathScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	
	QPointF point = mouseEvent->scenePos();
	QGraphicsScene::mouseMoveEvent(mouseEvent);
	emit addPoint(point.x(),point.y());
}

void SetPathScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	QGraphicsScene::mouseMoveEvent(mouseEvent);
}

