	#include <bits/stdc++.h>
	using namespace std;
	int upper_bound1(int *arr, int n, int target){
		int left = 0, right = n;// �������Ϊ [0, n)������ҿ� 
		int mid;
		while(left < right){// �������������
			mid = left + ((right - left) >> 1) ;
			if(arr[mid] > target)
				right = mid;//�����������������ҿ� 
			else
			
				left = mid + 1;// �����������������ҿ� 
		 
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
	
	
	
	
	
	
	
	
