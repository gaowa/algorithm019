// 有序  1 4 5 6 78 90
// 题目  4 5 6 7 1 2 3  
#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
int binarysearch(int n, int target){
	int l = 0, r = n - 1;// [l,r]
	while(l <= r){
		int mid = l + ((r - l) >> 1);// mid = (r + l) / 2
		if(nums[mid] == target) return mid;
		else if(nums[mid] > target) r = mid - 1;// [l, mid - 1]
		else
			l = mid + 1;// [mid + 1, r]
		
	}
	return -1;
}
int binarysearch1(int n, int target){
	int l = 0, r = n;// [l,r)
	while(l <= r){
		int mid = l + ((r - l) >> 1);// mid = (r + l) / 2
		if(nums[mid]== target) return mid;
		else if(nums[mid] > target) r = mid;// [l, mid)
		else
			l = mid + 1;// [mid + 1, r)
		
	}
	return -1;
}

int binarysearch2(int n, int target){
	int l = 0, r = n - 1;// [l,r]
	while(l <= r){
		int mid = l + ((r - l) >> 1);
		if(nums[mid] == target) return mid;
		else if(nums[l] <= nums[mid]) {
			if(nums[l] <= target && target < nums[mid]) r = mid - 1;// 中间值 是 7 是否比目标大？ 所以不要缩写 
			else
				l = mid + 1;
		}
		else
		{
			if( target<= nums[r] && target > nums[mid]) l = mid + 1;
			else
				r = mid - 1;
		}
				
	}
	return -1;
}
int main(){
	int n, target;
	//cin >> n >> target; long long 
	scanf("%d %d", &n, &target);// 快点 
	for(int i = 0; i < n; ++i) cin >> nums[i];
	//cout << binarysearch2(n, target);
	printf(" %d", binarysearch2(n, target)) ;
	
	return 0;
}
