#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	sort(nums, nums + n);// 先排序
	for(int i = 0; i < n; ++i) 
	{
		if(nums[i] > 0) return 0;// 三个数中第一个就大于0，那后面就没有满足要求的了
		if(i > 0 && nums[i - 1] == nums[i]) continue;// 第一个元素去重 
		int l = i + 1, r = n - 1;
		while(l < r)
		{
			if(nums[i] + nums[l] + nums[r] > 0) r--;
			else if(nums[i] + nums[l] + nums[r] < 0) l++;			
			else
			{
				cout << nums[i] << " "  << nums[l] << " " << nums[r] << endl;
				while(l < r && nums[l] == nums[l + 1]) l++;// 第二个元素去重 
				while(r < r && nums[r] == nums[r - 1]) r--;// 第三个元素去重 
				l++, r--; 
			}
			
		}
	}
	
	return 0;
}
