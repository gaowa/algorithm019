#include <bits/stdc++.h> 
using namespace std;
char four[4] = {'A','C','G','T'};
unordered_set<string > s;
unordered_map<string, int> vis;
queue<string> q;
int main(){
	int n;
	string start, end;
	int step = 0;
	cin >> n >> start >> end;
	for(int i = 0; i < n; ++i) {
		string x;
		cin  >> x; 
		s.insert(x);
	}
	q.push(start);
	while(!q.empty()){
		int cur_size = q.size();
		for(int i = 0; i < cur_size; ++i){
			string cur = q.front(); q.pop();
			if(cur == end) {
				cout << step;
				return 0;
			}
			vis[cur] = 1;
			
			for(int j = 0; j < cur.size(); ++j){
				char old = cur[j];
				for(auto ss: four){
					cur[j] = ss;
					if(!vis[cur] && s.count(cur)){
						vis[cur] = 1;
						q.push(cur);
					}
				}
				cur[j] = old;
			}
		}
		step++;
	}
	cout << -1;
	return 0;
}
