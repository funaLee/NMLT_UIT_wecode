#include <iostream>
using namespace std;
int modulo(int m, int n){
	//
	if (m - n < 0) return m;
	return modulo(m - n, n);
	//
}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}