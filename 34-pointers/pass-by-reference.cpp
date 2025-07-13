#include <format>
#include <iostream>

void cubeByValue(int* numberPtr);

int main()
{
	int number{5};
	
    std::cout << std::format("Original number is {}\n", number);
    cubeByValue(&number);
    std::cout << std::format("number after calling cubeByValue {}\n", number);
}

void cubeByValue(int* numberPtr){
    *numberPtr = *numberPtr * *numberPtr * *numberPtr;
}