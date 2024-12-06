#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, r;
	long long n;
	cin >> d >> r >> n;
	
	if (n == 1) cout << (d+r)*2 << endl;
	else {
		cout << (d+r)*2*n - (n-1)*(d*2) << endl;
	}
	
	return 0;
}