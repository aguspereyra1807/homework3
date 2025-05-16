#include "../headers/ShapeProcesator.h"

template <isPoint T>
float ShapeProcesator::area(const T& x) {
    return 0.0;
};

template <isCircle T>
float ShapeProcesator::area(const T& x) {
    return M_PI * pow(x.getRadius(), 2);
};

template <isEllipse T>
float ShapeProcesator::area(const T& x) {
    return M_PI * x.getA() * x.getB();
};

template <isRectangle T>
float ShapeProcesator::area(const T& x) {
    return x.getBase() * x.getHeight();
};

template float ShapeProcesator::area<Point>(const Point&);
template float ShapeProcesator::area<Circle>(const Circle&);
template float ShapeProcesator::area<Ellipse>(const Ellipse&);
template float ShapeProcesator::area<Rectangle>(const Rectangle&);