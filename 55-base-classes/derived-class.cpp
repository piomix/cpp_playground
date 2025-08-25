#include <format>
#include <iostream>
#include "SalariedCommissionEmployee.h"

int main (){
    SalariedCommissionEmployee employee{"Ibano Lal", 300.0, 5000.0, .04};
    
        std::cout << "Employee information obtained by get functions:\n"
        << std::format("{}: {}\n {}: {:.2f}\n {}: {:.2f}\n {}: {:.2f}\n \n",
            "name", employee.getName(), "salary", employee.getSalary(),
            "gross sales", employee.getGrossSales(), "commission", employee.getCommissionRate());
            
        employee.setGrossSales(8000);
        employee.setCommissionRate(0.1);
        
        std::cout << "Updated employee information from toString function:\n"
        << employee.toString();
        
        std::cout << std::format("\nearnings ${:.2f}\n", employee.earnings());
}