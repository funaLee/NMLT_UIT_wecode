#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int find(int a[], int n, int b[], int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j]) continue;
		}
		return 0;
	}

	return 1;
}

int main() {
	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int j = 0; j < m; j++) cin >> a[j];

	if (find(a, n, b, m)) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}