// https://www.codechef.com/problems/QUALIFY

#include <iostream>
using namespace std;

int main() {
	int t,x,a,b;
	cin >> t;
	while (t--) {
	    cin >> x >> a >> b;
	    x -= a +2*b;
	    x <= 0 ? cout << "Qualify\n" : cout << "NotQualify\n";
	}
	return 0;
}
