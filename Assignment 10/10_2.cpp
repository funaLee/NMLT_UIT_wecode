#include <iostream>
using namespace std;

struct PhanSo {
    int ts; int ms;
};

void Nhap (PhanSo &a) {
    cin >> a.ts >> a.ms;
}

PhanSo Nhap () {
    PhanSo a; cin >> a.ts >> a.ms;
    return a;
}

int SoSanh(PhanSo a, PhanSo b) {
    int kq; 
    float ps1 = (float)a.ts / a.ms;
    float ps2 = (float)b.ts / b.ms;
    if (ps1 == ps2) kq = 0;
    else if (ps1 > ps2) kq = 1;
    else kq = -1;

    return kq;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
