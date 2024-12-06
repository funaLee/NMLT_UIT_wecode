#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	string s = to_string(n);
	
	bool kt = true;
	int b = 0; //ki tu dau tien
	int e = s.size() - 1; //ki tu cuoi cung
	while (b < e){
		if (s[b] != s[e]){
			kt = false;
			break;
		} 
		b++; e--;
	}
	if (kt) {
		cout << "true" << endl;
	}
	else cout << "false" << endl;
}