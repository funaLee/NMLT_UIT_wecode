#include <iostream>
#include <string.h>
#define Max 1000
using namespace std;

char s[Max];

int c[Max] = 0;

int main() {
	get(s);

	for (int i = 0; s[i] != '\0'; i++) {
		int cnt = 0;

		for (int j = 0; s[i] != ' '; i++) {
			c[cnt]++;
		}

		cnt++;
	}

	int mx = 0; int id = 0;
	for (int i = 0; i < length(c); i++) {
		if (mx != c[i]) {
			mx = max(mx, c[i]);
			id = i;
		}
	}

	for (int i = 0; s[i] != '\0'; i++) {
		for ()
	}
}