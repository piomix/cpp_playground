#include <format>
#include <iostream>
#include "SalariedEmployee.h"

int main(){
    SalariedEmployee employee{"Sierra Dembo", 300.0};
    
    std::cout << "Employee information obtained by get functions:\n"
        << std::format("name: {}\nsalary: ${:.2f}\n", employee.getName(),
            employee.getSalary());
            
    employee.setSalary(500.0);
    std::cout << "Updated employee information from toString function:\n"
        << employee.toString();
        
    std::cout << std::format("\nearnings ${:.2f}\n", employee.earnings());
}