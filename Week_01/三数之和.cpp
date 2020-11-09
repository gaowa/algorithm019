#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	sort(nums, nums + n);// ������
	for(int i = 0; i < n; ++i) 
	{
		if(nums[i] > 0) return 0;// �������е�һ���ʹ���0���Ǻ����û������Ҫ�����
		if(i > 0 && nums[i - 1] == nums[i]) continue;// ��һ��Ԫ��ȥ�� 
		int l = i + 1, r = n - 1;
		while(l < r)
		{
			if(nums[i] + nums[l] + nums[r] > 0) r--;
			else if(nums[i] + nums[l] + nums[r] < 0) l++;			
			else
			{
				cout << nums[i] << " "  << nums[l] << " " << nums[r] << endl;
				while(l < r && nums[l] == nums[l + 1]) l++;// �ڶ���Ԫ��ȥ�� 
				while(r < r && nums[r] == nums[r - 1]) r--;// ������Ԫ��ȥ�� 
				l++, r--; 
			}
			
		}
	}
	
	return 0;
}
