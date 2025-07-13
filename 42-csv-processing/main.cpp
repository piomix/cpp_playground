#include <format> 
#include <iostream>
#include <rapidcsv.h> 
#include <vector>

int main(){
    rapidcsv::Document document{"src/accounts.csv"}; // load CSV
    std::vector<int> accounts{document.GetColumn<int>("account")};
    std::vector<std::string> names{document.GetColumn<std::string>("name")};
    std::vector<double> balances{document.GetColumn<double>("balance")};
    
    std::cout << std::format("{:<10}{:<13}{:>7}\n", "Account", "Name", "Balance");
    
    for(size_t i{0}; i < accounts.size(); ++i){
        std::cout << std::format("{:<10}{:<13}{:>7.2f}\n", accounts.at(i), names.at(i), balances.at(i));
    }
}