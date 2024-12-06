#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

float a[LIM][LIM];

int main() {
	int n, m; cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}

	

	for (int j = 0; j < m; j++) {
		float mx = a[0][j]; 

		for (int i = 1; i < n; i++) {
			mx = max(mx, a[i][j]);
		}

		cout << "Gia tri lon nhat tren cot " << j << " la: " << mx << endl;
	}

	
	return 0;
}