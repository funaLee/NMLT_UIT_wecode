
#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input(int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];

	a[n] = -1e6;
}

int tang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i + 1] > a[i]) return 1;
	}

	return 0;
}

void Fun(int a[], int n) {
	if (tang(a, n)) {
		for (int i = 0; i < n; i++) {

			if (a[i + 1] > a[i]) {
				cout << a[i] << ' ';
			} 

			else cout << a[i] << endl;
		}
	}
	else cout << "No Find";
}

int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n); 
    return 0;
}



