#include <iostream>
using namespace std;

const int number{7}; // global variable named number 

int main() {
   const double number{10.5}; // local variable named number

   // display values of local and global variables
   cout << "Local double value of number = " << number
      << "\nGlobal int value of number = " << ::number << '\n';
} 
