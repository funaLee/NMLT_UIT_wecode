#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input (int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

int the_same_digit(int a) {
	if (a < 10) return 0;

	int check = 1;

	int x = a % 10; 

	while (a != 0) {
		if (x != a % 10) {
			check = 0;
			break;
		}

		a /= 10;
	}

	return check;
}

void Fun (int a[], int n) {
	int cnt = 0;
	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (the_same_digit(a[i])) {
			flag = 1;
			cnt++;
		}
	}

	if (flag) cout << cnt;
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



