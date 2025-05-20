#include "headers/Class2.h"

int main() {
    // Objetos contenedores de los valores del JSON
    Class1<double> doubles;
    Class1<std::string> strings;
    Class1<std::vector<int>> array;

    // Inserción de valores
    doubles.insert(1.3);
    doubles.insert(2.1);
    doubles.insert(3.2);

    strings.insert("Hola");
    strings.insert("Mundo");

    array.insert(std::vector<int>{1,2});
    array.insert(std::vector<int>{3,4});

    // Clase creadora de JSON
    Class2 JSONmaker;

    // Cargo los valores
    JSONmaker.loadData(doubles);
    JSONmaker.loadData(strings);
    JSONmaker.loadData(array);

    // Creo el archivo de salida
    std::ofstream out("data.json");
    JSONmaker.createJSON(out); // Genera el JSON en la carpeta principal como "data.json"
    JSONmaker.printJSON(); // Imprime el JSON usando de ofstream a std::cout
    return 0;
}