#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void Input(int a[][Max], int &n, int &m) {
	cin >> n; cin >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}
}

void Fun(int a[][Max], int n, int m) {
	if (m <= 0 || n <= 0) {
		cout << "No Find" << endl;
		return;
	}
	else {
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < m; j++) cout << a[i][j] << " ";
			cout << endl;
		}
	}
}

void Output(int a[][Max], int n, int m) {
	return;
}


int main()
{
    int a[Max][Max];
    int n,m;
    Input(a,n,m);
    Fun(a,n,m);
    Output(a,n,m);
    return 0;
}

