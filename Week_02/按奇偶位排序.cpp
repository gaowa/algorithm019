#include <bits/stdc++.h> 
using namespace std;
int A[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> A[i];
	int ou = 0, ji = 1; // ����ָ���ʼ��Ϊ1��ż��ָ���ʼ��Ϊ0,����ÿ�μ�2
	while(ou < n && ji < n)	{
		while(ou < n && A[ou] % 2 == 0) ou += 2;// ż����ż��λ������ż�� +2 
		while(ji < n && A[ji] % 2 != 0) ji += 2;// ����������λ���������� +2 
		if(ou < n && ji < n){
			swap(A[ou], A[ji]) ;// ����λ����ż������ż��λ�������� �򽻻� 
			ou += 2, ji += 2;
		} 		
	}
	for(int i = 0; i < n; ++i) cout << A[i] << " ";
	return 0;
}


