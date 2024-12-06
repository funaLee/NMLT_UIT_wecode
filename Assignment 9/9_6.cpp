#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;	

void ins (char *s, int n) {
	for (int i = strlen(s) + 1; i > n; i--) {
		s[i] = s[i - 1];
	}
}

int main() {

	char s[LIM];
	fgets(s, LIM, stdin);
	s[strlen(s) - 1] = '\0';

	char s1[LIM];
	fgets(s1, LIM, stdin);
	s1[strlen(s1) - 1] = '\0';

	int k; cin >> k;

	if (k < 0 || k > (int)strlen(s)) {
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	} 
	else {
		int cnt = 0;

		for (int i = k; cnt < (int)strlen(s1); i++) {
			ins(s, i);

			s[i] = s1[cnt];
			cnt++;
		}

		puts(s);
	}

	

	
	return 0;
}