#include "../headers/SaveFlightData.h"

SaveFlightData::SaveFlightData(const Position& p, const Pressure& q): 
    position(Position(p.latitude, p.longitude, p.altitude, p.getTime())), 
    pressure(Pressure(q.staticPressure, q.dynamicPressure, q.getTime())) { } // Acá el problema de std::move, shallow-copy de los 2 objetosz<

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