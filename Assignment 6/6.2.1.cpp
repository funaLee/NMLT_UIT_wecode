#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

//

void NhapmangSNT(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int SoPhanTuChuaY(int a[], int n,int y) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == y) cnt++;
	}
	
	return cnt;
	
}

//

int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}