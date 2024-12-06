#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrcmp(char s1[MAX], char s2[MAX]) {
	int n1 = myStrlen(s1, 0);
	int n2 = myStrlen(s2, 0);

	for (int i = 0; i < min(n1, n2); i++) {
		if (s1[i] > s2[i]) return 1;
		else if (s1[i] < s2[i]) return -1;
	}

	if (n1 > n2) return 1;
	else if (n1 < n2) return -1;
	else return 0;
}

int myStrlen(char s[], int k) {
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++) cnt++;

	return cnt;
}

int c[MAX] = {0}; //mang danh dau

void DemKyTu(char s[]) {
	int len = myStrlen(s, 0);

	for (int i = 0; i < len; i++) {
		c[(int)s[i]]++;
	}

	for (int i = 0; i < len; i++) {
		if (c[(int)s[i]]) {
			cout << s[i] << ": " << c[(int)s[i]] << endl;
			c[(int)s[i]] = 0;
		}
	}
}