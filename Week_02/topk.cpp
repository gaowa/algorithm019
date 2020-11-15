#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
unordered_map<int, int > m;// value = m[key] O（1） 
priority_queue<pair<int, int >> p;// 默认 最大堆  堆顶元素最大 
// priority_queue<pair<int, int >, vector<pair<int, int>>, greater<pair<int, int>>> 
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i){
		cin >> nums[i];// m的key数组元素  m的 value 就是元素在数组中出现的个数 
		m[nums[i]]++;
	} 
	//遍历 m
	for(auto &mm : m) {
		p.push(make_pair(mm.second, mm.first));
	}
	for(int i = 0; i < k; ++i){
		cout << p.top().second  << " ";
		p.pop();
	}
	
	return 0;
}
