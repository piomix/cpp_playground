#include <format>
#include <string>
#include "Date.h" // include definition of class Date from Date.h

// Date constructor (should do range checking)
Date::Date(int year, int month, int day)
   : m_year{year}, m_month{month}, m_day{day} {}

// return string representation of a Date in the format yyyy-mm-dd
std::string Date::toString() const {
   return std::format("{}-{:02d}-{:02d}", m_year, m_month, m_day);
}