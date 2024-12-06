#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int ts, ms;
};

void Nhap(PhanSo &a) {
    cin >> a.ts >> a.ms;
}

PhanSo Nhap() {
    PhanSo b; cin >> b.ts >> b.ms;

    return b;
}

void RutGon(PhanSo &x) {
    int gcd = __gcd(x.ts, x.ms);
    
    x.ts /= gcd; x.ms /= gcd;
}

void Xuat(PhanSo x) { //xuat theo dinh dang phan so
    RutGon(x);

    if (x.ts % x.ms == 0) cout << x.ts / x.ms << endl;
    else cout << x.ts << "/" << x.ms << endl;
}

int BCNN(int a, int b) {
    int gcd = __gcd(a, b);

    return (a * b) / gcd;
}

PhanSo Cong(PhanSo a, PhanSo b) {
    PhanSo x;

    x.ms = BCNN(a.ms, b.ms);

    a.ts *= (x.ms / a.ms);
    b.ts *= (x.ms / b.ms);

    x.ts = a.ts + b.ts;

    return x;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
