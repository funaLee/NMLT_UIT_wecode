#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
// void myMemmove(char s[], int vt, int k);
// int myStrstr(char s[], char s1[]);
// void mySubstr(char s[], int b, int count, char ss[]);
// bool myStrcat(char s1[], char s2[]);

int main() {
	char s[MAX];
	fgets(s,300,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

void myStrcpy(char s[], int vt, char s1[], int k){ //copy xau s1 sang xau s. Bat dau tu vi tri vt va copy k tu
	int len1 = 0;

	for (int i = vt; i <= vt + k; i++) {
		s[len1] = s1[i];

		len1++;
	}
}


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

	for (int i = 0; s[i] != '\0'; i++) cnt++;

	return cnt;
}

char a[MAX][MAX]; // mảng 2 chiều để lưu từ

int c[MAX]; //mảng đánh dấu

void DemTieng(char s1[]) {
	//xoa ki tu \n
	int len = myStrlen(s1, 0);

	s1[len - 1] = '\0';

	len = myStrlen(s1, 0);

	//tách từ sang mảng a
	int row = 0;

	char *token = strtok(s1, " ");

	while (token != NULL) {
		myStrcpy(a[row], 0, token, myStrlen(token, 0));

		row++;

		token = strtok(NULL, " ");
	}

	//đếm từ
	for (int i = 0; i < len; i++) {
		int cp = myStrcpy(cp, 0, a[i], myStrlen(a[i], 0));

		int cnt = 1;
		for (int j = j + 1; j < len; j++) {
			if (myStrcmp(cp, a[j]) == 0) {
				cnt++;
				myStrcpy(a[j], "");
			}
		}

		c[i] = cnt;

		cout << cp << ": " << c[i] << endl;
	}

}

