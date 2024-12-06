#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1,300,stdin);
	fgets(s2,300,stdin);
	bool kt = myStrcat(s1, s2);

	if (kt) {
		for (int i = 0; s1[i] != '\0'; i++) {
			cout << s1[i];
		}

		for (int i = 0; s2[i] != '\0'; i++) {
			cout << s2[i];
		}
	}
	else cout << "Khong noi duoc. Khong du bo nho." << endl;

}

int myStrlen(char s[]) {
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '\n') { s[i] = '\0'; break; }

		cnt++;
	}

	return cnt;
}

bool myStrcat(char s1[], char s2[]) {
	int len = myStrlen(s1) + myStrlen(s2);

	if (len > 254) return 0;
	else return 1;
}
