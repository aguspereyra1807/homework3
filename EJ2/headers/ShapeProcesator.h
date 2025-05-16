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

class ShapeProcesator {
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