#include <bits/stdc++.h> 
using namespace std;
// 接雨水 
int height[100086];
stack<int > st;//单调栈 
int main()
{
	int n;
	cin >> n;
	int res = 0; 
	for(int i = 0; i < n; ++i) cin >> height[i];
	for(int i = 0; i < n; ++i){
		while(!st.empty() && height[i] > height[st.top()])
		{
			int cur = st.top();
			st.pop();
			if(st.empty()) break;
			int r = i;// 可以接到雨水的右边界
			int l = st.top(); // 可以接到雨水的左边界
			res += (r - l - 1) * (min(height[r], height[l]) - height[cur]);
		}
		st.push(i);
	}
	while(!st.empty()) st.pop();
	cout << res;
	return 0;
}
