#include <iostream>
#include <string>

int main() {
  int x;
  std::string s;
  int t; std::cin >> t;

  while (t--) {
    std::cin >> x;
    std::cin >> s;

    int carlsen = 0;
    int chef = 0;
    for (short i=0; i<14; i++) {
      if (s[i] == 'C') {
	carlsen += 2;
      } else if (s[i] == 'N') {
	chef += 2;
      } else {
	carlsen++;
	chef++;
      }
    }

    if (carlsen > chef) {
      std::cout << 60*x << std::endl;
    } else if (carlsen < chef) {
      std::cout << 40*x << std::endl;
    } else {
      std::cout << 55*x << std::endl;
    }
  }
}
