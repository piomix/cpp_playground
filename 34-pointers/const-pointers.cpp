#include <format>
#include <iostream>


int main(){
    
    // nonconstant Ptr to constant data
    int x{5}, y{0};
    const int* yPtr{&y};
    *yPtr = 100;
    
    //Modify a const pointer to nonconstant data
    
    int* const xPtr{&x}; //const ptr init
    *xPtr = 7; // allowed
    xPtr = &y; // xPtr cannot be re-assigned
    
    // const Ptr to const data
    
    const int* const ptr{&x};
    cout << *ptr << endl; // Valid must be print 5
    *ptr = 7; // not allowed (read-only)
    ptr = &y; //not allowed (read-only)
    
}