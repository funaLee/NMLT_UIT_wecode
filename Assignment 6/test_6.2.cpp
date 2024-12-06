#include <bits/stdc++.h>
using namespace std;

bool snt(int x) { //kiem tra so nguyen to
	if (x <= 1) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return false;
	}
	return true;
}

void mang_snt(int a[], int n) { //tao n snt trong mang a
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

int main() {
	int n; cin >> n;
	int a[n];
	
	mang_snt(a, n);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}