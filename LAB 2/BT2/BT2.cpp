#include <iostream>

using namespace std;

int gt(int x);

int gt(int x){
	if (x<=1){
		return 1;
	}
	else {
		return x * gt(x-1);
	}
}

int main(){
	int n; cin>>n;
	cout<<gt(n);
	
	return 0;
}