#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main() {
	char a[MAX];

	cin.getline(a, sizeof(a));

	bool check = true;
	for (char i : a) {
		if (i == '\0') break;

		if (isdigit(i)) {
			check = false;
			break;
		}
	}

	if (check) cout << a << endl;
	else cout << "CHUOI KHONG HOP LE." << endl;

	return 0;
}