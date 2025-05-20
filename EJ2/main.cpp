#include "headers/ShapeProcessor.h"

int main() {
    // Instanciaciones de los objetos
    Point point = Point(1.0f,1.0f);
    auto circle = Circle(1.0f,1.0f,1.0f);
    auto ellipse = Ellipse(1.0f,1.0f,1.0f,2.0f);
    auto rectangle = Rectangle(1.0f,1.0f,1.0f,5.0f);

    // Prints de las áreas utilizando ShapeProcessor
    std::cout << "Área del punto " << ShapeProcessor::area(point) << std::endl;
    std::cout << "Área del círculo " << ShapeProcessor::area(circle) << std::endl;
    std::cout << "Área de la elipse " << ShapeProcessor::area(ellipse) << std::endl;
    std::cout << "Área del rectángulo " << ShapeProcessor::area(rectangle) << std::endl;
}