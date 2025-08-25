#include <format>
#include <iostream>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"

void virtualViaPointer(const Employee* baseClassPtr); // function prototype
void virtualViaReference(const Employee& baseClassRef); // function prototype

int main () {

	// Concrete class objects
    SalariedEmployee salaried{"Eric Cartman", 800.0};
    CommissionEmployee commision{"Sierra Dembo", 10000, .06};

    std::cout << "Invoking toString function on both concrete objects:\n"
        << std::format("{}earned $: {:.2f}\n", salaried.toString(), salaried.earnings())
		<< std::format("\n{}earned $: {:.2f}\n", commision.toString(), commision.earnings());

    //base-class pointer with base-class object
	std::vector<Employee*> employees{&salaried, &commision}; 
	
	std::cout << "Virtual function calls via dynamic binding\n";
	
	for (const Employee* employeePtr : employees){
		virtualViaPointer(employeePtr);
	}
	
	for (const Employee* employeePtr : employees){
		virtualViaReference(*employeePtr); //De-referencing the Ptr
	}
	
}

void virtualViaPointer(const Employee* baseClassPtr) {
	  std::cout << 
		std::format("\n{}earned $: {:.2f}\n", baseClassPtr->toString(), baseClassPtr->earnings());
}

void virtualViaReference(const Employee& baseClassRef) {
	  std::cout << 
		std::format("\n{}earned $: {:.2f}\n", baseClassRef.toString(), baseClassRef.earnings());
}