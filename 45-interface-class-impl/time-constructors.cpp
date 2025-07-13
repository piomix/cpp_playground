#include <format>
#include <iostream>
#include <stdexcept>
#include <string>
#include "Time.h"

void displayTime(std::string_view message, const Time& time) {
    std::cout << std::format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
        message, time.to24HourString(), time.to12HourString());
}

int main(){
    const Time t1{};
    const Time t2{2}; // just hour
    const Time t3{21,34}; // hour and minute
    const Time t4{12, 25, 42}; // hour, min, second
    
    std::cout << "Constructed with: \n\n";
    displayTime("t1: all defaulted",t1);
    displayTime("t2: minute and second defaulted",t2);
    displayTime("t3: second defaulted",t3);
    displayTime("t4: no defaults",t4);
    
    try{
        const Time t5{27,74,99};
    }
    catch (const std::invalid_argument& e) {
        std::cerr << std::format("t5 parameters invalid\n", e.what());
    }
}