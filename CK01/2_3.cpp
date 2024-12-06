#include <iostream>
#include <math.h>
using namespace std;

int fun01 (int x) {
	if (x == 0) return 0;
	return 1 + fun01(x/10);
}

int fun (int n) {
	if (n == 0) return 0;
	if (fun01(n) % 2 == 1) return (n % 10) + fun(n / 10);
	else return fun(n / 10);
}

int main() {
	int n; cin >> n;

	cout << fun(n);

	return 0;
}