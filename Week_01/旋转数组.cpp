#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
// ��תԪ�ص�λ�ã���һ��һ��Ҫ�뵽���л�˫�˶��� 
queue<int > q;
int main()
{
	int n, k;
	cin >> n >> k;
	// �������Կ����У�������ӵ�n - k��Ԫ���ǳ��ӣ�Ȼ�����
	for(int i = 0; i < n; ++i) {
		cin >> nums[i];
		q.push(nums[i]);
	}
	for(int i = 0; i < n - k; ++i) q.push(q.front()), q.pop();
	while(!q.empty())
	{
		cout << q.front() << " ", q.pop();
	}	 
	return 0;
}

