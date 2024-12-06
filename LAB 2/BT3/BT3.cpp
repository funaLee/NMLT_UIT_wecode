#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int gt=1;
	if ( n%2==0 ){
		for (int i=2; i<=n; i+=2)
			gt *=i;
	}
	else {
		for (int i=1; i<=n; i+=2)
			gt *=i;
	}
	cout<<gt;
	
	return 0;
}