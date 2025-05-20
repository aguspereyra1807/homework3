#pragma once
#include "GeometricShapes.h"
#include <concepts>
#include <iostream>
#include <cmath> // Para M_PI

template <typename T>
concept isPoint = std::same_as<T, Point>;

template <typename T>
concept isCircle = std::same_as<T, Circle>;

template <typename T>
concept isEllipse = std::same_as<T, Ellipse>;

template <typename T>
concept isRectangle = std::same_as<T, Rectangle>;

// Clase Utilitaria (solo tiene métodos statics)
class ShapeProcessor {
    public:
        template <isPoint T>
        static float area(const T& x);

        template <isCircle T>
        static float area(const T& x);

        template <isEllipse T>
        static float area(const T& x);

        template <isRectangle T>
        static float area(const T& x);
};

// Implementaciones Templates

template <isPoint T>
float ShapeProcessor::area(const T& x) {
    return 0.0;
};

template <isCircle T>
float ShapeProcessor::area(const T& x) {
    return M_PI * pow(x.getRadius(), 2); // πr^2
};

template <isEllipse T>
float ShapeProcessor::area(const T& x) {
    return M_PI * x.getA() * x.getB(); // πab
};

template <isRectangle T>
float ShapeProcessor::area(const T& x) {
    return x.getBase() * x.getHeight(); // bh
};