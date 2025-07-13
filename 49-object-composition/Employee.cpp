#include <format>
#include <iostream>
#include "Employee.h"

Employee::Employee(std::string_view firstName, std::string_view lastName,
    const Date& birthDate, const Date& hireDate)
    : m_firstName{firstName}, m_lastName{lastName}, 
      m_birthDate{birthDate},  // Automatic Copy constructor 
      m_hireDate{hireDate} {   // Automatic Copy constructor
          std::cout << std::format("Employee object constructor: {} {}\n",
            m_firstName, m_lastName);
}

std::string Employee::toString() const {
   return std::format("{}, {} hired: {} birthdate: {}", m_lastName,
    m_firstName, m_hireDate.toString(), m_birthDate.toString());
}

Employee::~Employee(){
    std::cout << std::format("Employee object destructor {}\n", m_lastName);
}