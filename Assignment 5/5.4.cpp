/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include<iostream>

using namespace std;

bool snt(int x) {
	if (x <= 1) return false;
	for (int i = 2; i*i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int dao(int x) {
	int n = 0;
	while (x > 0) {
		n *= 10;
		n += (x % 10);
		x /= 10;
	}
	return n;
}


int main() {
	int a, b; cin >> a >> b;
	
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		if (snt(i) && snt(dao(i))) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}