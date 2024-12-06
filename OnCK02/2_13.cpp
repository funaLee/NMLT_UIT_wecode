#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input (int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

int the_same_digit (int a, int b) {
	int A[Max]; int cntA = 0;
	int B[Max]; int cntB = 0;

	while (a != 0) {
		A[cntA] = (a % 10);
		a /= 10;
		cntA++;
	}

	while (b != 0) {
		B[cntB] = (b % 10);
		b /= 10;
		cntB++;
	}

	if (cntA != cntB) return 0;

	int flag = 1;

	for (int i = 0; i < cntA; i++) {
		int check = 0;

		for (int j = 0; j < cntB; j++) {
			if (A[i] == B[j]) {
				check = 1;
				B[j] = 1e6;
			}
		}

		if (check) continue;
		else {
			flag = 0; break;
		}
	}

	if (flag) return 1;
	else return 0;

}

void Fun (int a[], int n) {
	int check = 0;
	int cnt = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (the_same_digit(a[i], a[j])) {
				cnt++;

				cout << a[i] << " " << a[j] << endl;

				check = 1;
			}
		}
	}

	if (!check) cout << "No";
	else cout << cnt;
}


int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n); 
    return 0;
}



