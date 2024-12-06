#include <iostream>

using namespace std;

int main(){
	
	for (int n=1; n<=5000; n++){
		int s=0;
		for (int i=1; i<=(n/2); i++){
			if (n%i==0){
				s+=i;
			}
		}
		
		if (s==n)
			cout<<n<<"\t";
	}
	
	return 0;
}