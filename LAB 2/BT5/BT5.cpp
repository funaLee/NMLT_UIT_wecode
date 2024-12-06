#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	bool kt;
	if (n<=1){
		kt=false;
	}
	else if (n==2){
		kt=true;
	}
	else {
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0){
				kt=false;
				break;
			}
			else kt=true;
		}
	}
	
	if (kt){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	
	return 0;
}