#include <format>
#include <stdexcept>
#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(
    std::string_view name, double grossSales, double comissionRate)
    : Employee{name} { // super class constructor
        setGrossSales(grossSales);
        setCommissionRate(comissionRate);
}

void CommissionEmployee::setGrossSales(double grossSales) {
    if (grossSales < 0.0) {
        throw std::invalid_argument("Gross Sales must be >= 0.0");
    }
    m_grossSales = grossSales;
}

double CommissionEmployee::getGrossSales() const {
    return m_grossSales;
}

void CommissionEmployee::setCommissionRate(double comissionRate) {
    if (comissionRate <= 0.0 || comissionRate >= 1.0 ) {
        throw std::invalid_argument(
        "CommissionRate must be between 0.0 and 1.0");
    }
    m_commissionRate = comissionRate;
}
double CommissionEmployee::getCommissionRate() const {
    return m_commissionRate;
}

double CommissionEmployee::earnings() const {
    return getGrossSales() * getCommissionRate();
}

std::string CommissionEmployee::toString() const {
    return std::format("{}\ngross sales: ${:.2f}\ncommission rate: {:.2f}\n", Employee::toString(), 
			getGrossSales(), getCommissionRate());
}