#include <format>
#include <iostream>
#include <regex>
#include <string>

int main(){
    std::string s1{"1\t2\t3\t4"};
    
    std::cout << std::format("Original String: {} \n", s1) 
        <<  std::format("After replacing tabs with commas: {}\n",
                std::regex_replace(s1, std::regex("\t"), ","));
    
}