
#pragma once //Prevent multiple inclusion
#include <string>


class Time {
    
public:
    // Three argument constructor, setting Time parameters as zero, if no provided
    Time(); // Default no param constructor
    Time(int hour, int minute);
    Time(int hour, int minute, int second); //Three argument constructor
    
    explicit Time(int hour); // Single hour argument constructor !Note: must be explicit

    // Function prototypes 
    Time& setTime(int hour, int minute, int second);
    Time& setHour(int hour);
    Time& setMinute(int minute);
    Time& setSecond(int second);
    
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    
    std::string to24HourString() const;
    std::string to12HourString();
    
private:
    int m_hour{0}; // 0 - 24
    int m_minute{0}; // 0 -59
    int m_second{0}; // 0 -59
};