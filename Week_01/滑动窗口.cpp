#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
deque<int > d;
// ����������������Ҫ��˫�˶��� 
int main(){
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i) cin >> nums[i];	
	for(int i = 0; i < n; ++i){
		if(!d.empty() && d.front() <= i - k) d.pop_front();//�����������ڵĴ�С 
		while(!d.empty() && nums[d.back()] < nums[i] ) d.pop_back();		
		d.push_back(i);
		if(i >= k - 1)
			cout << nums[d.front()] << " "; 
	} 	
	return 0; 
} 
