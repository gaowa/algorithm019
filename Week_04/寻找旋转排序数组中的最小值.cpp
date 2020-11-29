#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	int l = 0, r = n - 1;
	while(l <= r){
		if(nums[l] <= nums[r]){
			cout << nums[l] ; return 0;
		}
		int mid = l + ((r - l) >> 1);// l + (r - l) / 2
		if(nums[l] <= nums[mid]) l = mid + 1;
		else r = mid;
	}
	cout << - 1;
	
	return 0;
}
