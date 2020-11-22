#include <bits/stdc++.h> 
using namespace std;
map<int, int > m;
int nums[100086];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> nums[i];
		m[nums[i]]++;
		if(m[nums[i]] > n/2){
			cout << nums[i];
			return 0;
		}
		
	}
	
	return 0;
}
