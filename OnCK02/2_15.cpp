#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input (int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

int snt (int a) {
	if (a <= 1) return 0;

	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) return 0;
	}

	return 1;
}

void Fun (int a[], int n) {
	int mi_snt = 1e9; int mx_snt;

	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (snt(a[i]) && mi_snt > a[i]) {
			mi_snt = a[i];

			flag = 1;
		}
		else if (snt(a[i]) && mx_snt < a[i]) {
			mx_snt = a[i];

			flag = 1;
		}
	}

	if (flag) {
		cout << mi_snt << " " << mx_snt << endl;
	}
	else cout << "No";
}

int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n); 
    return 0;
}



