#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;

	int m; cin >> m;
	int b[m];
	for (int &x : b) cin >> x;

	int check = 0;

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (b[j] == a[i]) {check = 1; break;}
			else check = 0;
		}

		if (!check) {
			cout << "NO" << endl;
			break;
		}
	}

	if (check) cout << "YES" << endl;
	
	return 0;
}