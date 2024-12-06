#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,300,stdin);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

//Từ khúc này trở lên là template của BichVan

int myStrlen (char s[], int k) {
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++) cnt++;

	return cnt + 1;
}


void Chuanhoa(char s[]) {
	// xóa đầu
	while (s[0] == ' ') {
		for (int i = 0; i < myStrlen(s, 0); i++) {
			s[i] = s[i + 1];
		}
	}

	//xoa cuoi
	while (s[myStrlen(s, 0)] == ' ') {
		s[myStrlen(s, 0)] = '\0';
	}

	//viet thuong het
	int diff = 'a' - 'A';

	for (int i = 0; i < myStrlen(s, 0); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] += diff;
	}

	//Viet hoa dau
	int flag = 1;
	for (int i = 0; i < myStrlen(s, 0); i++) {
		if (flag) {
			s[i] -= diff;
			flag = 0;
		}

		if (s[i] == ' ') flag = 1;
	} 
}

