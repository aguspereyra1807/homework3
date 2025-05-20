#pragma once
#include "MeasurementAbastracts.h"

class Pressure: public BaseMeasurement { // Presión
    public:
        Pressure(float p, float q, float t);
        void serialize(std::ofstream& out) const override;
        void deserialize(std::ifstream& in) override;
        void print() const override;
        
        float staticPressure; // p
        float dynamicPressure; // q
};

class Position: public BaseMeasurement { // Posición
    public:
        Position(float lat, float lon, float alt, float t);
        void serialize(std::ofstream& out) const override;
        void deserialize(std::ifstream& in) override;
        void print() const override;
        
        float latitude;
        float longitude;
        float altitude;
};

// ambas sobreescriben serialize y deserialize y un print propio