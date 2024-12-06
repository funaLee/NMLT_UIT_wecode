#include <iostream>
using namespace std;

#include <math.h>

int sum_all_square (int n) {
	int S = 0;
	for (int i = 1; i <= n; i++) {
		if ((int)sqrt(i)*(int)sqrt(i) == i && n % i == 0) {
			S += i;
		}
	}
	return S;
}

int main() {
    int n;
    cin >> n;
    cout << sum_all_square(n);
}

