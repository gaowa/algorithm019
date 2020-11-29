// 二分查找的模板 有序的数据
// 10  5
// 1 2 3 4 5 6 7 8 9 10 
// 
// 6  2 
//  4 5 6 1 2 3   有序数组旋转以后也可以用二分查找 找到数据的下标 

#include <bits/stdc++.h> 
using namespace std;
int arr[10086];
int binarysearch(int n, int target){
	// 边界条件非常关键  左闭右闭的二分 [l,r]
	int l = 0, r = n - 1; // [l, r] 保持大区间的性质 
	while(l <= r){
		int mid = l + ((r - l) >> 1);
		if(arr[mid] == target) return mid;
		else if(arr[mid] < target) l = mid + 1;
		else r = mid - 1;// [l,r]
	} 
	return -1;	
}
int binarysearch1(int n, int target){
	int l = 0, r = n;// 大区间性质 [l, r)  左闭右开
	while(l < r) {
		int mid = l + ((r - l) >> 1);
		if(arr[mid] == target) return mid;
		else if(arr[mid] < target) l = mid + 1;// [l, r)
		else
			r = mid; // [l, r)
	}
	return -1;
}
int binarysearch2(int n, int target){
	int l = 0, r = n - 1;
	while(l <= r) {
		int mid = l + ((r - l) >> 1) ;
		if(arr[mid] == target) return mid;
		else if(arr[l] <= arr[mid]){// 左半边有序 
			if(arr[l] <= target && target < arr[mid]) r = mid - 1;
			else
				l = mid + 1;		
		} else{// 右边区有序 
			if(arr[mid] < target && target <= arr[r]) l = mid + 1;
			else
				r = mid - 1;
		} 
	}
	
} 
 
int main(){
	int n, target;
	scanf("%d %d", &n, &target);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	printf("%d", binarysearch2(n, target));
	return 0;
}
