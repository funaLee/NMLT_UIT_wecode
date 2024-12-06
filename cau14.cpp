#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y; cin >> x >> y;

	int max_S = 0;

	for (int i = 1; i < x; i++) {
		int a = i; 

		int b = a - x + y;

		int h = (x - a) / 2;

		if (2*h + a != x || 2*h + b != y) {
			continue;
		}
		else {
			max_S = max(max_S, a*b*h);
		}
	}

	cout << max_S;

	return 0;
	

	return 0;
}