#include <iostream>
#include <iomanip>
using namespace std;

#include <math.h>

double calculate(int n){
	if (n == 1) return 1;
	return sqrt(calculate(n));
}

int main() {
	int n;
	cin >> n;
    cout << fixed << setprecision(2) << calculate(n);
    return 0;
}
