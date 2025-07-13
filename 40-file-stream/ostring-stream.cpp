#include <iostream>
#include <sstream>
#include <string>


int main(){
    std::ostringstream output; 
    
    const std::string s1{"Output of several data types "};
    const std::string s2{"to an ostringstream object: \n"};
    const std::string s3{"\nDouble: "};
    const std::string s4{"\nint: "};
    
    constexpr double d{123.456};
    constexpr int i{22};
    
    output << s1  << s2 << s3 << d << s4 << i;
    
    std::cout << output.str() << std::endl;
    
    // more characters added
    output << "\nmore characters sent... \n";
    
    std::cout << output.str() << std::endl;
    
}