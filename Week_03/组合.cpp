#include <bits/stdc++.h>
using namespace std;
int n, k; 
vector<int > res;
bool used[100086];
void combination(int pos){
	if(res.size() >= k){
		for(int i = 0; i < res.size(); ++i) cout << res[i] << " ";
		cout << endl;
		return ;	
	}
	for(int i = pos; i < n; ++i){
		if(!used[i]) {
			used[i] = true;
			res.push_back(i + 1);
			combination(i);
			res.pop_back();
			used[i] = false;
		}
	}
}
int main()
{
	
	cin >> n >> k;
	combination(0);
	return 0;
}
