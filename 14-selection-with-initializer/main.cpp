// C++17 if statements with initializers.
#include <iostream>
using namespace std;

int main() {
   if (int value{7}; value == 7) {
      cout << "value is " << value << endl;
   }
   else {
      cout << "value is not 7; it is " << value << endl;
   }

   if (int value{13}; value == 9) {
      cout << "value is " << value << endl;
   }
   else {
      cout << "value is not 9; it is " << value << endl;
   }

   cout << value; // Out of scope
}