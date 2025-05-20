#include "headers/SaveFlightData.h"

int main() {
    std::cout << "====================================" << std::endl;
    std::cout << "TEST 1 (.print() del inciso b)" << "\n" << "====================================\n" << std::endl;
    Position position(-34.6f, -58.4f, 950.0f, 5.3);
    Pressure pressure(101.3f, 5.8f, 6.1f);

    SaveFlightData fd1 = SaveFlightData(position, pressure);
    fd1.print();

    std::cout << "\n====================================" << std::endl;
    std::cout << "TEST 2 (serialización y deserialización)" << "\n" << "====================================" << std::endl;

    Position position2(0, 0, 0, 0);
    Pressure pressure2(0, 0, 0);

    
    SaveFlightData fd2 = SaveFlightData(position2, pressure2);

    std::cout << "\nSe crearon correctamente 2 'SaveFlightData':" << std::endl;
    std::cout << "\n(1)" << std::endl;
    fd1.print();

    std::cout << "\n(2)" << std::endl;
    fd2.print();

    std::cout << "\n====================================" << std::endl;

    std::cout << "\nSerializando (1), deserializando datos de (1) en (2)..." << std::endl;

    std::ofstream out("bin/data.dat", std::ios::binary);
    if (out.is_open()) {
        fd1.serialize(out);
        out.close();
    }
    
    std::ifstream in("bin/data.dat", std::ios::binary); 
    if (in.is_open()) {
        fd2.deserialize(in);
        in.close();
    }

    std::cout << "\n(2)" << std::endl;
    fd2.print();

    std::cout << "\n====================================" << std::endl;
    return 0;
}