#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
unordered_map<int, int> cnt;//计数都用map ，安全且数据类型没有限定 
int main()
{
	int n, tmp;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> nums[i];
		cnt[nums[i]]++;
	}
	for(int i = 1; i <= n; ++i){
		if(cnt[i] == 2)  cout << i << " ";
		else if(cnt[i] == 0) tmp = i;// 要求先显示重复的数据，后显示缺失的数据 
	} 
	cout << tmp <<endl;
	return 0;
}


