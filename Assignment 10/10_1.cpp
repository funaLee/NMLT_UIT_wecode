#include <bits/stdc++.h>
using namespace std;

#define MAXN 105

struct PhanSo {
    int ts;
    int ms;
};

void Nhap(PhanSo a[], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].ts >> a[i].ms;
    }
}


void rutgon(int &a, int &b) {
    int gcd = __gcd(a, b);
    a /= gcd; b /= gcd;

    if (a < 0 && b < 0) { a *= -1; b *= -1; }
    if (a > 0 && b < 0) { a *= -1; b *= -1; }

    if (a % b == 0) cout << a / b << endl;
    else cout << a << "/" << b << endl;
}

void Xuat(PhanSo a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].ms == 0) {
            cout << "Khong thoa yeu cau bai toan" << endl;
        } 
        else {
            rutgon(a[i].ts, a[i].ms);
        }
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

