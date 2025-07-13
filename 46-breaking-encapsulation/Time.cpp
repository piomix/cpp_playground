#include <format>
#include <stdexcept>
#include <string>
#include "Time.h"

void Time::setTime(int hour, int minute, int second){
    
    if(hour < 0 || hour >= 24){
        throw std::invalid_argument {"hour was out of range"};
    }
    if (minute < 0 || minute >= 60) {
        throw std::invalid_argument {"minute was out of range"};  
    }
    if (second < 0 || second >= 60) {
        throw std::invalid_argument {"second was out of range"};
    }
    
    m_hour = hour;
    m_minute = minute;
    m_second = second;
}

int& Time::badSetHour(int hour) { 
    setTime(hour, m_minute, m_second);
    return m_hour;
}

int Time::getHour() const { return m_hour;}


