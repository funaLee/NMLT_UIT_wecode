#include <bits/stdc++.h>
using namespace std;

struct Donthuc {
    double hs; int sm;
};

struct DATHUC {
    int n;
    Donthuc* t;
};

DATHUC* Nhap () {
    DATHUC *f = new DATHUC;

    cin >> f -> n;

    f -> t = new Donthuc[f -> n + 1];

    for (int i = 0; i < f -> n; i++) {
        cin >> f -> t[i].hs >> f -> t[i].sm;
    }

    f -> t[f -> n].hs = -1e9;
    f -> t[f -> n].sm = -1e9;

    return f;
}

void Xuatdonthuc (Donthuc a) {
    if (a.hs == 0) return;
    else if (a.hs == 1) {
        if (a.sm == 0) 
            cout << a.hs;
        else if (a.sm == 1) 
            cout << "x";
        else 
            cout << "x^" << a.sm;
    }
    else if (a.hs == -1) {
        if (a.sm == 0) 
            cout << a.hs;
        else if (a.sm == 1) 
            cout << "-x";
        else 
            cout << "-x^" << a.sm;
    }
    else {
        if (a.sm == 0) 
            cout << a.hs;
        else if (a.sm == 1) 
            cout << a.hs << "x";
        else 
            cout << a.hs << "x^" << a.sm;
    }
}

void Xuat (DATHUC f) {
    int flag = 0;
    int zero = 0;

    for (int i = 0; i < f.n; i++) {
        if (f.t[i].hs > 0 && flag) cout << "+";
        if (f.t[i].hs != 0) flag = 1;
        Xuatdonthuc(f.t[i]); 
    }

    for (int i = 0; i < f.n; i++) {
        if (f.t[i].hs != 0) { zero = 1; break; }
    }

    if (!zero) cout << 0;
}

DATHUC Tong2DaThuc (DATHUC* A, DATHUC* B) {
    DATHUC f;

    f.n = A -> n; //đếm số lượng đơn thức khác số mũ trong đa thức A và B
    for (int i = 0; i < B -> n; i++) {
        int flag = 1;

        for (int j = 0; j < A -> n; j++) {
            if (B -> t[i].sm == A -> t[j].sm)
                flag = 0;
        }

        if (flag) f.n++;
    }

    f.t = new Donthuc[f.n + 1];

    // cộng hai đa thức
    int cntA = 0, cntB = 0;

    for (int i = 0; i < f.n; i++) 
    {
        if (A -> t[cntA].sm > B -> t[cntB].sm) {
            f.t[i].hs = A -> t[cntA].hs;
            f.t[i].sm = A -> t[cntA].sm;

            cntA++;
        }
        else if (A -> t[cntA].sm < B -> t[cntB].sm) {
            f.t[i].hs = B -> t[cntB].hs;
            f.t[i].sm = B -> t[cntB].sm;

            cntB++;
        }
        else {
            f.t[i].hs = A -> t[cntA].hs + B -> t[cntB].hs;
            f.t[i].sm = A -> t[cntA].sm;

            cntA++; cntB++;
        }
    }

    return f;
}

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}