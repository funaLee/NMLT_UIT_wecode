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

	int mx = -1e6, cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (mx == a[i]) cnt++;
		else if (mx < a[i]) {
			mx = a[i];
			cnt = 1;
		}
	}

	cout << mx << "\n" << cnt;
	
	return 0;
}