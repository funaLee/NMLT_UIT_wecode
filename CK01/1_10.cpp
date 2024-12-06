#include <iostream>
using namespace std;

int main()
{	
	int n; cin >> n;

	int N = n;
	int mi = (n % 10); 

	while (N != 0) {
		mi = min(mi, N % 10);
		N /= 10;
	}

	
	
	cout << n << " - " << mi << endl;


    return 0;
}


