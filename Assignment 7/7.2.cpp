#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int fibo(int n) {
	int fb[35] = {0};

	fb[0] = 0; fb[1] = 1;

	for (int i = 2; i < 35; i++) {
		fb[i] = fb[i - 1] + fb[i - 2];
	}

	return fb[n];
}

void Nhapmang(int a[][MAX], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = fibo(i + j + 1);
		}
	}
}


void Xuatmang(int a[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}