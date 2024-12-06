#include <iostream>
#include <cmath>
using namespace std;

bool SNT(int x){
	if (x <= 1) return false;
	else {
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0) return false;
		}
	}
	return true;
}

int sum_common_prime(int m, int n){
	int S = 0;
	bool check = false;

	int mi = min(m, n);
	for (int i = 1; i <= sqrt(mi); i++){
		int a = i, b = mi / i;
		
		if (m % a == 0 && n % a == 0 && SNT(a) && a == sqrt(mi)) {
			check = true;
			S += a;
			continue;
		}

		if (m % a == 0 && n % a == 0 && SNT(a)) {
			check = true;
			S += a;
		}

		if (m % b == 0 && n % b == 0 && SNT(b)) {
			check = true;
			S += b;
		}
	}
	
	if (check) return S;
	else return -1;
}            
		
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
