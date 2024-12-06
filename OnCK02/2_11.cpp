#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input (int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int dao_nguoc (int a, int b) {
	int x = 0;

	while (b % 10 == 0) b /= 10;

	while (a != 0) {
		x *= 10;
		x += (a % 10);
		a /= 10;
	}

	if (x == b) return 1;
	else return 0;
}

void Fun (int a[], int n) {
	int flag = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (dao_nguoc(a[i], a[j])) {
				cout << "{" << min(a[i], a[j]) << ", " << max(a[i], a[j]) << "}" << endl;

				flag = 1;
			}

		}
	}

	if (!flag) cout << "No Find";
}

int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n); 
    return 0;
}



