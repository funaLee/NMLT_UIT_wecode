//#include <iostream>
//using namespace std;
//
//double sqrt(int x) {
//	double result = 1.0;
//	double n = result * result - x;
//	while (((n > 0) ? n : -n) / x >= 0.0001) 
//		result = (x / result  - result) / 2 + result;
//	return result;
//}
//
//int main() {
//	int n; cin >> n;
//	cout << sqrt(n) << endl;
//	
//	return 0;
//}

#include <iostream>
using namespace std;

double sqrt(double x) {
    double result = 1.0;
    while (result * result - x >= 0.0001) {
        result = 0.5 * (result + x / result);
    }
    return result;
}

int main() {
    double n;
    cin >> n;
    cout << sqrt(n) << endl;

    return 0;
}