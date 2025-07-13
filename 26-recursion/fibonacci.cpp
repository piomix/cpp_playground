#include <format>  
#include <iostream>
using namespace std;

long fibonacci(long number); // function prototype 

int main() {
   // calculate the fibonacci values of 0 through 10
   for (int counter{0}; counter <= 10; ++counter) {
      cout << format("fibonacci({}) = {}\n", 
         counter, fibonacci(counter));
   }

   // display higher fibonacci values
   cout << format("\nfibonacci(20) = {}\n", fibonacci(20))
      << format("fibonacci(30) = {}\n", fibonacci(30))
      << format("fibonacci(35) = {}\n", fibonacci(35));
} 

// recursive function fibonacci                            
long fibonacci(long number) {            
   if ((0 == number) || (1 == number)) { // base cases     
      return number;                                       
   }                                                       
   else { // recursion step                                
      return fibonacci(number - 1) + fibonacci(number - 2);
   }                                                       
}                                                          
