#include <bits/stdc++.h> 
using namespace std;
int height[100086];
stack<int > st;
int main()
{
	int n;
	cin >> n;
	int water = 0;
	for(int i = 0; i < n; ++i) cin >> height[i];
	for(int i = 0; i < n; ++i){
		while(!st.empty() && height[i] > height[st.top()]) // i为栈顶元素的有边界，
															// 当前元素，弹出以后的 栈顶元素
		{
			int cur = st.top(); st.pop();
			if(st.empty()) break;
			int r = i; // 接雨水的右边界
			int l = st.top();// 接雨水的左边界
			water += (r - l - 1) * (min(height[r], height[l]) - height[cur]);
		} 
		st.push(i);
	} 
	// 如果栈内还有元素则弹出
	while(!st.empty()) st.pop();
	cout << water;
	return 0;
}

