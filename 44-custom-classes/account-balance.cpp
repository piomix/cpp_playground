#include <format>
#include <iostream>
#include <string>
#include "Account.h"

int main(){
    
    Account account1{"Mia Gonzales", 50.00};
    Account account2{"Raton Perez", -7.00};
    
    std::cout << std::format("Account1 name: {} Account1 balance: {:.2f}\n",
        account1.getName(), account1.getBalance());
        
    std::cout << std::format("Account2 name: {} Account2 balance: {:.2f}\n",
        account2.getName(), account2.getBalance());
        
        
    std::cout << "Enter deposit for account 1: ";
    double amount;
    std::cin >> amount;
    std::cout << std::format("Adding ${:.2f} deposit to Account1 balance\n", amount);
    account1.deposit(amount);
    
      
    std::cout << std::format("Account1 name: {} Account1 balance: {:.2f}\n",
        account1.getName(), account1.getBalance());
        
    std::cout << "Enter deposit for account 2: ";
    std::cin >> amount;
    std::cout << std::format("Adding ${:.2f} deposit to Account2 balance\n", amount);
    account2.deposit(amount);

   std::cout << std::format("Account2 name: {} Account2 balance: {:.2f}\n",
        account2.getName(), account2.getBalance());
}