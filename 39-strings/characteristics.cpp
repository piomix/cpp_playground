#include <format>
#include <iostream>
#include <string>

/* Comparing Strings */

void printStatistics(std::string &s){
    std::cout << std::format("String capacity: {}\n Size: {}\n MaxSize: {}\n Empty: {}\n",
        s.capacity(),s.size(), s.max_size(), s.empty()); 
}


int main(){
  std::string s1;
  
  printStatistics(s1);
  
  std::cout << "Enter a string:\n";
  std::cin >> s1;
  std::cout << "The string entered was: " << s1 << std::endl ;
  
  printStatistics(s1);
  
  // Concatenate additional characters
  s1 += "abcdfgh1234566!?=)(&/%$";
   std::cout << "The string plus contatenation is: " << s1 << std::endl ;
  
  printStatistics(s1);
  
  // Ask for more string capacity
  s1.resize(s1.size() + 100);
  printStatistics(s1);
  
  
}