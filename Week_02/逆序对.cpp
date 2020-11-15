#include <bits/stdc++.h> 
using namespace std;

int count1 = 0;
int nums[100086];
vector<int > tmp;
void merge_sort( int l, int r){
    
    if(l >= r) return;
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    // 两个有序数组合并
    int i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(nums[i] <= nums[j]){
            tmp.push_back(nums[i]); 
            count1 += (j - (mid + 1));
            i++;                
        }
        else
        {
            j++;
        }
    }
    while(i <= mid){
        tmp.push_back(nums[i]) ;
            count1 += (j - (mid + 1));
            i++;  
    }
    while(j <= r){
        tmp.push_back(nums[j]);
        j++;
    }
    copy(tmp.begin() + l, tmp.begin() + r + 1, nums + l);
}
int main()
{
	int n;
	cin >> n;
	for(int i =0; i < n; ++i) cin >> nums[i];
	merge_sort(0, n - 1);
	cout << count1;
	
	return 0;
}
   
