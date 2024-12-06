#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 10, S = 1;
	for (int i = 1; i <= n; i*=2){
		S*=i;
	}
	cout << S;
}