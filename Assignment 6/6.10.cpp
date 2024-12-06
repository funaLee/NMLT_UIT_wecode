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

    int m; cin >> m;
    int b[m];
    for (int &x : b) cin >> x;

    int cntA = 0, cntB = 0;
    for (int i = 0; i < m + n; i++) {
    	
    	if (cntA < n && cntB < m) {
    		if (a[cntA] <= b[cntB]) {
    			cout << a[cntA] << " ";
    			cntA++;
    		}
    		else if (a[cntA] >= b[cntB]) {
    			cout << b[cntB] << " ";
    			cntB++;
    		}
    	}
    	
    	if (cntA >= n) {
    		for (int j = cntB; j < m; j++) cout << b[j] << " ";
    		break;
    	}
    	else if (cntB >= m) {
    		for (int j = cntA; j < n; j++) cout << a[j] << " ";
    		break;
    	}
    }

    return 0;
}