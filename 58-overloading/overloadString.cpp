#include <iostream>
#include <string>
#include <string_view>
#include <format>

using namespace std;

int main() {
	string s1{"happy"};
    string s2{" birthday"};
    string s3;
    string_view v{"hello"};
    
    cout << format("s1: \"{}\"; s2: \"{}\"; s3: \"{}\"; v: \"{}\"\n\n",
        s1,s2,s3,v);
    
    // Lexicografic comparisons
    // Test overloaded equality and relational operators
    cout << "Results of comparing s2 and s1:\n" 
        << format("s2 == s1: {}\n", s2 == s1)
        << format("s2 != s1: {}\n", s2 != s1)
        << format("s2 > s1: {}\n", s2 > s1)
        << format("s2 < s1: {}\n", s2 < s1)
        << format("s2 >= s1: {}\n", s2 >= s1)
        << format("s2 <= s1: {}\n\n", s2 <= s1);
        
    cout << "Testing s3.empty():\n";
    
    if(s3.empty()){
        cout << "s3 is empty; assigning s1 to s3;\n";
        s3 = s1; //assignment
        cout << format("s3 is \"{}\"\n\n", s3);
    }
    
    // Test overloaded string concatenation assignment operator 
    s1 += s2;
    cout << format("s1 += s2 yields s1 = {}\n\n", s1);
    
    // Test string concatenation with a C string
    s1 += " to you";
    cout << format("s1 += \", have a great day!\"s yields\ns1 = {}\n\n", s1);

    // Test string concatenation with a C++14 string-object literal
    s1 += ", have a great day!"s; // notice s after " for a string-object literal
    cout << format("s1 += \", have a great day!\"s yields\ns1 = {}\n\n", s1);

    // Test string member function substr
    cout << format("{} {}\n{}\n\n",
        "The substring of s1 starting at location 0 for",
        "14 characters, s1.substr(0,14), is:", s1.substr(0,14));  

    // Test substr "to-end-of-string" option
      cout << format("{} {}\n{}\n\n",
          "The substring of s1 starting at",
          "location 15, s1.substr(15) , is:", s1.substr(15));

    // Test copy constructor
    string s4{s1};
    cout << format("s4 = {}\n\n", s4);
    
    // Test overloaded copy assignment (=) operator with self-assignment
    cout << "assigning s4 to s4\n";
    s4 = s4;
    cout << format("s4 = {}\n\n", s4);
    
    // Test string's string_view constructor
    cout << "initializing s5 with string_view v\n";
    string s5{v};
    cout << format("s5 is {}\n\n", s5);
    
    // Test using overloaded subscript operator to create l-value
    s1[0] = 'H';
    s1[6] = 'B';
    cout << format("{}: \n{}\n\n",
        "after s1[0] = 'H' and s1[6] = 'B', s1 is", s1);
        
    // Test index out of range with string member function "at'
    try {
        cout << "Attempt to assign 'd' to s1.at(100) yields:\n";
        s1.at(100) = 'd'; // ERROR: out-of-range
    }
    catch (const out_of_range& ex){
        cout << format("An exception ocurred: {}\n", ex.what());
    }
      
    
}
