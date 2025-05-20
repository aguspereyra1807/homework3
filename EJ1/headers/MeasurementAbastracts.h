#pragma once
#include <iostream>
#include <fstream>
#include <memory>

class MeasurementI { // Interfaz Medidas
    public:
        virtual void serialize(std::ofstream& out) const = 0;
        virtual void deserialize(std::ifstream& in) = 0;
        ~MeasurementI();
};

class BaseMeasurement: public MeasurementI { // Clase Abstracta
    public:
        BaseMeasurement(float t);
        float getTime() const;
        void serialize(std::ofstream& out) const override;
        void deserialize(std::ifstream& in) override;
        virtual void print() const = 0;
    
    protected:
        std::unique_ptr<float> measureTime;
};