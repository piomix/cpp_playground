#include <format>
#include <iostream>
#include <string>
#include "Account.h"

int main(){
    
    Account account{"myAccount", 500.0};
    Account& ref{account};
    Account* ptr{&account};
    
    std::cout << account.getName() << std::endl;
    std::cout << std::format("{} {}", ref.getName(), ref.getBalance()) << std::endl;
    std::cout << std::format("{} {}", ptr->getName(), ptr->getBalance()) << std::endl;
    
    
}