// https://www.codechef.com/problems/BRLADDER

#include <iostream>

int main() {
	int t;
	std::cin >> t;
	long a[t][2];
	
	for (int i=0; i<t; i++) {
	    std::cin >> a[i][0] >> a[i][1];
	}
	for (int i=0; i<t; i++) {
	    long r = a[i][0] - a[i][1];
	    if (r == 2 || r == -2) {
	        std::cout << "YES" << std::endl;
	    } else {
	        if (a[i][0] % 2 == 1) {
	            if (r == -1) {
	                std::cout << "YES" << std::endl;
	            } else {
	                std::cout << "NO" << std::endl;
	            }
	        } else {
	            if (r == 1) {
	                std::cout << "YES" << std::endl;
	            } else {
	                std::cout << "NO" << std::endl;
	            }
	        }
	    }
	    
	}
	
	return 0;
}
