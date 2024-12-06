#include <iostream>
#include <math.h>
using namespace std;

bool fun (int n) {
	if (n <= 0) return 0;

	return (n % 10 % 2 == 0) + fun(n / 10);
}

int main() {
	int n; cin >> n;

	if (fun(n) == 0) cout << "Yes";
	else cout << "No";
}