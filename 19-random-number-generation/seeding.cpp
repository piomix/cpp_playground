#include <iostream>
#include <random>

using namespace std;

int main() {
   unsigned int seed{0}; // stores the seed entered by the user

   cout << "Enter seed: ";
   cin >> seed;

   // set up random-number generation
   default_random_engine engine{seed}; // seed the engine
   uniform_int_distribution randomDie{1, 6};

   // display 10 random die rolls
   for (int counter{1}; counter <= 10; ++counter) {
      cout << randomDie(engine) << " ";
   } 

   cout << '\n';
} 