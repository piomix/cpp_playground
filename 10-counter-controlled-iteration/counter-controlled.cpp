#include <iostream>
using namespace std;

int main() {      
   int counter{1}; // declare and initialize control variable

   while (counter <= 10) { // loop-continuation condition
      cout << counter << "  ";
      ++counter; // increment control variable 
   } 

   cout << "\n"; 
} 