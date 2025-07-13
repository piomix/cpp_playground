#include <format>
#include <iostream>
#include <string>
#include "Account.h"

int main(){
    
    Account account1{"Mia Gonzales"};
    Account account2{"Raton Perez"};
    
    std::cout << std::format("Account1 name: {}\nAccount2 name: {}\n",
        account1.getName(), account2.getName());

}