#include <bits/stdc++.h>
using namespace std;
int prices[100086];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> prices[i];
	int price = 0;
	for(int i = 0; i < n; ++i){
		if( i > 0 && prices[i - 1] < prices[i]) price += prices[i] - prices[i - 1];
	}
	cout << price;
	return 0;
}
