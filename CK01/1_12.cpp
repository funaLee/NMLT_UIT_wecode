#include <bits/stdc++.h>
using namespace std;

int snt(int x) {
	if (x <= 1) return 0;

	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return 0;
	}

	return 1;
}

int main() {
	int x; cin >> x;

	while (x--) 
	{
		if (snt(x)) 
		{
			cout << x;
			break;
		}

		if (x < 2) {
			cout << "No Find";
			break;
		}
	}

	return 0;
}