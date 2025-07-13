#include <iostream>
#include <vector>
#include <format>
#include <iostream>
#include <numeric>
#include <rapidcsv.h>
#include <cmath>
#include <string>
#include <ranges>

int main(){
    
    // Load Titanic data set
        rapidcsv::Document titanic{"titanic3.csv",
            rapidcsv::LabelParams{}, // If want to define the file header explictly
            rapidcsv::SeparatorParams{}, // Customize the separator character
            rapidcsv::ConverterParams{true}}; // Enable data conversion to a default when the column value is missing (Missing data)
            
            // Extract the data in Titanic data in vectors
            auto survived{titanic.GetColumn<int>("survived")};
            auto sex{titanic.GetColumn<std::string>("sex")};
            auto age{titanic.GetColumn<double>("age")};
            auto pclass{titanic.GetColumn<int>("pclass")};
            
            // Data set explorarion
            // Display the first 5 rows
            std::cout << std::format("First 5 rows:\n {:<10}{:<8}{:<6}{}\n",
                "survided", "sex", "age", "class");
            for(size_t i{0}; i < 5; ++i){
                std::cout << std::format("{:<10}{:<8}{:<6.1f}{}\n",
                    survived.at(i), sex.at(i), age.at(i), pclass.at(i));
            }
            
            // Display the last 5 rows
            std::cout << std::format("Last 5 rows:\n {:<10}{:<8}{:<6}{}\n",
                "survided", "sex", "age", "class");
            const auto count{titanic.GetRowCount()};
            
              for(size_t i{count - 5}; i < count; ++i){
                std::cout << std::format("{:<10}{:<8}{:<6.1f}{}\n",
                    survived.at(i), sex.at(i), age.at(i), pclass.at(i));
            }
            
            
            // Now, clean some data on the age column which is NaN (Not a Number) using C++20 ranges
            auto removeNaN{age |
                std::views::filter([](const auto& x){ return !std::isnan(x);})};
                
            std::vector<double> cleanAge{std::begin(removeNaN), std::end(removeNaN)};
            
            // Some descriptive statistics for clean ages....
            
            std::sort(std::begin(cleanAge), std::end(cleanAge));
            size_t size{cleanAge.size()};
            double median{};
            
            // Median requires to know if the data set is odd or even
            if(size % 2 ==0){
                // Median for even dataset
                median = (cleanAge.at(size / 2 -1)+  cleanAge.at(size / 2)) / 2;
            }
            else{
                // Median for odd dataset
                median = cleanAge.at(size /2);
            }
            
            std::cout << "Descriptive analytics for age column:\n"
                << std::format("\nPassangers with age data: {}\n", size)
                << std::format("Average age: {:.2f}\n", 
                   std::accumulate(std::begin(cleanAge), std::end(cleanAge), 0.0) / size)
                << std::format("Minimum age: {:.2f}\n", cleanAge.front())
                << std::format("Maximun age: {:.2f}\n", cleanAge.back())
                << std::format("Median age: {:.2f}\n", median);
            
            // Passanger counts by class
            auto countClass{
                [](const auto & column, const int classNumber){
                    return std::ranges::count_if(column,
                        [classNumber] (int x){return classNumber == x;});
                }
            };
            
            // Passanger classes
            constexpr int firstClass{1};
            constexpr int secondClass{2};
            constexpr int thirdClass{3};
            
            const auto firstClassCount{countClass(pclass, firstClass)};
            const auto secondClassCount{countClass(pclass, secondClass)};
            const auto thirdClassCount{countClass(pclass, thirdClass)};
            
            std::cout << "\nPassangers per class:\n"
                << std::format("First class: {:<6}\n", firstClassCount)
                << std::format("Second class: {:<6}\n", secondClassCount)
                << std::format("Third class: {:<6}\n\n", thirdClassCount);
                
            // How many people survived ?
            const auto survivorCount{std::ranges::count_if(survived, [](auto x){return x;})};
            
            std::cout << std::format("Survived count: {} Died count: {}\n",
                    survivorCount, survived.size()- survivorCount);
                    
            std::cout << std::format("Survivor percentage {:.2f}\n",
                   100.0 * survivorCount / survived.size());
                   
            int survived1st{0};
            int survived2nd{0};
            int survived3rd{0};
            int survivedMales{0};
            int survivedFemales{0};
            
            for(size_t i{0}; i < survived.size(); ++i){
                if(survived.at(i)){
                    sex.at(i) == "female" ? ++survivedFemales : ++survivedMales;
                    
                    if(firstClass == pclass.at(i)){
                        ++survived1st;
                    }
                    else if (secondClass == pclass.at(i)){
                        ++survived2nd;
                    }
                    else {
                        ++survived3rd;
                    }
                }
                    
            }
            
            std::cout << "\nSurvival Percentages:\n"
                << std::format("First class survivor percentage: {:.2f}\n", 
                    100.0 * survived1st / survivorCount)
                << std::format("Second class survivor percentage: {:.2f}\n", 
                    100.0 * survived2nd / survivorCount)
                << std::format("Third class survivor percentage: {:.2f}\n", 
                    100.0 * survived3rd / survivorCount)
                << std::format("\nMale survivor percentage: {:.2f}\n",
                    100.0 * survivedMales / survivorCount)
                << std::format("Female survivor percentage: {:.2f}\n",
                    100.0 * survivedFemales / survivorCount);
}