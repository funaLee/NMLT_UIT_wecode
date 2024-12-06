#include <bits/stdc++.h>
using namespace std;

// 1 la tang, 2 la giam, 0 la khong tang khong giam
void Fun(int x) {
	int cnt = 0; //dem so chu so
	int X1 = x;	
	while (X1 > 0) {
		
		X1 /= 10;
		cnt++;
	}
	
	int a[cnt];
	for (int i = 0; i <= cnt; i++) {
		a[i] = x % 10;
		x /= 10;
	}
	
	bool tang = false;
	for (int i = 0; i < cnt; i++) {
		if (a[i] > a[i + 1]) tang = true;
		else {
			tang = false;
			break;
		}
	}
	
	bool giam = false;
	for (int i = 0; i < cnt; i++) {
		if (a[i] < a[i + 1]) giam = true;
		else {
			giam = false;
			break;
		}
	}
	
	if (tang) cout << "Tang";
	else if (giam) cout << "Giam";
	else cout << "Khong tang khong giam";
}

int main() {
	int n;
	cin >> n;
	Fun(n);
	return 0;
}