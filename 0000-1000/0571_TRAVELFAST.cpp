// https://www.codechef.com/problems/TRAVELFAST

#include <iostream>

int main() {
    short t, bike, car;
    
    std::cin >> t;
    
    while (t--) {
        std::cin >> bike;
        std::cin >> car;
        
        if (bike == car) {
            std::cout << "SAME\n";
        } else {
            bike > car ? std::cout << "CAR\n" : std::cout << "BIKE\n";
        }
    }
    
    return 0;
}
