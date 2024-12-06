/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

#include <math.h>

int input(int& n) {
	cin >> n;
	return n;
}

int input() {
	int m; cin >> m;
	return m;
}

int gcd(int m, int n) {
	int mi = min(m, n);
	int mx = 0;
	for (int i = 1; i <= mi; i++) {
		if (m % i == 0 && n % i == 0) mx = max(i, mx);
	}
	return mx;
}

int main() {
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
