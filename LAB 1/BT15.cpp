#include <iostream>

using namespace std;

int main(){
	long long x;
	cout<<"So km da di: ";
	cin>>x;
	
	if (x>=0){
		if (x<=1){
			cout<<"So tien can tra: "<< x*15000 << endl;
		}
		else if (x>=2 && x<=5){
			cout<<"So tien can tra: "<< 15000 + (x-1)*13500 << endl;
		}
		else if (x>5 || x<120){
			cout<<"So tien can tra: "<< 15000 + 4*13500 + (x-5)*11000 << endl;
		}
		else {
			cout<<"So tien can tra: "<< (double)(15000 + 4*13500 + (x-5)*11000)*90/100 << endl;
		}
	}
	else cout<<"So km khong hop le.";
	
	return 0;
}