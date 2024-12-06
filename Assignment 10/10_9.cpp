#include <bits/stdc++.h>

#define ll long long
#define LIM 1000005
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int n;
int beg = 0;

struct DATHUC
{
    double hs[105];
    int sm[105];
};

DATHUC* Nhap()
{
    DATHUC* F = new DATHUC;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> F->hs[i] >> F->sm[i];

    return F;
}

void xuatdonthuc(double a, int b)
{
    if (a == 1 || a == -1) 
    {
        if (b == 0) 
        {
            cout << a; 
        }
        else if (b == 1)
        {
            cout << "x";
        }
        else 
        {
            cout << "x^" << b; 
        }
    }
    else 
    {
        if (b == 0) 
        {
            cout << a; 
        }
        else if (b == 1)
        {
            cout << a << "x";
        }
        else
        {
            cout << a << "x^" << b;
        }
    }
}

void Xuat(DATHUC B)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (B.hs[i] == 0) cnt++;
    if (cnt == n) { cout << 0; return; }

    for (int i = 1; i <= n; i++)
        if (B.hs[i] != 0) { beg = i; break; }

    for (int i = 1; i <= n; i++)
    {
        if (B.hs[i] == 0) continue;

        if (i != beg)
        {
            if (B.hs[i] >= 0) cout << "+";
        }
        
        if (B.hs[i] == -1 && B.sm[i] != 0)
        {
            cout << "-";
        }

        xuatdonthuc(B.hs[i], B.sm[i]);
    }
}

double TinhDaThuc(DATHUC B, double x)
{
    double res = 0;

    for (int i = 1; i <= n; i++) 
    {   
        res += B.hs[i] * pow(x, B.sm[i]);
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
