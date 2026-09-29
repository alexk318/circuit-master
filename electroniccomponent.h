#ifndef ELECTRONICCOMPONENT_H
#define ELECTRONICCOMPONENT_H

#include <QGraphicsObject>
#include <QObject>

class ElectronicComponent : public QGraphicsObject {
    Q_OBJECT

public:
    ElectronicComponent();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    QRectF boundingRect() const override;

};

#endif // ELECTRONICCOMPONENT_H
