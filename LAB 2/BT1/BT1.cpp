#include <iostream>

using namespace std;

int main(){
	for (int i=0; i<=1000; i++){
		if (i<=9){
			cout<<i<<"\t";
		} 
		else if (i>9 && i<=99){
			int a = i/10;
			int b = i%10; 
			if (i==a*a+b*b){
				cout<<i<<"\t";
			}
		}
		else {
			int a = i/100;
			int b = (i-100*a)/10;
			int c = i%10;
			if (i==a*a*a+b*b*b+c*c*c){
				cout<<i<<"\t";
			}
		}
	}
	return 0;
}