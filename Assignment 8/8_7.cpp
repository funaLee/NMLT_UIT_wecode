
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,300,stdin);

	if (myStrcmp(s, "") == 0) {
		cout << "Chuoi rong." << endl;
	}
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k) {
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++) cnt++;

	return cnt;
}


int myStrcmp(char s1[], char s2[]) {
	if (myStrlen(s1, 0) != myStrlen(s2, 0)) return 1;
	else {
		for (int i = 0; i < myStrlen(s1, 0); i++) {
			if (s1[i] != s2[i]) return 1;
		}
	}

	return 0;
}

void StringReverse(char st[]) {
	char ss[MAX]; int k = 0;

	for (int i = myStrlen(st, 0) - 1; i >= 0; i--) {
		for
	}

	for (int i = 0; i < k; i++) {
		st[i] = ss[i];
	}
}




