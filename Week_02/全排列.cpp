#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
bool used[100086];
vector<int > res;// 结果放在 result中 
int n;
void permutation(int pos)
{
	if(pos >= n)
	{
		for(int i = 0; i < res.size(); ++i) 
			if(i < res.size() - 1) cout << res[i] << " ";
			else cout << res[i]  << endl;	
	}
	for(int i = 0; i < n; ++i){
		if(used[i] == false){
			used[i] = true;
			res.push_back(nums[i]);// 往空容器中放在需要的元素
			permutation(pos + 1);
			res.pop_back(); // 用过了要弹出
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
