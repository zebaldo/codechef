// https://www.codechef.com/problems/BATTERYLOW

#include <iostream>
using namespace std;

int main() {
	int x,t; cin >> t;
	while (t--) {
	    cin >> x;
	    x <= 15 ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
