#include <bits/stdc++.h> 
using namespace std;
stack<int > st; 
int main(){
	string s;
	//cin >> s;//
	getline(cin, s);
	// ���������ַ���
	for(int i = 0; i < s.size(); ++i) {
		// �ж��Ƿ�Ϊ�����ַ�   '0' <= x <= '9' 
		 
		if(s[i] >= '0' && s[i] <= '9'){
			st.push(s[i] - '0') ;
		}
		// ����� + - * / 
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
