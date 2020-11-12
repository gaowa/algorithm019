#include <bits/stdc++.h> 
using namespace std;
// 子集 不重复元素
int nums[100086];
bool used[100086];
vector<int > res;// 结果放在res中 
int n;
void subset(int pos) {
	for(int i = 0; i < res.size(); ++i){
		if(i < res.size() - 1) cout << res[i] << " ";
		else cout << res[i] << endl;
	}
	for(int i = pos; i < n; ++i)
	{
		if(!used[i]){
			used[i] = true;
			res.push_back(nums[i]);
			subset(i + 1);
			res.pop_back();
			used[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++i)  cin >> nums[i];
	
	subset(0);// 位置即下标 
	
	return 0;
}
