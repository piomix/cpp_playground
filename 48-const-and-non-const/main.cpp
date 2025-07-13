#include <format>
#include <iostream>
#include <string>
#include "Time.h"

int main () {
    Time wakeUp{5,45,0};
    const Time noon{12,0,0};
                                // OBJECT      MEMBER
    wakeUp.setHour(17);         // non-const   non-const -> Compilation OK
    noon.setHour(12);           // const       non-const -> Compilation Error
    wakeUp.getHour();           // non-const   const -> Compilation OK
    noon.getMinute();           // const       const -> Compilation OK
    noon.to24HourString();      // const       const -> Compilation OK
    noon.to12HourString();      // const       non-const -> Compilation Error
    
}