#include <bits/stdc++.h> 
using namespace std;
int n; 

void generate1(int left, int right, string s)// left 左括号个数， right 右括号个数
											// 在当前位置 生成括号
{
	if(right >= n) // left 生成 n个 并且 right生成 n个才有效生成括号
	{
	
		cout<< s << endl;
		
		return ;
	} 
	string s1 = s + "(";
	string s2 = s + ")";
	if(left < n){		
		generate1(left + 1, right, s1);
	} 
	if(right < left){
	
		generate1(left, right + 1, s2);
	}
		
} 
int main(){
	
	cin >> n;
	generate1(0, 0, "");//  
	return 0;
}
