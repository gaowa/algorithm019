#include <bits/stdc++.h>
using namespace std;
int heights[100086];
stack<int > st;
int main(){
	int n, i;
	cin >> n;
	int area = 0;
	for(int i = 0; i < n; ++i) cin >> heights[i];
	st.push(-1); st.push(0);// Ԫ�ض��ǷǸ����������Ե�һ��Ԫ�ص��±�Ҳ��ջ
	for(i = 1; i < n; ++i) {
		while(!st.empty() && heights[i] < heights[st.top()]){
			int cur = st.top();
			st.pop();
			int r = i;// �ұ߽� 
			int l = st.top();// ��߽� 
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
