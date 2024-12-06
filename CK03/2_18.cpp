#include <iostream>
#include <math.h>
#define Max 1000
using namespace std;

void Input(int a[], int &n) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void Fun (int a[], int n) {
	int k; cin >> k;
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {
			cout << 
		}
	}

}


void Output(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int a[Max];
    int n;
    Input(a,n);
    Fun(a,n);
    Output(a,n);
    return 0;
}