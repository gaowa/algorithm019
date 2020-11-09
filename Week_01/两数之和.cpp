#include <bits/stdc++.h> 
using namespace std;
// 两数字和
// 利用map数据结构 
int nums[100086];
map<int, int > m;// key value 键值对 
int main()
{
	int n,target;
	cin >> n >> target;
	for(int i = 0; i < n; ++i) {
		cin >> nums[i];
		m.insert(make_pair(nums[i],i));
	}
	for(int i = 0; i < n; ++i)// map中的count查找key 若存在这个key 就返回1 
	{
		if(m.count(target - nums[i]) && i != m[target - nums[i]])
		{
			cout << m[target - nums[i]] << " " << i << endl;
			return 0;
		}
	}
	
	return 0;
}
