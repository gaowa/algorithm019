#include <bits/stdc++.h> 
using namespace std;
double Power(double x, int n)//������ ÿ���� ���� base���� ��߼���Ч��
							// ����  3 ^(2 + 1)  
{
	double res = 1;
	if(x == 0.0) return 0.0;
	int m;
	m = n > 0 ? n: -n;
	while(m)
	{
		if(m & 1) res *= x;
		x *= x;
		m >>= 1; 
	}
	return res;	
}
int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout << Power(x, n);
	
	return 0;
}
