#include <iostream>

using namespace std;

int main()
{
    constexpr int a{10};
    const int* aPtr{&a};
    
    cout << "The address of a is " << &a << endl;
    cout << "The value of aPtr is " << aPtr << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of *aPtr is " << *aPtr << endl;
    
}