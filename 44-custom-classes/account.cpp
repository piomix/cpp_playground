#include <format>
#include <iostream>
#include <string>
#include "Account.h"

int main(){
    
    Account myAccount{}; // Default constructor
    
    std::cout << std::format("Initial account name: {}\n",myAccount.getName());
    
    std::cout << "Enter an account name: ";
    std::string name{};
    std::getline(std::cin, name);
     
    myAccount.setName(name);
     
    std::cout << std::format("Updated account name: {}\n",myAccount.getName());
}