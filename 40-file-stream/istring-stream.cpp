#include <iostream>
#include <sstream>
#include <format>
#include <string>



int main(){

    const std::string inputString{"Atonia test 123 4.7 A"};
    
    std::istringstream input{inputString}; 
    
    std::string s1;
    std::string s2;
    
    int i;
    double d;
    char c;
    
    input >> s1 >> s2 >> i >> d >> c;
    
    std::cout << std::format("{}\n{}\n{}\n{}\n{}\n", s1, s2, i , d, c);
    
    if(long value; input >> value ){
        std::cout << "There is still a value in the stream: " << value;
    }
    else{
     std::cout << "No more values in the stream\n";
    }
}