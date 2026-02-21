#include <iostream>
#include <string>
#include <string_view>
#include <format>

using namespace std;

int main() {
    // string init
    string s1{"happy"}; // from char*
    string s2{" birthday"}; // from char*
    string s3; //empty
    string_view v{"hello"}; 
    
    cout << std::format("s1: \"{}\"; s2: \"{}\"; s3: \"{}\" v: \"{}\"\n\n",
        s1,s2,s3, v);

    cout << "Results of comparing s2 and s1:\n" 
        << std::format("s2 == s1: {}\n", s2 == s1)
        << std::format("s2 != s1: {}\n", s2 != s1)
        << std::format("s2 > s1: {}\n", s2 > s1)
        << std::format("s2 < s1: {}\n", s2 < s1)
        << std::format("s2 >= s1: {}\n", s2 >= s1)
        << std::format("s2 <= s1: {}\n", s2 <= s1);
}