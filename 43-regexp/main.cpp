#include <format>
#include <iostream>
#include <regex>

int main(){
    std::regex r1{"061925"};
    
    // Matching literal chars to a pattern
    std::cout << "Matching against: 061915\n"
        << std::format("061925: {}; 555555 {}\n\n", std::regex_match("061925", r1), std::regex_match("555555", r1));
        
    // Fully match five digits
    std::regex r2{R"(\d{5})"};
    
    std::cout << "Matching against: '/d{5} \n"
        << std::format("06192: {}; 555555 {}\n\n", std::regex_match("06192", r2), std::regex_match("555555", r2));
    
    // Aphabetic expression
    std::regex r3{"[A-Z][a-z]*"};
        std::cout << "Matching against: [A-Z][a-z]* \n"
            << std::format("Angel: {}; tina: {}\n\n", std::regex_match("Angel", r3), std::regex_match("tina", r3));
            
    // Match by excluding characters
    std::regex r4{"[^a-z]*"}; // Everything except lower case alphabetic chars
    std::cout << "Matching against: [^a-z]* \n"
            << std::format("Angel: {}; TINA: {}\n\n", std::regex_match("Angel", r4), std::regex_match("TINA", r4));
    
    std::regex r5{"[*+$]"};
    std::cout << "Matching against: [*+$] \n"
            << std::format("$: {}; !: {}\n\n", std::regex_match("$", r5), std::regex_match("!", r5));
    
    // Capital letter followed by at least one lower case character
    std::regex r6{"[A-Z][a-z]+"};
    std::cout << "Matching against: [A-Z][a-z]+ \n"
            << std::format("Angel: {}; T: {}\n\n", std::regex_match("Angel", r6), std::regex_match("T", r6));
            
    // 
    std::regex r7{"labell?ed"};
    std::cout << "Matching against: labell?ed\n"
            << std::format("labelled: {}; labeled: {}; lbeled: {} \n\n", std::regex_match("labelled", r7), std::regex_match("labeled", r7), std::regex_match("lbeled", r7));
            
    std::regex r8{R"(\d{3,6})"};
    std::cout << R"(Matching against: \d{3,6})" << "\n"
            << std::format("123: {}; 123456: {} 123456789: {} \n\n", std::regex_match("123", r8), std::regex_match("123456", r8), std::regex_match("123456789", r8));
            
    std::regex r9{R"(\d{3,})"};
    std::cout << R"(Matching against: \d{3,})" << "\n"
            << std::format("123: {}; 123456: {} 12: {} \n\n", std::regex_match("123", r9), std::regex_match("123456", r9), std::regex_match("12", r9));
}  