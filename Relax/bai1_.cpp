#include <bits/stdc++.h>
using namespace std;

long long a, b, k, m, n;

bool check(long long x) 
{	
	long long asum = (x - x / k) * a;
	long long bsum = (x - x / m) * b;
	
	if ((asum + bsum) >= n) return true;
	else return false;
} 

long long BNS() {
	long long l = 1, r = 1e18;
	
	while (l <= r) {
		long long mid = (l + r) / 2; 
		if (l == mid || mid == r) 
		{
			for (long long i = l; i <= r; i++)
				if (check(i)) return i;
			return 0; 
		}
		
		if (check(mid)) r = mid;
		else l = mid;
	}
	
	
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> a >> k >> b >> m >> n;
	
	cout << BNS();
	

	
	return 0;
}