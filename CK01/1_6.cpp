#include <iostream>
using namespace std;

int main()
{
	int ng, nc; cin >> ng >> nc;

	int m1 = ng * 4;
	int m2 = ng * 2;

	int res = 0;

	if (nc <= m1) {
		res += (nc) * 6700;
	}
	else if (nc <= m1 + m2) {
		res += m1 * 6700 + (nc - m1) * 12900;
	}
	else {
		res += m1 * 6700 + m2 * 12900 + (nc - m1 - m2) * 14400;
	}

	cout << res << endl;


    return 0;
}


