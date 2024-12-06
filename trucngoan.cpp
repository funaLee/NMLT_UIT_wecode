#include <iostream>
#include <math.h>
using namespace std;

#define MaxN 1000000

int a[MaxN];

void snt () {
    for (int i = 0; i < MaxN; i++) {
        a[i] = 1;
    }

    a[0] = 0; a[1] = 0;

    for (int i = 2; i <= sqrt(MaxN); i++) {
        if (a[i]) {
            for (int j = i * i; j <= MaxN; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main() {
    int k; cin >> k;

    snt();

    cout << a[k];

}
