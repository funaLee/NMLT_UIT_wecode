#include <bits/stdc++.h>
using namespace std;

int snt (int x){
	if (x <= 1) return 0;
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n; cin >> n;
	int cnt = 0;
	for (int i = 2; i <= n; i++){
		if (snt(i-2) && snt(i)){
			cout << i-2 << ", " << i << endl;
			cnt++;
		}
	}
	cout << "Tong: " << cnt << " cap so sinh doi < " << n << endl;
	
	return 0;
}