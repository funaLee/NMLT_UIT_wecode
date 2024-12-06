#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int main() {
	int m, n; cin >> m >> n;

	double a[m][n]; 

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}