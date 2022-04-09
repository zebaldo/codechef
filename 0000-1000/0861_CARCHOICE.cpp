// https://www.codechef.com/problems/CARCHOICE

#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,y1,y2;
	cin >> t;
	while (t--) {
	    cin >> x1 >> x2 >> y1 >> y2;
	    float car = (float(x1) / float(y1)) - (float(x2) / float(y2));
	    if (car == float(0)) cout << 0 << endl;
	    else if (car > float(0)) cout << -1 << endl;
	    else cout << 1 << endl;
	}
	return 0;
}
