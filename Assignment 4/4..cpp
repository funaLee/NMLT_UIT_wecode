#include <bits/stdc++.h>
using namespace std;

bool uocsochan (int n, int x) {
	if (x % 2 == 0 && n % x == 0) return true;
	else return false;
}

int main() {
	int n; cin >> n;
	
	int S = 0;
	bool check = false;
	for (int i = 2; i <= n; i += 2) {
		if (uocsochan(n, i)) {
			S += i;
			check = true;
		}
	}
	if (check) cout << S << endl;
	else cout << "-1" << endl;
	
	return 0;
}