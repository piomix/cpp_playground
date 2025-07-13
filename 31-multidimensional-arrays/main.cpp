#include <array>
#include <iostream>

constexpr size_t rows_size{2};
constexpr size_t columns_size{3};

constexpr std::array row1_values {std::array {0,1,2}, std::array {3,4,5}};
constexpr std::array row2_values {std::array {6,7,8}, std::array {9,0,1}};

void printArray(const std::array<std::array<int, columns_size>, rows_size> & a);

int main()
{
	std::cout << "This is a multiarray C++ example\n";
    
    std::cout << "row1:\n";
    printArray(row1_values);
    
    std::cout << "row2:\n";
    printArray(row2_values);
}

void printArray(const std::array<std::array<int, columns_size>, rows_size> & a){
    // Iterar sobre las fila (row)
    for(const auto& row : a){
        // Iterar sobre las columnas (col)
        for(const auto& col : row) {
            std::cout << col << ' ';
        }
         std::cout << '\n'; // Separador de filas   
    }
}
