#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main()
{
	//���벿�� 
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	// �㷨���� 
	// ��û������Ļ��� sort(nums, nums + n) ����� 
	// ɾ���ظ�Ԫ�أ���˫�±�
	int fast = 1;//���ڷ��ظ�Ԫ�ص��±� 
	for(int i = 1; i < n; ++i) {// ȥ�� 
		if(nums[i] != nums[i - 1]) nums[fast] = nums[i], fast++;
	}	
	for(int i = 0; i < fast; ++i) cout << nums[i] << " ";
	return 0;
}
