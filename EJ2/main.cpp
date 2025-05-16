#include "headers/ShapeProcesator.h"

int main() {
    Point point = Point(1.0f,1.0f);
    auto circle = Circle(1.0f,1.0f,1.0f);
    auto ellipse = Ellipse(1.0f,1.0f,1.0f,2.0f);
    auto rectangle = Rectangle(1.0f,1.0f,1.0f,5.0f);

    std::cout << "Área del punto " << ShapeProcesator::area(point) << std::endl;
    std::cout << "Área del círculo " << ShapeProcesator::area(circle) << std::endl;
    std::cout << "Área de la elipse " << ShapeProcesator::area(ellipse) << std::endl;
    std::cout << "Área del rectángulo " << ShapeProcesator::area(rectangle) << std::endl;
}