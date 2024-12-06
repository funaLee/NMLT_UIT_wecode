
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

int myStrlen(char s[], int k)
{
	int cnt = 0;

	for (int i = k; s[i] != '\0'; i++)
		cnt++;

	return cnt;
}

void Chuanhoa(char s[])
{
	// loai bo ki tu /n

	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++)
		cnt++;

	cnt--; s[cnt] = '\0'; 


	// template doi hang 

	auto dec = [s](int k) {
        for (int i = k; s[i] != '\0'; i++) {
            s[i] = s[i + 1];
        }
    };


	// xoa hang dau

	while (s[0] == ' ') dec(0);


	// xoa hang cuoi

	int len = myStrlen(s, 0);

	for (int i = len - 1; i > 0; i--)
		if (s[i] != ' ') 
		{
			s[i + 1] = '\0';
			break;
		}


	// xoa hang giua 

	for (int i = 1; s[i] != '\0'; i++)
		while (s[i] == ' ' && s[i + 1] == ' ') dec(i + 1);

	// viet thuong het

	for (int i = 0; s[i] != '\0'; i++)
		if (65 <= s[i] && s[i] <= 90) s[i] += 32;


	// viet hoa chu cai dau

	if (97 <= s[0] && s[0] <= 122) s[0] -= 32;

	for (int i = 1; s[i] != '\0'; i++)
		if (s[i - 1] == ' ' && 97 <= s[i] && s[i] <= 122) s[i] -= 32;


}