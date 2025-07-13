#include <format>
#include <iostream>
#include "Date.h"
#include "Employee.h"

int main(){
    const Date birth{1987,7,24};
    const Date hire {2018,3,12};
    const Employee manager{"Aisha", "Khan", birth, hire};
    
    std::cout << manager.toString() << std::endl;
}
