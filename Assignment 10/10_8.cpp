
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(char s[MAXN]) { //nhap ho ten can xoa
    cin.getline(s, MAXN);
}

void Nhap (SinhVien A[], int &n) { //nhap du lieu sinh vien
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

void Xuat (SinhVien A[], int n) { //xuat du lieu sinh vien
    for (int i = 1; i <= n; i++) {
        if (strcmp(A[i].MASV, "null") != 0) {
            cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t";

            cout << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t";

            cout << setprecision(3) << (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3 << endl;
        }
    }
    
}

void XoaTheoHoTen(SinhVien A[], int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        if (strcmp(A[i].HoTen, s) == 0) strcpy(A[i].MASV, "null");
    }
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
