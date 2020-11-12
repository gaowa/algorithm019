#include <bits/stdc++.h> 
using namespace std;
unordered_map<int, int > m;
priority_queue<pair<int, int > > p;

int main()
{
	int n, x, k;
	cin >> n >>  k;
	for(int i = 0; i < n; ++i) cin >> x, m[x]++;
	for(auto &mm: m) 
		p.push(make_pair(mm.second, mm.first));
	for(int i = 0; i < k; ++i) cout << p.top().second << " ",p.pop();
	
	
	return 0;
}
