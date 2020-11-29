#include <bits/stdc++.h> 
using namespace std;
int main(){
	long long count = 0;// ¼ÆÊýÆ÷ÇåÁã 
	long long n;
	cin >> n;
	while ((n & (1 << count)) == 0) {
		count += 1;
	}
	cout  << count; 
	return 0;
}





