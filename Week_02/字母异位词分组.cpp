#include <bits/stdc++.h> 
using namespace std;
map<unsigned int, vector<string > > m; 
vector<vector<string > > group(vector<string> & strs)
{
	vector<vector<string >> res;
	for(int i = 0; i < strs.size(); ++i)
	{
		int mul = 1, s = 0;
		for(int j = 0; j < strs[i].size(); ++j)
		{
			mul *= strs[i][j];
			s += strs[i][j];
		}
		m[mul + s].push_back(strs[i]);
	}
	for(auto &ss: m)
	{
		res.push_back(ss.second);
	}
	return res;
} 

int main(){
	int n;
	cin >> n;
	vector<string > strs;
	string ss;
	for(int i = 0; i < n; ++i) cin >> ss, strs.push_back(ss);
	group(strs);
	return 0;
}
