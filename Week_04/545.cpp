// ���ֲ��ҵ�ģ�� ���������
// 10  5
// 1 2 3 4 5 6 7 8 9 10 
// 
// 6  2 
//  4 5 6 1 2 3   ����������ת�Ժ�Ҳ�����ö��ֲ��� �ҵ����ݵ��±� 

#include <bits/stdc++.h> 
using namespace std;
int arr[10086];
int binarysearch(int n, int target){
	// �߽������ǳ��ؼ�  ����ұյĶ��� [l,r]
	int l = 0, r = n - 1; // [l, r] ���ִ���������� 
	while(l <= r){
		int mid = l + ((r - l) >> 1);
		if(arr[mid] == target) return mid;
		else if(arr[mid] < target) l = mid + 1;
		else r = mid - 1;// [l,r]
	} 
	return -1;	
}
int binarysearch1(int n, int target){
	int l = 0, r = n;// ���������� [l, r)  ����ҿ�
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
		else if(arr[l] <= arr[mid]){// �������� 
			if(arr[l] <= target && target < arr[mid]) r = mid - 1;
			else
				l = mid + 1;		
		} else{// �ұ������� 
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
