#include <bits/stdc++.h> 
using namespace std;
bool used[100086];
vector<int > res;
int n, k;
void combine(int pos){
	if(res.size() == k){
		for(int i = 0; i < k; ++i){
			cout << res[i] << " ";
		}
		cout << endl;
		return;
	}
	for(int i = pos; i < n; ++i){
		if(!used[i]){
			used[i] = true;
			res.push_back(i + 1);
			combine(i + 1);
			res.pop_back();
			used[i] = false;
		}
	}
}
int main()
{
	cin >> n >> k;
	combine(0);	
	return 0;
}
