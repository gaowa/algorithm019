#include <bits/stdc++.h> 
using namespace std;
int nums[100086];
bool used[100086];
vector<int > res;// ������� result�� 
int n;
void permutation(int pos)
{
	if(pos >= n)
	{
		for(int i = 0; i < res.size(); ++i) 
			if(i < res.size() - 1) cout << res[i] << " ";
			else cout << res[i]  << endl;	
	}
	for(int i = 0; i < n; ++i){
		if(used[i] == false){
			used[i] = true;
			res.push_back(nums[i]);// ���������з�����Ҫ��Ԫ��
			permutation(pos + 1);
			res.pop_back(); // �ù���Ҫ����
			used[i] = false;
		}
	}
}
int main()
{
	
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	permutation(0);
	return 0;
}
