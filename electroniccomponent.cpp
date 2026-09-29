#include "electroniccomponent.h"
#include <QPainter>

ElectronicComponent::ElectronicComponent() {

}

void ElectronicComponent::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    painter->setPen(Qt::black);
    painter->drawRect(0, 0, 10, 10);


}

QRectF ElectronicComponent::boundingRect() const {

    return QRectF(0, 0, 10, 10);

}
