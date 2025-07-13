#include <format>
#include <iostream>
#include "Employee.h"

using namespace std;

int Employee::getCount() {return m_count;} // static member

Employee::Employee(std::string_view firstName, std::string_view lastName)
    : m_firstName(firstName), m_lastName(lastName) {
        ++m_count; // static data member
        std::cout << std::format("Employee object constructor: {} {}\n", 
            m_firstName, m_lastName);
}

Employee::~Employee(){
    std::cout << std::format("Employee object destructor: {} {}\n", m_lastName, m_firstName);
    --m_count;
}

const string& Employee::getFirstName() const {return m_firstName;} 
const string& Employee::getLastName() const {return m_lastName;} 

