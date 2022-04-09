// https://www.codechef.com/problems/FBC

#include <iostream>

int main() {
	short t, x, k;
    
    std::cin >> t;
    
    while (t--) {
        std::cin >> x;
        std::cin >> k;
        
        std::cout << x-k << "\n";
    }
    
    return 0;
}
