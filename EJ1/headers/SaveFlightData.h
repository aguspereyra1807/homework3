#pragma once
#include "../headers/Measurements.h"

class SaveFlightData {
    public:
        SaveFlightData(const Position& p, const Pressure& q);
        void serialize(std::ofstream& out) const;
        void deserialize(std::ifstream& in);
        void print() const;

        Position position;
        Pressure pressure;
};