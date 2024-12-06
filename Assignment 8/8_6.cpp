
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

void myStrcpy(char s[], int vt, char s1[], int k) {
	int cnt = 0;

	for (int i = vt; i <= vt + k; i++) {
		s[cnt] = s1[i];

		cnt++;
	}
}

char* reverse(char a[]) {
	char a_cpy[MAX];

	int cnt = 0;

	for (int i = (int)myStrlen(a, 0) - 1; i >= 0 ; i--) {
		a_cpy[cnt] = a[i]; cnt++;
	}

	a_cpy[cnt] = '\0';

	return a_cpy;
}

char a[MAX][MAX];

void StringReverse(char st[]) {
	int len = myStrlen(st, 0);

	for (int i = 0; i < len; i++) {
		char temp[MAX] = "";

		int cnt = 0, k = i;

		while (st[k] != ' ') {
			temp[cnt] = st[k];

			cnt++; k++;

			if (st[cnt] == '\0') break;
		}

		temp[cnt] = '\0';

		if (st[cnt] == '\0') break;

		char *temp2 = reverse(temp);

		int cnt2 = 0;

		for (int j = i; j < i + cnt; j++) {
			st[j] = temp2[cnt2];

			cnt2++;
		}
	}
}

