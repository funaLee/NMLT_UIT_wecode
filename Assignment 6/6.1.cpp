#include <iostream>
using namespace std;
#define MAX 100

int ft(int x) {
	int first = 0;
	while (x > 0) {
		first = x % 10;
		x /= 10;
	}
	return first;
}

void Nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) cin >> a[i];
}

bool isBenford(int a[], int n) {
	int cnt1 = 0, cnt4 = 0;
	for (int i = 0; i < n; i++) {
		if (ft(a[i]) == 1) cnt1++;
		if (ft(a[i]) == 4) cnt4++;
	}
	if (cnt1 == 3 && cnt4 == 1) return true;
	else return false;
}

int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
