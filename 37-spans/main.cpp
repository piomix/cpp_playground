#include <array>
#include <format>
#include <iostream>
#include <numeric>
#include <span>
#include <vector>

// Display receives a built-in array
void displayArray(const int items[], size_t size){
    for(size_t i{0}; i < size; ++i){
        std::cout << std::format("{} ", items[i]);
    }
    std::cout << std::endl;
}

// Display spans (Supports built-in, std::array, std::vector)

void displaySpan(std::span<const int> items){
    for(const auto& item : items){
        std::cout << std::format("{} ", item);
    }
    std::cout << std::endl;
}

void times2(std::span<int> items){
    for(int& item: items){
        item *= 2;
    }
}


int main()
{
	int values1[]{1,2,3,4,5};
    std::array values2{6,7,8,9,10};
    std::vector values3{11,12,13,14,15};
    
    // Traditional decaying array ptr
    std::cout << std::format("Print built-in array") << std::endl;
    displayArray(values1, 5);
    
    // Display built-in array using span
    std::cout << std::format("Print built-in array via span") << std::endl;
    displaySpan(values1);
    
    // Display std::array using span
    std::cout << std::format("Print std:array array via span") << std::endl;
    displaySpan(values2);
    
    // Display std::vector using span
    std::cout << std::format("Print std:vector array via span\n") << std::endl;
    displaySpan(values3);
    
    
    //Modify containers with times2
    times2(values1);
    std::cout << std::format("values 1 after times2 using span") << std::endl;
    displaySpan(values1);
    
    std::span mySpan{values1};
    std::cout << "Span first element: " << mySpan.front() << std::endl;
    std::cout << "Span last element: " << mySpan.back() << std::endl;
    
    // Reduce operations can also be used with spans 
    std::cout << "Sum of span elements: " << std::accumulate(std::begin(values1),std::end(values1),0) << std::endl;
    
    //Spans can be used to create sub-views of the a container
    std::cout << "First 3 elements of a span: " <<  std::endl;
    displaySpan(mySpan.first(3)); 
    std::cout << "Last 3 elements of a span: " <<   std::endl;
    displaySpan(mySpan.last(3)); 
    std::cout << "Middle (sub-span) 3 elements of a span: " << std::endl;
    displaySpan(mySpan.subspan(1,3)); //Look out with boundaries. 
    
    //IMPORTANT! subspans can also modify the original data
    times2(mySpan.subspan(1,3));
    displaySpan(mySpan);
    
    //Access spans elements with [index]
    std::cout << "Position 5 of the Span: " << mySpan[4] << std::endl;
    
    
    
}
