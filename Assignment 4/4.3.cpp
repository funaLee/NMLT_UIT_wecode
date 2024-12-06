#include <iostream>

int input(){
	int a; std::cin >> a;
	return a;
}

int input(int& b){
	std::cin >> b;
	return b;
}

int TongUocChung(int& a, int& b){
	int S = 0;
	for (int i = 1; i <= std::min(a, b); i++){
		if (a % i == 0 && b % i == 0){
			S += i;
		}
	}
	return S;
}

int main(){
	int a, b;
	
	a = input();
	input(b);
	std::cout << TongUocChung(a, b);
	
	return 0;
}