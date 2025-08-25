#include <format>
#include <string>
#include "CompensationModel.h"
#include "Employee.h"

Employee::Employee(std::string_view name, CompensationModel* modelPtr)
    : m_name{name}, m_modelPtr{modelPtr} {}
    
void Employee::setCompensationModel(CompensationModel* modelPtr) {
    m_modelPtr = modelPtr;
}

double Employee::earnings() const {
  return m_modelPtr->earnings();  
};

std::string Employee::toString() const {
    return std::format("{}\n{}", m_name, m_modelPtr->toString());
}