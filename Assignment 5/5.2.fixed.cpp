/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
class
goto
static
math
cmath
sin
###End banned keyword*/
#include <iostream>
#include <iomanip>
using namespace std;

double pow(double x, double k) {
	double p = 1;
	for (int i = 1; i <= k; i++) {
		p *= x;
	}
	return p;
}

int main() {
	double x; cin >> x;
	
	double sum = 0;
	
	for (double i = 0; i <= 30; i++) {
		double t = pow(-1, i) * pow(x, 2*i+1);
		for (double j = 1; j <= 2*i+1; j++) {
			t /= j;
		}
		sum += t;
	}
	cout << fixed << setprecision(4) << sum << endl;
	
	return 0;
}
