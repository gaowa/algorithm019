#include <bits/stdc++.h>
using namespace std;
int nums[100086];
int main(){
	int n;
	
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> nums[i];
	int c_5 = 0, c_10 = 0, c_20 = 0;
	for(int i = 0; i < n; ++i){
		if(nums[i] == 5) c_5++;
		if(nums[i] == 10){
			if(c_5 == 0)  {
				cout << "false"; return 0;
			}
			c_5--;
			c_10++;
		}
		if(nums[i] == 20){
			if(c_5 > 0 && c_10 > 0) c_5--, c_10--;
			else if(c_5 >= 3) c_5 -= 3;
			else{
				cout << "false"; return 0;
			}
				
			c_20++;
		}
	}
	cout << "true";
	return 0;
}
