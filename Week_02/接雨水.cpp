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
		while(!st.empty() && height[i] > height[st.top()]) // iΪջ��Ԫ�ص��б߽磬
															// ��ǰԪ�أ������Ժ�� ջ��Ԫ��
		{
			int cur = st.top(); st.pop();
			if(st.empty()) break;
			int r = i; // ����ˮ���ұ߽�
			int l = st.top();// ����ˮ����߽�
			water += (r - l - 1) * (min(height[r], height[l]) - height[cur]);
		} 
		st.push(i);
	} 
	// ���ջ�ڻ���Ԫ���򵯳�
	while(!st.empty()) st.pop();
	cout << water;
	return 0;
}

