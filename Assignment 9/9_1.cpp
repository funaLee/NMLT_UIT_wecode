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

	for (int i = 1; i < n; i += 2) {
		cout << a[i] << " ";
	}
	cout << endl;

	
	return 0;
}