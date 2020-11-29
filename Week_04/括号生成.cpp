#include <bits/stdc++.h>
using namespace std;
int n;
void generate1(int left, int right, string s)
{
	if(right == n)
	{
		cout << s << endl; 
		return; 
	}
	if(left < n)
		generate1(left + 1, right, s + "(") ;
	if(right < left)
		generate1(left, right + 1, s + ")");
}
int main()
{
	cin >> n;
	
	generate1(0,0,"");
	
	return 0;
}
