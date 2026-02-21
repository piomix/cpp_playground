#include <iostream>
#include <stdexcept>
#include <utility> // for std::move
#include "MyArray.h"

using namespace std;

// function to return a MyArray by value
MyArray getArrayByValue() {
    MyArray localInts{10,20,30}; // Create three element MyArray, initializer list
    return localInts;
}

int main()
{
    MyArray ints1(7);  // 7-element MyArray constructor, note () instead {}
    MyArray ints2(10); // 10-element MyArray constructor, note () instead {}
    
    cout << "\nints1 size: " << ints1.size()
        << "\ncontents: " << ints1; // uses overloaded <<
    
    cout << "\nints2 size: " << ints2.size()
        << "\ncontents: " << ints2; // uses overloaded <<
        
    // input and print inst1 and inst2
    cout << "\n\n Enter 17 integers: ";
    cin >> ints1 >> ints2; // uses overloaded >>
    
    cout << "\nints1: " << ints1 << "\nints2: " << ints2;
    
    // use overloaded inequiality (!=) operator
    cout << "\n\nEvaluating: ints1 != ints2\n";
    
    if(ints1 != ints2){
        cout << "ints1 and ints2 are not equal\n\n";
    }
    
    // Create MyArray ints3 by copying ints1
    MyArray ints3{ints1}; // invokes copy constructor
    
    cout << "\nints3 size: " << ints3.size() << "\ncontents: " << ints3;
    
    // ue overloaded copy assignment (=) operator
    cout << "\n\nAssigning ints2 to int1:\n";
    ints1 = ints2; // note target MyArray size is smaller
    
    cout << "\nints1 " << ints1 << "\nints2: " << ints2;
    
    // use overloaded equality (==) operator
    cout << "\n\nEvaluating ints1 == ints2\n";
    
    if(ints1 == ints2) {
        cout << "ints1 and ints2 are equal\n\n";
    }
    
    // use overloaded subscript operator to create an rvalue
    cout << "ints1[5] is " << ints1[5];

    // use overloaded subscript operator to create an lvalue
    cout << "\n\nAssigning 1000 to ints1[5]\n";
    ints1[5] = 1000; 
    cout << "ints1: " << ints1;
     
    // Attempt to use out-of-range subscript
    try{
        cout << "\n\nAttempt to assign 1000 to ints1[15]\n";
        ints1[15] = 1000; // ERROR: subscript out of range
    }
    catch (const out_of_range& ex){
        cout << "An exception has occurred: " << ex.what() << "\n";
    }
    
    
    // initialize ints4 with contents of the MyArray returned by getArrayValue; print size and contents
    cout << "\nInitialize ints4 with temporary MyArray object\n";
    MyArray ints4{getArrayByValue()};
    
    cout << "\nints4 size: " << ints4.size() << "\ncontents: " << ints4;
    
    //convert ints4 to an rvalue reference with std::move and use the result to init MyArray ints5
    cout << "\n\nInitialize ints5 with the result of std::move(ints4)\n";
    MyArray ints5{std::move(ints4)}; // invokes move constructor
    
    cout << "\nints5 size: " << ints5.size() << "\ncontents: " << ints5;
    cout << "\n\nSize of ints4 is now: " << ints4.size(); //DO NOT DO THIS in real life!
    
    //Move contents of inst5 into inst4
    cout << "\n\nMove ints5 into inst4 via move assignment\n";
    ints4 = std::move(ints5); // invokes move assignment
    
    cout << "\nints4 size: " << ints4.size() << "\ncontents: " << ints4;
    cout << "\n\nSize of ints5 is now: : " << ints5.size(); //DO NOT DO THIS in real life!
    
    // check if inst5 is empty by contextually converting it to a bool
    if(ints5){
        cout << "\n\nints5 contains elements\n";
    }
    else{
        cout << "\n\nints5 is empty\n";
    }
    
    // Add one to every element of inst4 using preincrement
    cout << "\n\nints4: " << ints4;
    cout << "\npreincremet ints4:  " << ++ints4;
 
    // Add one to every element of inst4 using postincrement
    cout << "\npostincremet ints4:  " << ints4++ << "\n";
    cout << "\n\nints4 now contains: " << ints4;
    
    // Add a value to every element of inst4 using += 
    cout << "\n\nAdd 7 to every ints4 element: " << (ints4 += 7) << "\n\n";
}
