#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
unordered_map<int, int> cnt;//��������map ����ȫ����������û���޶� 
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
		else if(cnt[i] == 0) tmp = i;// Ҫ������ʾ�ظ������ݣ�����ʾȱʧ������ 
	} 
	cout << tmp <<endl;
	return 0;
}


