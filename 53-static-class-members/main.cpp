#include <format>
#include <iostream>
#include "Employee.h"


int main () {
    // Static member use
    std::cout << std::format("Initial Employee count: {}\n", Employee::getCount());
 
    // Scope block
    {
        const Employee e1{"Charley", "Harper"};
        const Employee e2{"Alan", "Harper"};
        
        std::cout << std::format("Employee count post creation: {}\n", Employee::getCount());
        
        std::cout << std::format(" Employee 1: {} {}\n Employee 2: {} {} \n",
            e1.getFirstName(), e1.getLastName(),
            e2.getFirstName(), e2.getLastName());
    }
    
      std::cout << std::format("Employee count post block {}\n", Employee::getCount());
}