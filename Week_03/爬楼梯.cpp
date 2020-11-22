#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	cin >> n;
	int T0 = 1, T1 = 1;
	int T2;
	for(int i = 2; i <= n; ++i){
		T2 = T0 + T1;
		T0 = T1;
		T1 = T2; 
	}
	cout << T2;
	return 0;
} 
