#include <iostream>
#include <math.h>
using namespace std;

int fun(int n) {
	if (n == 0) return 0;
	return ((n % 10 % 2 == 1) ? (n % 10) : 0) + fun(n / 10);
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}


