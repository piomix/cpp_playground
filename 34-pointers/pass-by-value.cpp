#include <format>
#include <iostream>

int cubeByValue(int number);

int main()
{
	int number{5};
	
    std::cout << std::format("Original number is {}\n", number);
    cubeByValue(number);
    std::cout << std::format("number after calling cubeByValue {}\n", number);
}

int cubeByValue(int number){
    number = number * number * number;
    std::cout << std::format("local number value is {}\n", number);
    return number;
}