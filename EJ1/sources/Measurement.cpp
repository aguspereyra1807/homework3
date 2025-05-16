#include "../headers/Measurements.h"

// Pressure

Pressure::Pressure(float p, float q, float t): BaseMeasurement(t) {
    staticPressure = p;
    dynamicPressure = q;
}

void Pressure::serialize(std::ofstream& out) const {
    BaseMeasurement::serialize(out);
    out.write(reinterpret_cast<const char*>(&staticPressure), sizeof(staticPressure));
    out.write(reinterpret_cast<const char*>(&dynamicPressure), sizeof(dynamicPressure));
}

void Pressure::deserialize(std::ifstream& in) {
    BaseMeasurement::deserialize(in);
    in.read(reinterpret_cast<char*>(&staticPressure), sizeof(staticPressure));
    in.read(reinterpret_cast<char*>(&dynamicPressure), sizeof(dynamicPressure));
}

void Pressure::print() const {
    std::cout << "PRESIÓN (t = " << *measureTime << ")" << std::endl;
    std::cout << "- p: " << staticPressure << "\n" 
              << "- q: " << dynamicPressure << std::endl;
}

// Position

Position::Position(float lat, float lon, float alt, float t): BaseMeasurement(t) {
    latitude = lat;
    longitude = lon;
    altitude = alt;
}

void Position::serialize(std::ofstream& out) const {
    BaseMeasurement::serialize(out);
    out.write(reinterpret_cast<const char*>(&latitude), sizeof(latitude));
    out.write(reinterpret_cast<const char*>(&longitude), sizeof(longitude));
    out.write(reinterpret_cast<const char*>(&altitude), sizeof(altitude));
}

void Position::deserialize(std::ifstream& in) {
    BaseMeasurement::deserialize(in);
    in.read(reinterpret_cast<char*>(&latitude), sizeof(latitude));
    in.read(reinterpret_cast<char*>(&longitude), sizeof(longitude));
    in.read(reinterpret_cast<char*>(&altitude), sizeof(altitude));
}

void Position::print() const {
    std::cout << "POSICIÓN (t = " << *measureTime << ")" << std::endl;
    std::cout << "- x: " << latitude << "\n" 
              << "- y: " << longitude << "\n" 
              << "- z: " << altitude << std::endl;
}
