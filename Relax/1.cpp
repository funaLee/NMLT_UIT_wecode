#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int a, k, b;
	long long m, n;
	cin >> a >> k >> b >> m >> n;
	// n cay xanh can chat
	// a la so cay doi I don moi ngay
	// k la ngay ma doi I nghi
	// b la so cay doi II don moi ngay
	// m la ngay ma doi II nghi
	
	int day = 0;
	int x = 0;
	while (n > 0){
		day++;
		x++;
		if (day % k != 0) {
			n -= a;
		}
		if (day % m != 0) {
			n -= b;
		}
	}
	cout << day << endl;
	
	return 0;
}