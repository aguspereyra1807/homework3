#pragma once
#include <type_traits>
#include <iostream>
#include "Class1.h"

// Tipos definidos para mejor legibilidad
using DoubleClass = Class1<double>;
using StrClass = Class1<std::string>;
using MatrixClass = Class1<std::vector< int>>;

// Concepts
template <typename T>
concept IsDoubleC = std::is_same_v<T,DoubleClass>;

template <typename T>
concept IsStrC = std::is_same_v<T,StrClass>;

template <typename T>
concept IsMatrixC = std::is_same_v<T,MatrixClass>;

// Clase2
class Class2 {
    public:
        void createJSON(std::ostream& out) const;
        void printJSON() const;

        template <typename T>
        typename std::enable_if_t<IsDoubleC<T>, void>
        loadData(T& data);

        template <typename T>
        typename std::enable_if_t<IsStrC<T>, void>
        loadData(T& data);

        template <typename T>
        typename std::enable_if_t<IsMatrixC<T>, void>
        loadData(T& data);

    private:
        DoubleClass doubles;
        StrClass strings;
        MatrixClass array;
};

// Implementaciones Templates

// Dependiendo de qué plantilla de Class1 entra como parámetro se asigna los valores a una variable diferente

template <typename T>
typename std::enable_if_t<IsDoubleC<T>, void>
Class2::loadData(T& data) {
    doubles = data;
}

template <typename T>
typename std::enable_if_t<IsStrC<T>, void>
Class2::loadData(T& data) {
    strings = data;
}

template <typename T>
typename std::enable_if_t<IsMatrixC<T>, void>
Class2::loadData(T& data) {
    array = data;
}