#include <bits/stdc++.h>
using namespace std;

//de quy
int Fibo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	
	return Fibo(n - 2) + Fibo(n - 1);
}

//thong thuong
int fb(int n) {
	int fb[35];
	fb[0] = 0; fb[1] = 1;
	
	for (int i = 2; i <= 30; i++) {
		fb[i] = fb[i - 1] + fb[i - 2];
	}
	
	return fb[n];
}

int main() {
	srand(time(NULL));
	
	int cnt = 0;
	
	while (1) {
		int n = 1 + rand() % 50;
		
		if (Fibo(n) != fb(n)) {
			cout << Fibo(n) << " " << fb(n) << endl;
			cout << "NO" << endl;
			break;
		}
		
		cout << ++cnt << "\n";
	}
	
	return 0;
}