#include <QGraphicsScene>

#ifndef SCENE_H
#define SCENE_H

class Scene : public QGraphicsScene {
    Q_OBJECT

public:
    Scene();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

};

#endif // SCENE_H
