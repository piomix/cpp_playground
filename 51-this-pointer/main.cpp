
#include <format>
#include <iostream>

class Test{
public:
    explicit Test(int value);
    void print() const;
private: 
    int m_x{0};
};

Test::Test(int value) : m_x{value} {};

void Test::print() const {
    // Implicit use of this pointer
    std::cout << std::format("      m_x = {}\n", m_x);
    
    // Explicit use of this pointer
    std::cout << std::format(" this->m_x = {}\n", this->m_x);
    
    //Explicit use of the deferenced this pointer and the . operator
    std::cout << std::format("(*this).m_x = {}\n", (*this).m_x);
}

int main() {
    const Test testObject{12};
    testObject.print();
}