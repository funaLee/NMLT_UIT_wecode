#include <iostream>

using namespace std;

int calc(int n) {
	if (n < 10) return n;

	return calc(n / 10) + (n % 10);
}

void sum(int n, int &s) {
	s = calc(n);
}

void input(int &n) {
	cin >> n;
}

int main() {
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
}
