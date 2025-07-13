#include <format>
#include <iostream>
#include <regex>
#include <string>

int main(){
    //Simple match
    std::string s1{"Programming is fun"};
    std::cout << std::format("s1: {}\n\n", s1);
    
        std::cout << 
            std::format("Programming: {} fun: {} fn: {} \n\n",
                std::regex_search(s1, std::regex{"Programming"}),
                std::regex_search(s1, std::regex{"fun"}),
                std::regex_search(s1, std::regex{"fn"}));
    
    std::string s2{"MAGO DE OZ"};
    std::cout << std::format("s2: {}\n\n", s2);
    
    std::smatch match;
    std::cout << std::format("Case insensitive search for MAGO in s2: {}\n\n", s2)
            << std::format("mago: {}\n", std::regex_search(s2, match, std::regex{"mago", std::regex_constants::icase}))
                   << std::format("Matched text {}\n\n", match.str());
                   
    std::string contact{"Ando Devi, Home: 555-555-1234, Work: 555-555-4321"};
    std::cout << std::format("Finding phone numbers in:\n{}\n", contact);
    std::regex phone{R"(\d{3}-\d{3}-\d{4})"};
    
   
    while(std::regex_search(contact, match, phone)){
        std::cout << std::format("Phone number found: {}\n", match.str());
        contact = match.suffix();
        std::cout << std::format("match.suffix(): {}\n", contact);
    }
}