#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap (SinhVien A[], int &n) {
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;

        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        cin.ignore();

    } 
}   

void Xuat (SinhVien A[], int n) {

    for (int i = 1; i <= n; i++) {
        cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t";

        cout << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t";

        cout << setprecision(3) << (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3 << endl;
    }
    
}


int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
