#include <bits/stdc++.h>
using namespace std;
stack<int > st;
int main(){
	string s;
	cin >> s;
	bool flag = 0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')	
		{
			st.push(s[i]);
		}
		else
		{
			if(s[i] == ')' || s[i] == '}' || s[i] == ']')
			{
				if(st.empty()) 
				{
					cout << "false";
					return 0;
				} 
					
				else
				{
					if(s[i] == ')' && st.top() == '(' || s[i] == ']' && st.top() == '['  || s[i] == '}' && st.top() == '{' )
						st.pop();
					else
						break;
				}
			}
		}
	}
	if(st.empty()) cout << "true";
	else
	{
		while(!st.empty()) st.pop();
		cout << "false";
	}
	return 0;
}
