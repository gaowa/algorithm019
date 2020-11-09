#include <bits/stdc++.h>
using namespace std;
// 原地合并两个有序数组
int nums1[1000086] ;
int nums2[100086];
int main()
{	
	// 输入 
	int n, m;
	cin >> m >> n;
	for(int i = 0; i < m; ++i) cin >> nums1[i];
	for(int i = 0; i < n; ++i) cin >> nums2[i];
	//算法部分
	for(int i = m; i < m + n; ++i) nums1[i] = nums2[i - m];
	sort(nums1, nums1 + m + n);
	// 输出 
	for(int i = 0; i < m + n; ++i) cout << nums1[i] << " ";
	return 0;
}

