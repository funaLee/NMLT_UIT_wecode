#include <iostream>
#include <math.h>
using namespace std;

int fun (int n) {
	int mi = (n % 10);

	if (n < 10) return n;
	return min(mi, fun(n / 10));
}

int main() {
	int n; cin >> n;

	cout << n << " - " << fun(n);

	return 0;
}