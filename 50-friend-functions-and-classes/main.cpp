#include <format>
#include <iostream>

class Count{
  friend void modifyX(Count& c, int value); // friends can access private members of a class, note friend is not public, private
public:
    int getX() const {return m_x;}
private: 
    int m_x{0};
};

void modifyX(Count& c, int value) {
    c.m_x = value;
}

int main() {
    Count counter{};
    
    std::cout << std::format("Initial counter.m_x {}\n", counter.getX());
    modifyX(counter, 8);
    std::cout << std::format("counter.m_x after modifyX, {}\n", counter.getX());
}