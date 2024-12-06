#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	int t;
	if (a>b){
		t=a;
		a=b;
		b=t;
	}
	
	int ucnn=1;
	for (int i=a; i>=1; i--){
		if (a%i==0 && b%i==0){
			ucnn = i;
			break;
		}
	}
	cout<<ucnn<<endl;
	return 0;
}