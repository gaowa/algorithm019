#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	//输入部分 
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	// 算法部分 
	// 若没有排序的话， sort(nums, nums + n) 排序好 
	// 删除重复元素，用双下标
	int fast = 1;//放在非重复元素的下标 
	for(int i = 1; i < n; ++i) {// 去重 
		if(nums[i] != nums[i - 1]) nums[fast] = nums[i], fast++;
	}	
	for(int i = 0; i < fast; ++i) cout << nums[i] << " ";
	return 0;
}
