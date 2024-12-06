#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long T = 1;
	if (n % 2 == 0) {
		for (long long i = 2; i <= n; i += 2) T *= i;
	}
	else {
		for (long long i = 1; i <= n; i += 2) T *= i;
	}
	cout << T << endl;
	
	return 0;
}