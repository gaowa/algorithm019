#include <bits/stdc++.h> 
using namespace std;
// �����ֺ�
// ����map���ݽṹ 
int nums[100086];
map<int, int > m;// key value ��ֵ�� 
int main()
{
	int n,target;
	cin >> n >> target;
	for(int i = 0; i < n; ++i) {
		cin >> nums[i];
		m.insert(make_pair(nums[i],i));
	}
	for(int i = 0; i < n; ++i)// map�е�count����key ���������key �ͷ���1 
	{
		if(m.count(target - nums[i]) && i != m[target - nums[i]])
		{
			cout << m[target - nums[i]] << " " << i << endl;
			return 0;
		}
	}
	
	return 0;
}
