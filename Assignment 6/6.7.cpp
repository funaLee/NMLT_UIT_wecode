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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    int max = -1e6;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) max = a[i];
	}

	int se = -1e6;
	bool check = false;
	for (int i = 0; i < n; i++) {
		if (a[i] > se && a[i] < max) {
			se = a[i];
			check = true;
		}
	}

	if (check) cout << se << endl;
	else cout << "0" << endl;

    return 0;
}