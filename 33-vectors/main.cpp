#include <iostream>
#include <vector>
#include <format>
#include <stdexcept>


void outputVector (const std::vector<int>& items);
void inputVector (std::vector<int>& items);

int main()
{
    std::vector<int> integers1(7);
    std::vector<int> integers2(10);
    
    //Print vector size & content
    std::cout << std::format("integers1 size is {} and content:\n", integers1.size());
    outputVector(integers1);
    
    std::cout << std::format("integers2 size is {} and content:\n", integers2.size());
    outputVector(integers2);
    
    std::cout << "Populate 17 vector positions\n";
    //Populate vectors
    std::cout << "Populate integers1\n";
    inputVector(integers1);
    std::cout << "Populate integers2\n";
    inputVector(integers2);
    

    if(integers1 != integers2){
        std::cout << "Vectors integer1 and integer2 are different!\n";
    }
    
    //Copy vectors via a constructor
    std::vector integers3{integers2};
    std::cout << std::format("integers3 size is {} and content:\n", integers3.size());
    outputVector(integers3);
    
    //Vector assignment
    integers1 = integers2;
    std::cout << std::format("integers1 size is {} and content:\n", integers1.size());
    outputVector(integers1);
    
    //Validating vector equality with ==
    if(integers1 == integers2){
        std::cout << "Vectors are equal!\n";
    }
    
    //Vector positional lookup (rvalue)
    std::cout << "integers1 fifth position is " << integers1.at(5) << std::endl;
    
     //Vector positional assigment (lvalue)
    integers1.at(5) = 1'000; 
    outputVector(integers1);
    
    //Exception handling example of out-of-range Vector access
    try{
        std::cout << "\nAttempt to display integers1.at(15)\n";
        std::cout << integers1.at(15) << std::endl;
    }
    catch(const std::out_of_range& ex){
        std::cerr << "An exception occured: " << ex.what() << std::endl;
    }
     
    //Vectors offers capabilities to add elements at the end of the vector
    
    // Use push_back
    integers3.push_back(1'000);
    outputVector(integers3);
    
    // Use emplace_back
    integers3.emplace_back(-1'000);
    outputVector(integers3);
    
    //AI Prompt: In the context of c++ vectors, what is the difference between push_back and emplace_back ?

}

void outputVector(const std::vector<int>& items){
    for (const auto &item : items){
        std::cout << item << ' ';
    }
    std::cout << '\n';
}

//Populate the vector from stdin
void inputVector(std::vector<int>& items){
    for (auto &item : items){
        std::cin >> item;
    }
    outputVector(items);
}
