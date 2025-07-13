#include <format>
#include <iostream>

// C string example
int main(int argc, char* argv[])
{
	std::cout << std::format("Number or arguments: {}\n\n", argc);
    
    for(int i{0}; i < argc; ++i){
        std::cout << std::format("argument {}: {} \n", i ,argv[i]);
    }
}
