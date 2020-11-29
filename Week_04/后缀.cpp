#include <bits/stdc++.h> 
using namespace std;
stack<int > st; 
int main(){
	string s;
	//cin >> s;//
	getline(cin, s);
	// 遍历整个字符串
	for(int i = 0; i < s.size(); ++i) {
		// 判断是否为数字字符   '0' <= x <= '9' 
		 
		if(s[i] >= '0' && s[i] <= '9'){
			st.push(s[i] - '0') ;
		}
		// 运算符 + - * / 
		else if(s[i] == '+' || s[i] == '-'|| s[i] == '*' || s[i] == '/' ){
			//if(!st.empty())
			{
				int num1 = st.top();st.pop();
				int num2 = st.top();st.pop();
				int num; 
				if(s[i] == '+') num = num2 + num1;
				if(s[i] == '-') num = num2 - num1;
				if(s[i] == '*') num = num2 * num1;
				if(s[i] == '/') num = num2 / num1;
				st.push(num);
			}
		}
	} 
	if(!st.empty()){
		cout << st.top(); st.pop();
	}
	return 0;
}
