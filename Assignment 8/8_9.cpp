#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1,300,stdin);
	fgets(s2,300,stdin);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrlen(char s[]) {
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) cnt++;

	return cnt;
}

int myStrcmp(char s1[], char s2[]) {
	if (myStrlen(s1) != myStrlen(s2)) {
		if (myStrlen(s1) < myStrlen(s2)) return -1;
		else return 1;
	}
	else {
		for (int i = 0; i < myStrlen(s1); i++) {
			if (s1[i] < s2[i]) return -1;
			else if (s1[i] > s2[i]) return 1;
		}
	}

	return 0;
}

