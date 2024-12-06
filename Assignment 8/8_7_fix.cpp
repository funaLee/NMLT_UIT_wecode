
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
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}


//So sanh 2 xau s1 va s2. 
//s1 > s2 -> 1
//s1 < s2 -> -1
//s1 = s2 -> 0
int myStrcmp(char s1[], char s2[]) {
	int n1 = myStrlen(s1, 0);
	int n2 = myStrlen(s2, 0);

	if (n1 != n2) {
		if (n1 > n2) return 1;
		else return -1;
	}

	else {
		for (int i = 0; i < n1; i++) {
			if (s1[i] > s2[i]) return 1;
			else if (s1[i] < s2[i]) return -1;
		}
	}

	return 0;
}

int myStrlen(char s[], int k) {
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++) {
		if (s[i] == '\n') { s[i] = '\0'; break; } 
		//neu gap ki tu \n thi dat no la \0 roi break luon
		//de loai bo ki tu \n do fgets tu dong them vao

		cnt++;
	}

	return cnt;
}

void StringReverse(char st[]) {
	int beg = myStrlen(st, 0);

	char s[100]; int cnt = 0;

	for (int i = myStrlen(st, 0) - 1; i >= 0; i--) {
		if (st[i] == ' ') {
			for (int j = i + 1; j < beg; j++) {
				s[cnt] = st[j];
				cnt++;
			}

			beg = i;

			s[cnt] = ' '; cnt++;
		}

		if (i == 0) {
			for (int j = i; j < beg; j++) {
				s[cnt] = st[j];
				cnt++;
			}
		}
	}

	s[cnt] = '\0';

	for (int i = 0; i < myStrlen(st, 0); i++) {
		st[i] = s[i];
	}
}