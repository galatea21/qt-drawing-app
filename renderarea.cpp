#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    backgroundColor(0, 0, 255),
    shapeColor(255, 255, 255),
	shape(Astroid) {
}

QSize RenderArea::minimumSizeHint() const {
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const {
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event) {
	Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    switch (this->shape) {
        case Astroid:
			backgroundColor = Qt::red;
            break;
        case Cycloid:
			backgroundColor = Qt::green;
            break;
        case HuygensCycloid:
			backgroundColor = Qt::blue;
            break;
        case HypoCycloid:
			backgroundColor = Qt::yellow;
            break;
        default:
			break;
    }

	painter.setBrush(backgroundColor);
	painter.setPen(shapeColor);

    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}
