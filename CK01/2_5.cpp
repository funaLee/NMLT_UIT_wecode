#include <iostream>
#include <math.h>
using namespace std;

int fun01 (int x) {
	if (x == 0) return 0;
	return (x % 10 % 2 == 1) ? 1 + fun01(x/10) : fun01(x/10);
}

int main() {
	int n; cin >> n;

	cout << fun01(n);

	return 0;
}