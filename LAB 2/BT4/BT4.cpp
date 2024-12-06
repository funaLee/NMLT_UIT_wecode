#include <iostream>
#include <math.h>

using namespace std;

//tam giac
int cvtg(int x, int y, int z){
	return x + y + z;
}

double dttg(int x, int y, int z){
	float p = (x+y+z) / 3;
	return sqrt(p*(p-x)*(p-y)*(p-z));
}

//hinh chu nhat
int cvhcn(int x, int y){
	return (x+y)*2;
}

int dthcn(int x, int y){
	return x*y;
}

int main(){
	cout << "Nhap 1: Chu vi tam giac: " << endl;
	cout << "Nhap 2: Dien tich tam giac: " << endl;
	cout << "Nhap 3: Chu vi hinh chu nhat: " << endl;
	cout << "Nhap 4: Dien tich hinh chu nhat: " << endl;
	
	int n; cin>>n;
	
	if (n>=1 && n<=4){
		if (n==1){
			int a, b, c;
			cout << "Nhap 3 canh cua tam giac: ";
			cin >> a >> b >> c;
			cout << cvtg(a, b, c) << endl;
		}
		else if (n==2){
			int a, b, c;
			cout << "Nhap 3 canh cua tam giac: ";
			cin >> a >> b >> c;
			cout << dttg(a, b, c) << endl;
		}
		else if (n==3){
			int a, b;
			cout << "Nhap 2 canh cua hinh chu nhat: ";
			cin >> a >> b;
			cout << cvhcn(a, b) << endl;
		}
		else if (n==4){
			int a, b;
			cout << "Nhap 2 canh cua hinh chu nhat: ";
			cin >> a >> b;
			cout << dthcn(a,b) << endl;
		}
	}
	else cout << "So nhap khong hop le." << endl;
	
	return 0;
	
}