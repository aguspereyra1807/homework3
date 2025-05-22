#include "../headers/Class2.h"

void Class2::createJSON(std::ostream& out) const {
    out << "{" << "\t\"vec_doubles\" : ";
    doubles.writeValues(out); 
    out << ",\n" << "\t\"palabras\" : ";
    strings.writeValues(out);
    out << ",\n" << "\t\"listas\" : ";
    array.writeValues(out);
    out << "\n}" << std::endl;
}

// Reutiliza createJSON con std::cout como ostream para imprimir lo mismo en consola
void Class2::printJSON() const {
    createJSON(std::cout);
}