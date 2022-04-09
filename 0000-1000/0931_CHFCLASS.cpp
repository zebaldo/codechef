// https://www.codechef.com/problems/CHFCLASS

#include <iostream>
using namespace std;

int main() {
	int x,t; cin >> t;
	while (t--) {
	    cin >> x;
	    cout << (x/7)+((x%7)/6) << endl;
	}
	return 0;
}
