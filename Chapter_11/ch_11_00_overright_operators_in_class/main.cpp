#include <iostream>
#include "vtime.h"

int main() {
    
	Vtime time1 = Vtime(2, 15);
    time1.show();
    Vtime time2 = Vtime(4, 32);
    time2.show();
    
    time1.addHour(3);
    time1.show();
    time2.addMinute(27);
    time2.show();
    
    Vtime time3 = time1 + time2;
    time3.show();
    
    Vtime time4 = time3.operator +(time1);
    time4.show();
    
    std::cout << std::endl;
    
    time4 = time2 - time4;
    time4.show();
    
    time2 = time2 * 2;
    time2.show();
    
    time1.reset();
    time1.show();
    
	return 0;
}
