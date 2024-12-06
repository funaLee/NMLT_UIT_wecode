/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
Fibo
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x) {
	int fb[35];
	fb[0] = 0; fb[1] = 1;
	for (int i = 2; i <= 30; i++) {
		fb[i] = fb[i-1] + fb[i-2];
	}
	return fb[x];
}
