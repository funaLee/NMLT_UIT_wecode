#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input (int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

int count[Max];

void Fun (int a[], int n) {
	for (int i = 0; i < n; i++) {
		count[a[i]]++;
	}

	int mx = 0;

	for (int i = 0; i < n; i++) {
		mx = max(mx, count[a[i]]);
	}

	if (mx == 1) cout << "No Find";
	else {
		for (int i = 0; i < n; i++) {
			if (count[a[i]] == mx) {
				cout << a[i] << " ";
				count[a[i]] = 0;
			}
		}
	}
	cout << endl;
}


int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n); 
    return 0;
}



