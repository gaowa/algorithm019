#include <bits/stdc++.h> 
using namespace std;
// ���ֲ���ģ��
int nums[100086];
int target;
int binarysearch(int l, int r) {
	while(l <= r){
		int mid = (l + r) / 2;
		if(nums[mid] == target){
			return mid;
		}	
		else if(nums[mid] < target){
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return -1;
	
}
int main(){
	// �������� ���ֲ���
	int n;
	cin >> n >> target;
	for(int i = 0; i < n; ++i)  cin >> nums[i];
	cout << binarysearch(0, n - 1) ;
	return 0;
}
