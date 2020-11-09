#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
// 旋转元素的位置，第一个一定要想到队列或双端队列 
queue<int > q;
int main()
{
	int n, k;
	cin >> n >> k;
	// 可以试试看队列，让先入队的n - k个元素是出队，然后入队
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

