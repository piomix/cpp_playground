#include <iostream>
#include <iomanip> // parameterized stream manipulators  
using namespace std;

int main() {
   // initialization phase
   double total{0.0}; // initialize sum of grades
   int gradeCounter{0}; // initialize # of grades entered so far
   
   // processing phase
   // prompt for input and read grade from user
   cout << "Enter grade or -1 to quit: "; 
   int grade; 
   cin >> grade; 

   // loop until sentinel value is read from user
   while (grade != -1) {
      total = total + grade; // add grade to total
      gradeCounter = gradeCounter + 1; // increment counter 

      // prompt for input and read next grade from user
      cout << "Enter grade or -1 to quit: "; 
      cin >> grade; 
   }

   // termination phase
   // if user entered at least one grade
   if (gradeCounter != 0) { // avoid division by zero
      // calculate average of grades
      double average{total / gradeCounter};

      // display total and average (with two digits of precision)
      cout << "\nTotal of the " << gradeCounter 
         << " grades entered is " << total;
      cout << setprecision(2) << fixed; 
      cout << "\nClass average is " << average << "\n"; 
   } 
   else { // no grades were entered, so output appropriate message
      cout << "No grades were entered\n"; 
   }
} 