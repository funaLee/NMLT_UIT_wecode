#include <bits/stdc++.h>
using namespace std;


int main(){
	int d, m, y;
	cin >> d >> m >> y;
	
	if (y <= 0) cout << "Nam khong hop le.";
	else if ( m>12 || m <0 ) cout << "Thang khong hop le.";
	else {
		if ( (y % 4 == 0) && (y % 100 != 0) && (y % 400 == 0) ){
		//truong hop nam nhuan
			if (m == 2){
				// truong hop thang bang 2
				if ( d > 0 && d <= 29 ){
					cout << d << "/" << m << "/" << y << " la ngay hop le";
				}
				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
			}
			else {
				if ( m==4 || m==6 || m==9 || m==11 ){
					if ( d > 0 && d <= 30 ){
						cout << d << "/" << m << "/" << y << " la ngay hop le";
					}
					else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
				}
				else {
					if ( d > 0 && d <= 31 ){
						cout << d << "/" << m << "/" << y << " la ngay hop le";
					}
					else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
				}
			}
		}
		else {
			//truong hop nam khong nhuan
			if (m == 2){
				// truong hop thang bang 2
				if ( d > 0 && d <= 28 ){
					cout << d << "/" << m << "/" << y << " la ngay hop le";
				}
				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
			}
			else {
				if ( m==4 || m==6 || m==9 || m==11 ){
					if ( d > 0 && d <= 30 ){
						cout << d << "/" << m << "/" << y << " la ngay hop le";
					}
					else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
				}
				else {
					if ( d > 0 && d <= 31 ){
						cout << d << "/" << m << "/" << y << " la ngay hop le";
					}
					else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
				}
			}
		}
	}
	
//	if ( (y % 4 == 0) && (y % 100 != 0) && (y % 400 == 0) ){
//		//truong hop nam nhuan
//		if (m == 2){
//			// truong hop thang bang 2
//			if ( d > 0 && d <= 29 ){
//				cout << d << "/" << m << "/" << y << " la ngay hop le";
//			}
//			else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//		}
//		else {
//			if ( m==4 || m==6 || m==9 || m==11 ){
//				if ( d > 0 && d <= 30 ){
//					cout << d << "/" << m << "/" << y << " la ngay hop le";
//				}
//				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//			}
//			else {
//				if ( d > 0 && d <= 31 ){
//					cout << d << "/" << m << "/" << y << " la ngay hop le";
//				}
//				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//			}
//		}
//	}
//	else {
//		//truong hop nam khong nhuan
//		if (m == 2){
//			// truong hop thang bang 2
//			if ( d > 0 && d <= 28 ){
//				cout << d << "/" << m << "/" << y << " la ngay hop le";
//			}
//			else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//		}
//		else {
//			if ( m==4 || m==6 || m==9 || m==11 ){
//				if ( d > 0 && d <= 30 ){
//					cout << d << "/" << m << "/" << y << " la ngay hop le";
//				}
//				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//			}
//			else {
//				if ( d > 0 && d <= 31 ){
//					cout << d << "/" << m << "/" << y << " la ngay hop le";
//				}
//				else cout << d << "/" << m << "/" << y << " la ngay khong hop le";
//			}
//		}
//	}
	
	return 0;
}