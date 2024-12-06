#include <iostream>
#include <iomanip>
using namespace std;

long long luythua(int x, int n) { //tinh luy thua x^n
	long long T = 1;
	while (n > 0) {
		T *= x;
		n--;
	}
	return T;
}

long long giaithua(int n) {
	long long T = 1;
	while (n > 0) {
		T *= n;
		n--;
	}
	return T;
}

int main() {
	double x; cin >> x;
	
	double sinx = 0; //kq sin hien tai
	double sinc = 0; //kq sin sau do
	double precision = 1; //sai so
	int cnt = 1;
	
	while (precision > 0.00001) {
		sinx += luythua(-1, cnt) * ( (double)luythua(x, 2*cnt + 1) / giaithua(2*cnt + 1) );
		cnt++;
		sinc = sinx + ( luythua(-1, cnt) * ( (double)luythua(x, 2*cnt + 1) / giaithua(2*cnt + 1) ) );
		precision = abs(sinx - sinc);
	} 
	
	cout << fixed << setprecision(4) << sinx << endl;
	
	return 0;
}