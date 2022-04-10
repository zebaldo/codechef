// https://www.codechef.com/problems/COOK82A

#include <iostream>
#include <string>
using namespace std;

int main() {
	short t; cin >> t;
	
	while (t--) {
	    short real = 0;
	    short barca = 0;
	    short g;
	    string team;
	    for (short i=0; i<4; i++) {
	        g = 0;
	        cin >> team; cin >> g;
	        if (team.compare("RealMadrid") == 0) {
	            real += g;
	        } else if (team.compare("Malaga") == 0) {
	            real -= g;
	        } else if (team.compare("Barcelona") == 0) {
	            barca += g;
	        } else {
	            barca -= g;
	        }
	    }
	    if (real >= 0 || barca <= 0) cout << "RealMadrid\n";
	    else cout << "Barcelona\n";
	}
	return 0;
}
