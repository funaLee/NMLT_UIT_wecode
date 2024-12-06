#include <bits/stdc++.h>
using namespace std;

bool kt_mang(int a[], int n) {
	int dem[1000];
	memset(dem, 0, sizeof(dem));
	
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) return false;
		dem[a[i]]++;
	}
	
	for (int i = 0; i < n; i++) {
		if (dem[a[i]] > 1) return false;
	}
	
	return true;
}

bool kt_con(int a[], int n, int b[], int m) { //dk mang a lon hon mang b
	bool kt = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) kt = true;
		}
		if (!kt) return false;
	}
	return true;
}

int main() {
	int n; cin >> n;
	int a[n]; 
	for (int i = 0; i < n; i++) cin >> a[i];
	
	int m; cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	if (!kt_mang(a, n) || !kt_mang(b, m)) cout << "KHONG hop le";
	else {
		if (n > m && kt_con(a, n, b, m)) cout << "B con A";
		if (m > n && kt_con(b, m, a, n)) cout << "A con B";
	}
	
	return 0;
}