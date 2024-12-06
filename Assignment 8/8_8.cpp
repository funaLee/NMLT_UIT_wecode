#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,300,stdin);
	fgets(s1,300,stdin);
	int k;
	cin >> k;
	if (k < 0 || k > myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
		ChenChuoiTaiVitriK(s, s1, k);
	}
}

int myStrlen(char s[], int k) {
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '\n') { s[i] = '\0'; break; }

		cnt++;
	}

	return cnt;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k) 
{
	for (int i = 0; s[i] != '\0'; i++) 
	{
		if (i < k) {
            cout << s[i];
        }
        else if (i == k) {
            for (int j = 0; j < myStrlen(s1, 0); j++)
                cout << s1[j];
            cout << s[i];
        }
        else
            cout << s[i];
	}

	if (k == myStrlen(s, 0)) {
		for (int i = 0; i < myStrlen(s1, 0); i++) {
			cout << s1[i];
		}
	}
}