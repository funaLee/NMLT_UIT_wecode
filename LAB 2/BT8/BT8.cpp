#include <iostream>
#include <math.h>

using namespace std;

double giaithua(int x);

double giaithua(int x){
	if (x<=1){
		return 1;
	}
	else return x*giaithua(x-1);
}

int main(){
	int x;
	cin>>x;
	
	double s=0;
	for (int i=0; i<=100; i++){
		int a=2*i+1;
		s += ((pow(-1,i)*pow(x,a)) / giaithua(a));
	}
	cout<<s<<endl;
	
	cout<<sin(x)<<endl;
	cout<<sin(x)-s<<endl; //tinh sai so
	
	return 0;
}