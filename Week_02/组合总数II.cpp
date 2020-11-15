#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
bool used[100086];
vector<int > res;
int n;
void comb(int target, int start){
	if(target == 0) {
		 for(int i = 0; i < res.size(); ++i){
		 	cout << res[i] << " ";
		 }
		 cout << endl;
	} 
	for(int i = start; i < n ; ++i){
		if(target - nums[i] < 0) continue;
		if(i > start && nums[i - 1] == nums[i] && used[i - 1] == false) continue;// Í¬²ã  
		if(!used[i]){
			used[i] = true;
			res.push_back(nums[i]);
			comb(target - nums[i], i);
			res.pop_back();
			used[i] = false;
		}		
	}	
}
int main()
{
	int target; 
	cin >> n >> target;
	for(int i = 0; i < n; ++i) cin >> nums[i];	
	sort(nums, nums + n);
	comb(target, 0);
	return 0;
}
