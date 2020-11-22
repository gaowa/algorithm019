#include <bits/stdc++.h>
using namespace std;
int nums[100086];
int n;
bool used[100086];
vector<int > res;
void perm(int pos){
	if(pos == n){
		for(int i = 0; i < res.size(); ++i) cout  << res[i] << " ";
		cout << endl;
		return;
	}
	for(int i = 0; i < n; ++i){
		if(i > 0 && nums[i - 1] == nums[i] && used[i - 1] == false) continue;
		if(!used[i]){
			used[i] = true;
			res.push_back(nums[i]);
			perm(pos + 1);
			res.pop_back();
			used[i] = false;
		}
	}
} 
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i)  cin >> nums[i];
	sort(nums, nums + n);
	perm(0);
	return 0;
}
