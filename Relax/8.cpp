#include <bits/stdc++.h>
using namespace std;

int scs (long long x) { //dem so cac chu so
	int s = 0;
	while (x > 0) {
		s++;
		x /= 10;
	}
	return s;
}

int main() {
	long long n; cin >> n;
	int cp = 0; // chi phi can son
	for (long long i = 1; i <= n; i++) {
		if (i == 1 || i % 10 == 0 || i == n) {
			cp += scs(i);
		}
	}
	cout << cp << endl;
	
	return 0;
}