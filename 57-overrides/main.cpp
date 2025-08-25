#include <format>
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Salaried.h"
#include "Commission.h"

int main() {
    Salaried salaried{800.0};
    Employee salariedEmployee{"Pierre Simon", &salaried};
    
    Commission commission{10000, .06};
    Employee commissionEmployee{"Sierra Dembo", &commission};
    
    std::vector employees{salariedEmployee, commissionEmployee};
    
    for(const Employee& employee : employees) {
        std::cout << std::format(
            "{}\nearned: ${:.2f}\n\n", employee.toString(), employee.earnings());
    }
}