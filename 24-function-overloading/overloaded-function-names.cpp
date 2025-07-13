int square(int x) {
   return x * x; 
} 

// function square for double values
double square(double y) {
   return y * y; 
} 

// function that receives arguments of types 
// int, float, char and int&
void nothing1(int a, float b, char c, int& d) { }

// function that receives arguments of types 
// char, int, float& and double&
int nothing2(char a, int b, float& c, double& d) {
   return 0; 
} 

int main() { }