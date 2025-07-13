#include <iostream>
#include <format>
#include "Date.h"


int main() {
   const Date date1{2025,7,4};
   Date date2{2022, 1,1};
   
   std:: cout << std::format("date1: {} date2: {} \n", date1.toString(), date2.toString());
   
   date2 = date1;
   
   std:: cout << std::format("date2 after assigment: {}  \n", date2.toString());
}