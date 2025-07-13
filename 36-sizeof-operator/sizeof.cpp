#include <iostream>
#include <vector>
#include <format>
#include <stdexcept>


size_t getSize(double* ptr);

int main()
{
    // A double uses 8 bytes
    double numbers[20]; // Built-in array of 20 doubles (160 bytes)
    std::cout << std::format("Number of bytes in numbers is {}\n", sizeof(numbers));
    std::cout << std::format("Number of bytes using getSize (Decaying Ptr) is {}\n", 
        getSize(numbers));
}

//returns the size in bytes of the double's memory location 
size_t getSize(double* ptr){
    return sizeof(ptr);
}