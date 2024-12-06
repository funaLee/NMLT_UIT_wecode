#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	double a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}

	double S = 0;
	for (int i = 0; i < n; i++) S += a[i][i];

	cout << S << endl;
	
	return 0;
}