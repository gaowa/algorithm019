#include <bits/stdc++.h> 
using namespace std;
int height[100086];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> height[i];
	// ��˫ָ�� ������ָ�� �������ұ߽� 
	int l = 0, r = n - 1;
	int res = 0;
	while(l < r) 
	{
		res = max(res, min(height[r], height[l]) * (r - l));
		if(height[l] < height[r]) l++;
		else r--;
	}
	cout << res;
	return 0;
}
