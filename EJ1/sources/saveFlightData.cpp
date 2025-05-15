#include "../headers/SaveFlightData.h"

// SaveFlightData::SaveFlightData(const Position& p, const Pressure& q) { // Acá el problema de std::move
    
// }

void SaveFlightData::serialize(std::ofstream& out) const {
    position.serialize(out);
    pressure.serialize(out);
}

void SaveFlightData::deserialize(std::ifstream& in) {
    position.deserialize(in);
    pressure.deserialize(in);
}

void SaveFlightData::print() const {
    position.print();
    pressure.print();
}