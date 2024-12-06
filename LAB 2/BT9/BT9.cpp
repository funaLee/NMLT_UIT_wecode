#include <iostream>
#include <math.h>

using namespace std;

int giaithua (int x);

int giaithua (int x){
	if (x<=1){
		return 1;
	} else return x*giaithua(x-1);
}

int main(){
	int x; cin>>x;
	double c; cin>>c;
	
	double s=1;
	for(int i=1; i<=10; i++){
		int a=2*i;
		s += ((pow(-1,i)*pow(x,a)) / giaithua(a));
	}
	
	if ((cos(x)-s)<=c){
		cout<<s<<endl;
	} else cout<<"INCORRECT!"<<endl;
	
	return 0;
	
}