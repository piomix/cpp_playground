#include <format>
#include <stdexcept>
#include "SalariedCommissionEmployee.h"

SalariedCommissionEmployee::SalariedCommissionEmployee(
    std::string_view name, double salary, double grossSales, double comissionRate)
    : SalariedEmployee{name, salary} { // call base class constructor
        setGrossSales(grossSales);
        setCommissionRate(comissionRate);
}

void SalariedCommissionEmployee::setGrossSales(double grossSales) {
    if (grossSales < 0.0) {
        throw std::invalid_argument("Gross Sales must be >= 0.0");
    }
    m_grossSales = grossSales;
}

double SalariedCommissionEmployee::getGrossSales() const {
    return m_grossSales;
}

void SalariedCommissionEmployee::setCommissionRate(double comissionRate) {
    if (comissionRate <= 0.0 || comissionRate >= 1.0 ) {
        throw std::invalid_argument(
        "CommissionRate must be between 0.0 and 1.0");
    }
    m_commissionRate = comissionRate;
}
double SalariedCommissionEmployee::getCommissionRate() const {
    return m_commissionRate;
}

double SalariedCommissionEmployee::earnings() const {
    return SalariedEmployee::earnings() +
        getGrossSales() * getCommissionRate();
}

std::string SalariedCommissionEmployee::toString() const {
    return std::format(
        "{}gross sales: ${:.2f}\ncommission rate: {:.2f}\n",
        SalariedEmployee::toString(), getGrossSales(), getCommissionRate());
}