#include <bits/stdc++.h>
using namespace std;
// ԭ�غϲ�������������
int nums1[1000086] ;
int nums2[100086];
int main()
{	
	// ���� 
	int n, m;
	cin >> m >> n;
	for(int i = 0; i < m; ++i) cin >> nums1[i];
	for(int i = 0; i < n; ++i) cin >> nums2[i];
	//�㷨����
	for(int i = m; i < m + n; ++i) nums1[i] = nums2[i - m];
	sort(nums1, nums1 + m + n);
	// ��� 
	for(int i = 0; i < m + n; ++i) cout << nums1[i] << " ";
	return 0;
}

