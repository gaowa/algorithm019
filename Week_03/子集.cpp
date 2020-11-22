#include <bits/stdc++.h>
using namespace std;
int nums[100086];
int n;
bool used[100086];
vector<int > res;
void subset(int pos){
	for(int i = 0; i < res.size(); ++i) cout << res[i] << " ";
	cout << endl;
	for(int i = pos; i < n; ++i){
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
	for(int i = 0; i < n; ++i) cin >> nums[i];
	subset(0);
	
	return 0;
}
