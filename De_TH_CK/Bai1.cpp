#include <bits/stdc++.h>
using namespace std;

int cp (long long x) {
	if ((int)sqrt(x) * (int)sqrt(x) == x) 
		return 1;
	else 
		return 0;
}

int main() {
	int n; cin >> n;

	long long S = 0;

	for (int i = 1; i <= sqrt(n) && (n % i == 0); i++) {
		long long a = i, b = (n / i);

		if (i == sqrt(n) && cp(i)) {
			S += a;
			break;
		}
		else if (cp(a) && cp(b)) {
			S += (a + b);
		}
		else if (cp(a)) {
			S += a;
		}
		else if (cp(b)) {
			S += b;
		}
	}

	cout << S << endl;

	return 0;
}