#include <bits/stdc++.h>
using namespace std;

int main(){
	double x, y, z;
	cin >> x >> y >> z;
	
	if (x >= (y + z) || y >= (x + z) || z >= (x + y)) cout << "Khong phai tam giac";
	else {
		double p = (x + y + z) / 2;
		double S = sqrt(p*(p-x)*(p-y)*(p-z));
		if ( x == y == z){
			cout << "Tam giac deu, ";
			cout << "dien tich = " << fixed << setprecision(2) << S << endl;
		}
		else if ( (x == y && x != z) || (y == z && y != x) || (z == x && z != y)){
			cout << "Tam giac can, ";
			cout << "dien tich = " << fixed << setprecision(2) << S << endl;
		}
		else if ( (x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == x*x + y*y)){
			cout << "Tam giac vuong, ";
			cout << "dien tich = " << fixed << setprecision(2) << S << endl;
		}
		else {
			cout << "Tam giac thuong, ";
			cout << "dien tich = " << fixed << setprecision(2) << S << endl;
		}
	}
	return 0;
}