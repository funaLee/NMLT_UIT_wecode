#include <iostream>
using namespace std;

int input(int& a) {
	cin >> a;
	return a;
}

int TongChuSo(int a) {
	int S = 0;
	while (a > 0) {
		S += a % 10;
		a /= 10;
	}
	return S;
}

int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
