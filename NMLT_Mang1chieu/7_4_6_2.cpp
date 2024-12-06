#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int check(int a[]) {
	int c[LIM] = {0};

	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		c[a[i]]++;
	}

	for (int i = 0; i < n; i++) {
		if (c[a[i]] >= 2) return 0;
	}

	return 1;
}

int a[LIM];

int main() {

	while (!check(a)) {
		cout << "Redo: " << endl;
	}

	cout << "DONE" << endl;

	return 0;
}