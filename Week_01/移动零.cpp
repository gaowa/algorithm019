#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	//算法部分，用双指针
	int fast = 0;// 非0数据放在fast指向的数据元素中 
	for(int i = 0; i < n; ++i) if(nums[i] != 0) nums[fast++] = nums[i];
	for(int i = fast; i < n; ++i) nums[i] = 0;// 后面全部赋值为0
	
	for(int i = 0; i < n; ++i) cout << nums[i] << " "; 
	return 0;
}
