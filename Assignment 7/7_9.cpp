#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	float a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}

	int l, k; cin >> l >> k;
	float b[l][k];
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < k; j++) cin >> b[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << a[i][j] + b[i][j] << " ";

		cout << endl;
	}
	
	return 0;
}