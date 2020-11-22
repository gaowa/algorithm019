#include <bits/stdc++.h> 
using namespace std;

int main()
{
	double x, res = 1.0;
	int n;
	cin >> x >> n;
	unsigned int m = abs(n);
	if(n == 0) cout << 1.0;
	if(x == 0) cout << 0.0;
	while(m) {
		if(m & 1) res *= x; 
		x *= x;
		m >>= 1;
	}
	if(n > 0) cout << res;
	else
		cout << 1/res;
	return 0;
}
