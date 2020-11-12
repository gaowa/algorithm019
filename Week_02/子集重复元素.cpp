#include <bits/stdc++.h>
using namespace std;
int nums[100086];
bool used[100086];
int n;
vector<int > res;
void subsetII(int pos){
	for(int i = 0 ; i < res.size(); ++i) {
		if(i < res.size() - 1) cout << res[i] << " ";
		else cout << res[i] << endl;
	}
	for(int i = pos; i < n; ++i)
	{
		if(i > 0 && nums[i - 1] == nums[i] && used[i - 1] == false) continue;
		if(!used[i]){
			used[i] = true;
			res.push_back(nums[i]);
			subsetII(i + 1);
			res.pop_back();
			used[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	sort(nums, nums+n);// 去重以前需要排序 
	subsetII(0);	
	return 0;
}
