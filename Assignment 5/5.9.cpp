
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main() {
	int x;
	cin >> x;

	if (x < 1 && x > 30) 
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else cout << Fibo(x) << endl;

	return 0;
}

int Fibo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Fibo(n - 2) + Fibo(n - 1);
}