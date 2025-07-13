#include <format>
#include <iostream>
#include <string>
#include "Time.h"


int main () {
    Time t{};
    
    int& hourRef{t.badSetHour(20)};
    
    std::cout << std::format("Valid hour before modification: {}\n", t.getHour());
    
    hourRef = 30; // Hour is valid up to 23! Broken class!
        
    std::cout << std::format("Invalid hour before modification: {}\n", t.getHour());
    
    // Even worst :( BAD PROGRAMMING!
    // Function call that retuns a reference used as an lvalue. 
    t.badSetHour(12) = 74;
    
    std::cout << std::format("Broken class member value, hour:  {}\n", t.getHour());
}