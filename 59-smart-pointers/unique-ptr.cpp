#include <iostream>
#include <memory>

using namespace std;

class Integer {
public:
    // constructor
    Integer(int i) : value{i} {
        cout << "Constructor for Integer " << value << "\n";
    }
    // destructor
    ~Integer() {
        cout << "Destructor for Integer " << value << "\n";
    }
    
    int getValue() const {return value;} // return Integer value
private:
 int value{0};
};

int main() {
     cout << "Creating a unique_ptr object that point to an Integer\n";
     auto ptr{make_unique<Integer>(7)};
     // use unique_ptr to call an INteger member fuction
     cout << "Integer value: " << ptr->getValue() << "\n\nMain ends\n";
}