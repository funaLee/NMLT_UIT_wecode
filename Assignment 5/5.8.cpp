#include <iostream>
using namespace std;

int S = 0;
int reverse(int n) {
	if (n > 0 && n < 10) return S * 10 + n;
	else {
		S *= 10;
		S += (n % 10);
		return reverse(n / 10);
	}
}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
