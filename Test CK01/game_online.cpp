#include <bits/stdc++.h>
using namespace std;

int c[105];

int main() {
	int n; cin >> n;

	int a[n];
	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		int ai = a[i];
		for (int j = i; ai--; j++)	c[j]++;
	}
	
	for (int i = 1; i <= n; i++) {
		if (c[i]) cout << c[i];
	}

	return 0;
}