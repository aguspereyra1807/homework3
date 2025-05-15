#include "headers/SaveFlightData.h"

int main() {
    Position position(-34.6f, -58.4f, 950.0f, 5.3);
    Pressure pressure(101.3f, 5.8f, 6.1f);

    position.print();
    pressure.print();
    return 0;
}