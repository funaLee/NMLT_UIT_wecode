#include <bits/stdc++.h>
#define LIM 105
using namespace std;

int main() {
	int n; cin >> n;

	int S = 0;

	int cnt = 0, N = n;
	while (N > 0) {
		cnt++;
		N /= 10;
	}

	int a[LIM];

	for (int i = 0; n > 0; i++) {
		a[i] = (n % 10);
		n /= 10;
	}

	int b[LIM]; int j = 0;
	for (int i = cnt - 1; i >= 0; i--) {
		b[j] = a[i];
		j++;
	}

	for (int i = 1; i < cnt; i += 2) {
		S += b[i];
	}

	cout << S << endl;

	return 0;
}