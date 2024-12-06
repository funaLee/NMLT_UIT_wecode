#include <bits/stdc++.h>

#define ll long long
#define LIM 105
#define X first
#define Y second
#define EL cout<<"\n"

using namespace std;

int a[LIM], b[LIM], c[LIM];

int main() {

	int n, m; 

	cin >> n;

	for (int i = 1; i <= n; i++) cin >> a[i];

	cin >> m;

	for (int i = 1; i <= m; i++) cin >> b[i];

	a[n + 1] = 1e9 + 7; b[m + 1] = 1e9 + 7;

	int i = 1, j = 1, k = 0; 

	while (k < m + n)
	{
		if (a[i] <= b[j] ) 
		{
			c[++k] = a[i];  

			i++;
		}
		else 
		{
			c[++k] = b[j];  

			j++;
		}
	}

	cout << i << " " << j;
	//for (int i = 1; i <= k; i++) cout << c[i] << " ";

	
	return 0;
}