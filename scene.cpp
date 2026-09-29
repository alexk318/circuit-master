#include "scene.h"
#include "electroniccomponent.h"

#include <QGraphicsSceneMouseEvent>

Scene::Scene() {

}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event) {

    QGraphicsScene::mousePressEvent(event);

    QPointF pos = event->scenePos();
    QGraphicsItem *m_newItem = new ElectronicComponent();

    addItem(m_newItem);
    m_newItem->setPos(pos);
}
