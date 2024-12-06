#include <iostream>
#include <math.h>
using namespace std;

bool snt(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n; cin >> n;
	int num = n;
	
	while (n <= 0 || n > 50) {
		cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
		cin >> n;
		num = n;
	}
		
	int cnt = 0;
	int S = 0;
	while (n > 0) {
		if (snt(cnt)) {
			S += cnt;
			n--;
		}
		cnt++;
	}
	
	cout << "Tong " << num << " so nguyen to dau tien la: " << S << endl;
	
	return 0;
}
