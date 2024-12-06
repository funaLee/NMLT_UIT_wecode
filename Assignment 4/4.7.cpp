/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

#include <math.h>
#include <iomanip>
using namespace std;

double calculate(int n) {
	double S = 0;
	for (int i = 1; i <= n; i++) {
		S += i;
		S = sqrt(S);
	}
	return S;
}


int main() {
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}
