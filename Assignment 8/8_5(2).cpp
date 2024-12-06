#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void LAB();
void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,300,stdin);
	char bv[] = "";
	if (myStrcmp(s, bv) == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

//Dem so ki tu trong mang
int myStrlen(char s[], int k) {
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++) 
	{
		if (s[i] == '\n') { s[i] = '\0'; break; }
		cnt++;
	}

	return cnt;
}

//so sanh s1 va s2, giong nhau -> 0, khac nhau -> 1
int myStrcmp(char s1[], char s2[]) {

	if (myStrlen(s1, 0) == myStrlen(s2, 0)) {

		for (int i = 0; i < myStrlen(s1, 0); i++) {
			if (s1[i] != s2[i]) return 1;
		}
	} 
	else return 1;

	return 0;
}

//copy chuoi s1 sang s. Copy tu vi tri vt, copy k ky tu
void myStrcpy(char s[], int vt, char s1[], int k) {
	int cnt = 0;

	for (int i = vt; i < vt + k; i++) {
		s[cnt] = s1[i];
		cnt++;
	}

	s[cnt] = '\0';
}

//dem tieng

// void LAB()
// {
// 	char s[MAX], t[MAX]; cin >> s;
// 	myStrcpy(t, 0, s, 2);
// 	cout << t;
// }

void DemTieng(char s1[]) {
	char a[MAX][MAX];

	int c[MAX];
	for (int i = 0; i < MAX; i++) c[i] = 1; 

	int cntA = 0;

	for (int i = 0; s1[i] != '\0'; i++) {
		char temp[MAX] = "";

		int j = 0;
		while (s1[i] != ' ') {

			temp[j] = s1[i];

			j++; i++;

			if (s1[i] == '\0') break;
		}

		temp[j] = '\0'; 

		myStrcpy(a[cntA], 0, temp, myStrlen(temp, 0));

		cntA++;
	}

	for (int i = 0; i < cntA - 1; i++) {
		for (int j = i + 1; j < cntA; j++) {
			if (myStrcmp(a[i], a[j]) == 0 ) {
				myStrcpy(a[j], 0, "", 0); 

				c[i]++;
			}
		}
	}

	for (int i = 0; i < cntA; i++) {
		if (myStrcmp(a[i], "") == 1) {
			cout << a[i] << ": " << c[i] << endl; // +1 cái cú đầu 
		}
	}

}