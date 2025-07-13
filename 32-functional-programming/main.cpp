#include <format>
#include <iostream>
#include <numeric>
#include <ranges>



int multiply(int x, int y) {
   return x * y;
}

double multiply_doubles(double x, double y) {
   return x * y;
}

int main()
{
    constexpr std::array integers{1,2,3,4,5};
    constexpr std::array doubles{1.1,2.2,3.3,4.4,5.5};
    
    std::cout << std::format("{}","Functional programming examples\n");
    
    std::cout << std::format("Product of integers: {}\n", std::accumulate(
        std::begin(integers), std::end(integers), 1, multiply));
    
    std::cout << std::format("Product of doubles: {}\n",std::accumulate(
        std::begin(doubles), std::end(doubles), 1.0, multiply_doubles));
        
    std::cout << std::format("Product of integers using lambdas: {}\n", std::accumulate(
        std::begin(integers), std::end(integers), 1, [](const int& x, const auto& y) //Second parameters uses auto instead of int
            {return x * y;}));
    
    std::cout << std::format("Product of doubles using lambdas: {}\n",std::accumulate(
        std::begin(doubles), std::end(doubles), 1.0, [](const double& x, const auto& y) //Second parameters uses auto instead of double
            {return x * y;}));
            
     // Ranges library        
     // Lambda to display values regardles of the type
   
    auto showValues{
        [](const std::string& message, auto& values){
            std::cout << std::format("{}: ", message);
        
            for(const auto& value : values){
               std::cout << std::format("{} ", value); 
            }
            std::cout << '\n';
        }
    };
    
    // Range generation
    auto values1{std::views::iota(1,11)};
    showValues("Generate Integers 1 to 10", values1);
    
    // Filter elements from the initial range
    auto values2{ values1 | 
        std::views::filter([](const auto& value) { return value % 2 == 0;})};
    showValues("Filter even integers in the range", values2);
    
    // Map a function 
    auto values3{values2 | 
    std::views::transform([](const auto& value) {return value * value;})};
    showValues("Mapping the pow each element in the range", values3);
    
    // Chaining a pipeline of operations
    auto values4{
        values1 | std::views::filter([](const auto& value) { return value % 2 == 0;})
                | std::views::transform([](const auto& value) {return value * value;})};
    showValues("Chaining multiple operations", values4);
    
    //Finally the reduce operation using values4 pipeline
    std::cout << std::format("Sum of the squares in values4: {}\n",
        std::accumulate(std::begin(values4), std::end(values4), 0));
        
    //Ranges can also used with c++ containers like vectors or arrays
    constexpr std::array container{1,2,3,4,5,6,7,8,9,10};
    auto values5 {
        container
            | std::views::filter([](const auto& value) {return value % 2 != 0;})
            | std::views::transform([](const auto& value) {return value * value;})
            };
    showValues("Pipeline using an existing container:", values5);
}
