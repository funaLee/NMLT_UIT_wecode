#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char *s);

int main()
{
	char *s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX-1);

	Chuanhoa(s);

	cout << s << endl;
	return 0;
}

void Chuanhoa(char *s) {
	auto dec =  [s](int k) {
		for (int i = k; s[i] != '\0'; i++) {
			s[i] = s[i + 1];
		}
	};

	//xoa khoang trang dau
	while (s[0] == ' ') dec(0);

	//xoa khoang cuoi
	while (s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';

	//xoa giua
	int flag = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (flag == 0) {
			if (s[i] == ' ') flag = 1;   
			continue;
		}

		while (flag && s[i] == ' ') {
			dec(i);
		}

		if (s[i] != ' ') flag = 0;
	}


	//viet thuong / viet hoa lai
	s[0] = toupper(s[0]);

	for (int i = 1; s[i] != '\0'; i++) {
		if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z')) 
			s[i] = toupper(s[i]);

		if (s[i - 1] != ' ' && (s[i] >= 'A' && s[i] <= 'Z'))
			s[i] = tolower(s[i]);
	}
}