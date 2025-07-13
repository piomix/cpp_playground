#include <cstdlib> //Exit function prototype
#include <format>
#include <fstream>
#include <iostream>
#include <string>


int main(){
    
    if(std::ifstream input{"clients.txt", std::ios::in}) { // Resource Adquisition Is Initialization - RAII
        std::cout << std::format("{:<10}{:<13}{:>7}\n", "Account", "Name", "Balance");
        
        int account;
        std::string name;
        double balance;
        
        while(input >> account >> name >> balance){
            std::cout << std::format("{:<10}{:<13}{:>7.2f}\n", account, name, balance);
        }
    }
    else {
        std::cerr << "File could not be opened\n";
        std::exit(EXIT_FAILURE);
    }
    
    // File Position pointers
    // istream seekg Get ptr
        // input.seekg(0); -- Reposition to the beginning.
        // input.clear(); -- Clears end-of-file
    
    // Optional arguments
    // ios::beg beginning position (default)      
    // ios::cur relative to current pos
    // ios::end backward from end
    
    // seekg(n, ios::cur) n-bytes from forward
    // seekg(n, ios::end) n-bytes from end
    // seekg(0, ios::end) Move to end
    
    // ostream seekp Put ptr
    
    // Return current get / put ptr's positions
    // tellg(); 
    // tellp();
    
}