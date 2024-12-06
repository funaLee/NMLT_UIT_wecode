#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	int a[n][m];

	int mi = 1e6;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			mi = min(mi, a[i][j]);
		}
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != mi) res += (a[i][j] - mi);
		}
	}

	cout << res << endl;
	

	return 0;
}