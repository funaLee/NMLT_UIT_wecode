#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

bool isPrime(int n){
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    bool check = false;
    for (int i = 0; i < n; i++){
    	if (isPrime(a[i])) {
    		check = true;
    		cout << a[i] << " ";
    	}
    }

    if (!check) cout << "0" << endl;

    return 0;
}