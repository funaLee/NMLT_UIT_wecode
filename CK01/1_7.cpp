#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n; cin >> n;

	int m = 0; int N = n;

	while (N != 0) {
		m *= 10;
		m += (N % 10);
		N /= 10;
	}

	if (n <= 0) cout << "N khong hop le" << endl;
	else {
		if (n > m) cout << n << " > " << m << endl;
		else if (n < m) cout << n << " < " << m << endl;
		else cout << n << " = " << m << endl;
 	}

    return 0;
}


