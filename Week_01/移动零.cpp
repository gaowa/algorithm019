#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	//�㷨���֣���˫ָ��
	int fast = 0;// ��0���ݷ���fastָ�������Ԫ���� 
	for(int i = 0; i < n; ++i) if(nums[i] != 0) nums[fast++] = nums[i];
	for(int i = fast; i < n; ++i) nums[i] = 0;// ����ȫ����ֵΪ0
	
	for(int i = 0; i < n; ++i) cout << nums[i] << " "; 
	return 0;
}
