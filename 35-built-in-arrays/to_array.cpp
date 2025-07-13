#include <format>
#include <iostream>
#include <array>

/* Convert C built-in arrays to Modern C++ arrays with to_array */


int main(){

    const auto display{
        [](const auto& items){
            for(const auto& item: items){
                std::cout << std::format("{} ", item);
            }
            std::cout << std::endl;
    }
    };
    
    // C array built-in
    const int values1[]{10,20,30};
    std::cout << "Built-in array content: " << std::endl;
    display(values1);
    std::cout << std::endl;
    
    const auto array1{std::to_array(values1)};
    std::cout << std::format("array1.size() size {} ", array1.size()) << std::endl;
    display(array1);
    std::cout << std::endl;
    
    // Create a std::array from built-in array
    const auto array2{std::to_array({1,2,3,4})};
    std::cout << std::format("array2.size() size {} ", array2.size()) << std::endl;
    display(array2);
    
    // C-string arrays 
    const auto cstring{std::array{"abc"}};
    // Note the size is one (Decaying to a char* ptr)
    std::cout << std::format("\ncstring.size(): {} ", cstring.size()) << std::endl;
    display(cstring);
    
    // Create a std::array
    const auto cstring2{std::to_array("C++20")};
    std::cout << std::format("\ncstring2.size(): {} ", cstring2.size()) << std::endl;
    display(cstring2);
        
}