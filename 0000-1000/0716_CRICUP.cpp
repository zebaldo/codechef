// https://www.codechef.com/problems/CRICUP

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,x,y,d;
	cin >> t;
	while (t--) {
	    cin >> x >> y >> d;
	    abs(x-y) <= d ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
