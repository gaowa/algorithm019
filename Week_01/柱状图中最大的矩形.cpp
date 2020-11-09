#include <bits/stdc++.h>
using namespace std;
int heights[100086];
stack<int > st;
int main(){
	int n, i;
	cin >> n;
	int area = 0;
	for(int i = 0; i < n; ++i) cin >> heights[i];
	st.push(-1); st.push(0);// 元素都是非负正数，所以第一个元素的下标也入栈
	for(i = 1; i < n; ++i) {
		while(!st.empty() && heights[i] < heights[st.top()]){
			int cur = st.top();
			st.pop();
			int r = i;// 右边界 
			int l = st.top();// 左边界 
			area = max(area, (r - l - 1) * heights[cur]);
		}
		st.push(i);
	}
	if(!st.empty())
	{
		while(st.top() != -1)
		{
			int cur = st.top();
			st.pop();
			int r = i;
			int l = st.top();
			area = max(area, (r - l - 1) * heights[cur]);
		}
		st.pop();
	}
	cout << area;
	return 0;
}
