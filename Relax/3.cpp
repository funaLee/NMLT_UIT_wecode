#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	//He phuong trinh:
	// ga + cho = 36 (x)
	// 2ga + 4cho = 100 (y)
	
	int D = 1*4 - 2*1;
	int Dx = x*4 - y*1;
	int Dy = 1*y - 2*x;
	
	cout << Dx / D << " "<< Dy / D << endl;
	
	return 0;
}