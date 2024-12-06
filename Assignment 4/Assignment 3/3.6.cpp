#include <bits/stdc++.h>
using namespace std;

long long gt (int x){
	int S = 1;
	for (int i = 1; i <= x; i++){
		S *= i;
	}
	return S;
}

int main(){
	int n, x; cin >> n >> x;
	
	// S1
	double S1 = 0;
	for (int i = 0; i <= n; i++){
		S1 += pow(x, i); 
	}
	cout << S1 << endl;
	
	//S2
	double S2 = 0;
	for (int i = 0; i <= n; i++){
		S2 += pow(x, i*2); 
	}
	cout << S2 << endl;
	
	//S3
	double S3 = 0;
	for (int i = 0; i <= n; i++){
		S3 += (pow(x, i))/gt(i);
	}
	cout << S3 << endl;
}