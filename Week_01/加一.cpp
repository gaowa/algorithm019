#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	int res = 1;
	for(int i = n - 1; i >= 0; --i)
	{
		int tmp = nums[i] + res;
		res = tmp / 10;// res Ϊ��λ 
		nums[i] = tmp % 10;
	}
	if(res > 0) cout << 1;// ���λ�н�λ����ʾ1 
	for(int i = 0; i < n; ++i) cout << nums[i]; 	
	return 0;
}
