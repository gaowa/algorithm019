#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	sort(nums, nums + n);
	for(int i = 0; i < k; ++i) cout << nums[i] << " ";
	return 0;
}
