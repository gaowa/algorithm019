#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
unordered_map<int, int > m;// value = m[key] O��1�� 
priority_queue<pair<int, int >> p;// Ĭ�� ����  �Ѷ�Ԫ����� 
// priority_queue<pair<int, int >, vector<pair<int, int>>, greater<pair<int, int>>> 
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i){
		cin >> nums[i];// m��key����Ԫ��  m�� value ����Ԫ���������г��ֵĸ��� 
		m[nums[i]]++;
	} 
	//���� m
	for(auto &mm : m) {
		p.push(make_pair(mm.second, mm.first));
	}
	for(int i = 0; i < k; ++i){
		cout << p.top().second  << " ";
		p.pop();
	}
	
	return 0;
}
