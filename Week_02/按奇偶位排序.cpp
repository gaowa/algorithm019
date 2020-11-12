#include <bits/stdc++.h> 
using namespace std;
int A[100086];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> A[i];
	int ou = 0, ji = 1; // 奇数指针初始化为1，偶数指针初始化为0,后面每次加2
	while(ou < n && ji < n)	{
		while(ou < n && A[ou] % 2 == 0) ou += 2;// 偶数在偶数位置上则偶数 +2 
		while(ji < n && A[ji] % 2 != 0) ji += 2;// 奇数在奇数位置上则奇数 +2 
		if(ou < n && ji < n){
			swap(A[ou], A[ji]) ;// 奇数位上有偶数，且偶数位上有奇数 则交换 
			ou += 2, ji += 2;
		} 		
	}
	for(int i = 0; i < n; ++i) cout << A[i] << " ";
	return 0;
}


