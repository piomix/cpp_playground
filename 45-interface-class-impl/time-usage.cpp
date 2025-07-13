#include <format>
#include <stdexcept>
#include <iostream>
#include <string_view>
#include "Time.h"

void displayTime(std::string_view message, const Time& time) {
    std::cout << std::format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
        message, time.to24HourString(), time.to12HourString());
}

int main(){
    Time t{};
    
    displayTime("Initial time: ", t);
    t.setTime(20, 44, 33);
    displayTime("Initial time: ", t);
    
    try {
        t.setTime(99,99,99);
    }
    catch (const std::invalid_argument& e){
        std::cout << std::format("Exception: {}\n\n", e.what());
    }
    
    displayTime("Final time display: ", t);
}

