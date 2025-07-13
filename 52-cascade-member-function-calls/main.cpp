#include <format>
#include <iostream>
#include "Time.h"

using namespace std;

int main(){
 Time t{};   
 
 t.setHour(18).setMinute(20).setSecond(22);
 
 std::cout << std::format("24h time: {}\n 12 hour time {}\n", t.to24HourString(), t.to12HourString());
 
 std::cout << std::format("New 12 hour time {}\n", t.setTime(20,20,20).to12HourString());
}