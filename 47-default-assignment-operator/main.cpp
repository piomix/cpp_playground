#include <format>
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h

int main() {
   const Date date1{2006, 7, 4};
   Date date2{2022, 1, 1};

   std::cout << std::format("date1: {}\ndate2: {}\n\n",
      date1.toString(), date2.toString());
   date2 = date1; // uses the default assignment operator
   std::cout << std::format("After assignment, date2: {}\n",
      date2.toString());
}
