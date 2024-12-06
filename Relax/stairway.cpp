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

int count(ll n) {
	int cnt = 0;
	while (n > 0) {
		cnt++;
		n /= 10;
	}
	return cnt;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n; cin >> n;



    return 0;
}