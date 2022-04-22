#include <iostream>

int main() {
  int n, k;
  int t; std::cin >> t;

  while (t--) {
    std::cin >> n;
    std::cin >> k;
    short state = n % 4;

    if (k == 0) {
      if (state == 0) {
	std::cout << "Off\n";
	continue;
      }
      std::cout << "On\n";
    } else {
      if (state == 0) {
	std::cout << "On\n";
	continue;
      }
      std::cout << "Ambiguous\n";
    }
  }
}
