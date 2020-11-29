#include <bits/stdc++.h> 
using namespace std;
// 二分查找模板
int nums[100086];
int target;
int binarysearch(int l, int r) {// 二分查找注意区间的性质 即大区间有 [l, r) 有左闭 右开的性质
								// 那么二分出来的 左边区域 [l,mid ) 也是左闭右开  右边区域 也是 [mid + 1, r） 也是左闭右开的性质 
	while(l < r){// 满足条件也是 l < r(l和下标包含在数组内， 但是 r不是数组的下标) 
		int mid = l + (r - l) / 2;// 怕出界（找中间的方法关注） 
		if(nums[mid] == target){// 找到目标  
			return mid;
		}	
		else if(nums[mid] < target){// 中间值比目标小，则目标在有半区域 所以 左边界 l = mid + 1  r = r 
			l = mid + 1;
		}
		else// 否则 即 中间值比目标大，则 目标在左半区域 所以 右边界 r = mid  注意右边区域不包含在内 
			r = mid ;
	}
	return -1;// 每个找到目标 则返回 -1 
	
}
int main(){
	// 有序数列 二分查找
	int n;
	cin >> n >> target;
	for(int i = 0; i < n; ++i)  cin >> nums[i];
	cout << binarysearch(0, n) ;// 右开  n 不是数组的下标 注意区间的左闭右开  
	return 0;
}




