#include <concepts>
#include <string>
#include <vector>
#include <fstream>

template <typename T>
concept isDouble = std::same_as<T, double>;

template <typename T>
concept isString = std::same_as<T, std::string>;

template <typename T>
concept isIntArr = std::same_as<T, std::vector< int>>;
 
// Clase 1
template <typename T>
class Class1 {
    public:
        void insert(const T& value);
        std::vector<T> getArr() const;
        void writeValues(std::ostream& out) const;
    
    private:
        std::vector<T> arr;
};

// Implementaciones Templates

template <typename T>
void Class1<T>::insert(const T& value) {
    arr.push_back(value);
}

template <typename T>
std::vector<T> Class1<T>::getArr() const {
    return arr;
}

// Dependiendo de la plantilla de la Class1

template<typename T>
void Class1<T>::writeValues(std::ostream& out) const {
    if constexpr (isDouble<T>) {
        out << "[";
        for (size_t i = 0; i < arr.size()-1; ++i) {
            out << arr[i] << ", ";
        }
        out << arr.back() << "]";
    }
    else if constexpr (isString<T>) {
        out << "[";
        for (size_t i = 0; i < arr.size()-1; ++i) {
            out << "\"" << arr[i] << "\"" << ",";
        }
        out << "\"" << arr.back() << "\"" << "]";
    }
    else if constexpr (isIntArr<T>) {
        out << "[\n" << "\t\t[" << arr[0][0] << ", " << arr[0][1] << "],\n"
            << "\t\t[" << arr[1][0] << ", " << arr[1][1] << "]\n\t\t]";
    }
}