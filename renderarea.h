#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget {
    Q_OBJECT

    public:
        enum ShapeType {Astroid, Cycloid, HuygensCycloid, HypoCycloid};

        explicit RenderArea(QWidget *parent = nullptr);

        QSize minimumSizeHint() const Q_DECL_OVERRIDE;
        QSize sizeHint() const Q_DECL_OVERRIDE;

        QColor getBackgroundColor() const { return backgroundColor; }
        void setBackgroundColor(QColor color) { backgroundColor = color; }

        ShapeType getShape() const { return shape; }
        void setShape(const ShapeType &shape) { this->shape = shape; }

    protected:
        void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    private:
        QColor backgroundColor;
        QColor shapeColor;
        ShapeType shape;

    signals:

};

#endif // RENDERAREA_H
