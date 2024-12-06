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
	for (int i = 0; i < n; i++) cin >> a[i];

	int m; cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) cin >> b[i];

	int aFlag = 0, bFlag = 0;

	while (aFlag < n && bFlag < m) {
		if (aFlag == n - 1) {
			for (int i = bFlag; i < m; i++) cout << b[i] << " ";
			break;
		}

		if (bFlag == m - 1) {
			for (int i = aFlag; i < n; i++) cout << a[i] << " ";
			break;
		}

		if (a[aFlag] < b[bFlag]) {
			cout << a[aFlag] << " ";

			aFlag++;
		}
		else if (a[aFlag] > b[bFlag]) {
			cout << b[bFlag] << " ";

			bFlag++;
		}
	}

	cout << endl;

	
	return 0;
}