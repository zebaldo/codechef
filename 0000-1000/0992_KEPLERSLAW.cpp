#include <iostream>

int main() {
  int t; std::cin >> t;
  int t1, t2, r1, r2;

  while (t--) {
    std::cin >> t1 >> t2 >> r1 >> r2;
    
    t1*t1*r2*r2*r2 - t2*t2*r1*r1*r1 == 0 ? std::cout << "YES" : std::cout << "NO";
    std::cout << "\n";
  }
}
