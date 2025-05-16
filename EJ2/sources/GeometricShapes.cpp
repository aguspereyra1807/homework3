#include "../headers/GeometricShapes.h"

// Point

Point::Point(float x, float y)  {
    coordX = x;
    coordY = y;
}

float Point::getX() const {
    return coordX;
}

float Point::getY() const {
    return coordY;
}

void Point::setX(float x) {
    coordX = x;
}

void Point::setY(float y) {
    coordY = y;
}

// Circle

Circle::Circle(float x, float y, float r): Point(x,y) {
    radius = r;
}

float Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(float r) {
    radius = r;
}

// Elipse

Ellipse::Ellipse(float x, float y, float a, float b): Point(x,y) {
    semiMajorAxis = a;
    semiMinorAxis = b;
}

float Ellipse::getA() const {
    return semiMajorAxis;
}

float Ellipse::getB() const {
    return semiMinorAxis;
}

void Ellipse::setA(float a) {
    semiMajorAxis = a;
}

void Ellipse::setB(float b) {
    semiMinorAxis = b;
}

// Rectangle

Rectangle::Rectangle(float x, float y, float b, float h): 
    Point(x-(b/2), y-(h/2)) // Suponiendo que (x,y) son las coordenadas del centro, así (x,y) ahora pertenecen al vértice inferior izquierdo
    {
        base = b;
        height = h;
}

float Rectangle::getBase() const {
    return base;
}

float Rectangle::getHeight() const {
    return height;
}

void Rectangle::setBase(float b) {
    base = b;
}

void Rectangle::setHeight(float h) {
    height = h;
}






