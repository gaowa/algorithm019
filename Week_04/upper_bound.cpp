	#include <bits/stdc++.h>
	using namespace std;
	int upper_bound1(int *arr, int n, int target){
		int left = 0, right = n;// 大的区间为 [0, n)即左闭右开 
		int mid;
		while(left < right){// 保留区间的性质
			mid = left + ((right - left) >> 1) ;
			if(arr[mid] > target)
				right = mid;//保持区间的性质左闭右开 
			else
			
				left = mid + 1;// 保持区间的性质左闭右开 
		 
		 } 	
		 return left;	 
	} 
	int main(){
		
		int arr[50];
		int n , target;
		cin >> n >> target;
		for(int i = 0; i < n; ++i) cin >> arr[i];
		cout << upper_bound1(arr,n,target);
		return 0;
	} 
	
	
	
	
	
	
	
	
