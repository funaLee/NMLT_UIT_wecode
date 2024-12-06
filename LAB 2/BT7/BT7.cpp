#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[100];
	a[0] = a[1] = 1;
	cout<<a[0]<<"\t"<<a[1]<<"\t";
	
	for (int i=2; (a[i-1]+a[i-2])<=n; i++){
		a[i]=a[i-1]+a[i-2];
		cout<<a[i]<<"\t";
	}
	
	return 0;
}