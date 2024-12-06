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

	int c[n + m];

	int aFlag = 0, bFlag = 0;
	int cFlag = 0; //chi so cua c

	while (aFlag != n || bFlag != m) {
		if (a[aFlag] > b[bFlag]) {
			c[cFlag] = b[bFlag];
			cFlag++; bFlag ++;
		}
		else if (a[aFlag] < b[bFlag]) {
			c[cFlag] = a[aFlag];
			cFlag++; aFlag++;
		}
	}

	if (aFlag == n) {
		for (int i = bFlag; i < m; i++) {
			c[cFlag] = b[i];
			cFlag++;
		}
	}
	else if (b[bFlag] == m) {
		for (int i = aFlag; i < n; i++) {
			c[cFlag] = a[i];
			cFlag++;
		}
	}

	for (int i = 0; i < cFlag; i++) cout << c[i] << " ";

	cout << endl;
	
	return 0;
}
