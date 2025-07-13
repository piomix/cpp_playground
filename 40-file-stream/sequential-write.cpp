#include <cstdlib> //Exit function prototype
#include <format>
#include <fstream>
#include <iostream>
#include <string>


int main(){
    
    if(std::ofstream output{"clients.txt", std::ios::out}) { // Resource Adquisition Is Initialization - RAII
        std::cout << "Enter account, name, and balance.\n"
            << "Enter end-of-line to end input.\n";
        int account;
        std::string name;
        double balance;
        
        while(std::cin >> account >> name >> balance){
            output << std::format("{} {} {}\n", account, name, balance);
            std::cout << "? ";
        
        }
    }
    else {
        std::cerr << "File could not be opened\n";
        std::exit(EXIT_FAILURE);
    }
}