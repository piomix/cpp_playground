#include <format>
#include <iostream>
#include <array>

int main() {
   std::array items{1, 2, 3, 4, 5}; // type inferred as array<int, 5>

   // display items before modification
   std::cout << "items before modification: ";
   for (const int& item : items) { // item is a reference to a const int
      std::cout << std::format("{} ", item); 
   }                       
 
   // multiply the elements of items by 2
   for (int& item : items) { // item is a reference to an int
      item *= 2;
   }

   // display items after modification
   std::cout << "\nitems after modification: ";
   for (const int& item : items) {
      std::cout << std::format("{} ", item);
   }

   // sum elements of items using range-based for with initialization
   std::cout << "\n\ncalculating a running total of items' values:\n";
   for (int runningTotal{0}; const int& item : items) {
      runningTotal += item;
      std::cout << std::format("item: {}; running total: {}\n",
         item, runningTotal);
   }
}