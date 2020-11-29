// 输入一个整数， 判断它是否为素数 // 2 3 5 7 只能被 1 和 本身整除的数 
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	scanf("%d", &n) ;
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0)  {
			cout << "不是";return 0;
		}
	}
	cout << "素数";
	return 0;
}
