#include "../headers/MeasurementAbastracts.h"

MeasurementI::~MeasurementI() {}

BaseMeasurement::BaseMeasurement(float t) {
    measureTime = std::make_unique<float>(t);
}

float BaseMeasurement::getTime() const {
    return *measureTime;
}

void BaseMeasurement::serialize(std::ofstream& out) const {
    out.write(reinterpret_cast<const char*>(measureTime.get()), sizeof(*measureTime));
}

void BaseMeasurement::deserialize(std::ifstream& in) {
    measureTime = std::make_unique<float>(0.0f);
    in.read(reinterpret_cast<char *>(measureTime.get()), sizeof(*measureTime));
}