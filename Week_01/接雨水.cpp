#include <bits/stdc++.h> 
using namespace std;
// ����ˮ 
int height[100086];
stack<int > st;//����ջ 
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
			int r = i;// ���Խӵ���ˮ���ұ߽�
			int l = st.top(); // ���Խӵ���ˮ����߽�
			res += (r - l - 1) * (min(height[r], height[l]) - height[cur]);
		}
		st.push(i);
	}
	while(!st.empty()) st.pop();
	cout << res;
	return 0;
}
