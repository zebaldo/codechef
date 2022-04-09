// https://www.codechef.com/problems/DIGARR

#include <iostream>
#include <string>

int main() {
    short t, d;
    std::string n;
    
    std::cin >> t;
    
    while (t--) {
        std::cin >> d;
        std::cin >> n;
        
        std::size_t found = n.find_first_of("50");
        found != std::string::npos ? std::cout << "YES\n" : std::cout << "NO\n";
    }
    
    return 0;
}