#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

bool snt(int x) { //kiem tra so nguyen to
	if (x <= 1) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return false;
	}
	return true;
}

void NhapmangSNT(int a[], int& n) { //tao n snt trong mang a
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n ; i++) {
		for (int j = cnt; j < 600; j++) {
			cnt++;
			if (snt(cnt)) {
				a[i] = cnt;
				break;
			}
		}
	}
}

int SoPhanTuChuaY(int a[], int& n, int y) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int x = a[i];
		while (x > 0) {
			if ((x % 10) == y) {
				cnt++;
				break;
			}
			x /= 10;
		}
	}
	return cnt;
}

int main() {
	int a[MAX], n, y;
	
	cin >> y;
	
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;
	
	return 0;
}