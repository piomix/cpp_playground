#include <iostream>
#include <format>
#include <array>
#include "Date.h"

Date::Date(int year, int month, int day)
    : m_year{year}, m_month{month}, m_day{day} {
    if(m_month < 1 || m_month > monthsPerYear){
        throw std::invalid_argument{"month must be 1-12"};
    }
    
    if(!checkDay(day)){
        throw std::invalid_argument{
            "Invalid day for current month and year"
        };
    }
    
    std::cout << std::format("Date object constructor: {}\n", toString());  
}
    
std::string Date::toString() const {
  return std::format("{}-{:02d}-{:02d}", m_year, m_month, m_day);  
}

Date::~Date(){
    std::cout << std::format("Date object destructor: {}\n", toString());  
}

bool Date::checkDay(int day) const {
    
    static const std::array daysPerMonth{
        0, 31, 28, 30 ,31, 30, 11, 31, 30, 31, 30,31};
    
    if (1 <= day && day <= daysPerMonth.at(m_month)){
        return true;
    }
    
    if (m_month == 2 && day == 29 && (m_year % 400 == 0 || 
            (m_month % 4 == 0 && m_year % 100 != 0))){
        return true;
    }
    
    return false;
}