#include <iostream>

int main() {
  int t; std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;
    int a[n][n];
    int trace = 0;

    for (short i=0; i<n; i++) {
      for (short j=0; j<n; j++) {
	std::cin >> a[i][j];
      }
    }

    for (short i=n-1; i>=0; i--) {
      int sum = 0;
      for (short j=0; j<n-i; j++) {
	sum += a[i+j][j];
      }
      if (sum > trace) trace = sum;
    }

    for (short j=1; j<n; j++) {
      int sum = 0;
      for (short i=0; i<n-j; i++) {
	sum += a[i][i+j];
      }
      if (sum > trace) trace = sum;
    }

    std::cout << trace << std::endl;
  }
}
