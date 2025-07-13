
#pragma once //Prevent multiple inclusion
#include <string>


class Time {
    
public:
    
    void setTime(int hour, int minute, int second);
    int getHour() const;
    int& badSetHour(int hour); // dangerous
    
private:
    int m_hour{0}; // 0 - 24
    int m_minute{0}; // 0 -59
    int m_second{0}; // 0 -59
};