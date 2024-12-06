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

    if (x.ts > 0 && x.ms < 0) {
        x.ts *= -1; x.ms *= -1;
    }

    if (x.ts < 0 && x.ms < 0) {
        x.ts *= -1; x.ms *= -1;
    }
}

void Xuat(PhanSo x) { //xuat theo dinh dang phan so
    RutGon(x);

    if (x.ts % x.ms == 0) cout << x.ts / x.ms << endl;
    else cout << x.ts << "/" << x.ms << endl;
}


PhanSo Chia(PhanSo a, PhanSo b) {
    PhanSo x;

    x.ts = a.ts * b.ms;
    x.ms = a.ms * b.ts;

    return x;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
