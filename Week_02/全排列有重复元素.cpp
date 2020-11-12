#include <bits/stdc++.h> 
using namespace std;
// 重复元素的全排列
int nums[100086] ;
bool used[100086];
vector<int > res;
int n;
void permutation(int pos) {
	if(pos >= n){
		for(int i = 0; i < res.size(); ++i)
		{
			if(i < res.size() - 1) cout << res[i] << " ";
			else 	cout << res[i] << endl;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		if(i > 0 && nums[i - 1] == nums[i] && used[i - 1] == false) continue;// 同层去重
		if(!used[i]) {
			used[i] = true;
			res.push_back(nums[i]);
			permutation(pos + 1);
			res.pop_back();
			used[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	permutation(0);
	return 0;	
}
