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

	bool check = true;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];

			if (i == j && a[i][j] != 1) check = false;

			if (i < j && a[i][j] != 0) check = false;
		}
	}

	int flag = 0; int cnt = 0;

	for (int i = 0; i < n - 1; i++) {
		if (a[n - 1][i] != 0) {flag = i; cnt++;}
		if (cnt > 1) check = false;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (j != flag) {
				if (a[i][j] != 0) check = false;
			}
		}
	}
	
	if (check) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}