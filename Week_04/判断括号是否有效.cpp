// ())()()  
// ()[]{} [}()    �������ƥ���
// 1�� ���������ַ����� ������������ջ 
// 2�� ������������ ����ջ��Ԫ���Ƿ�ƥ��  ��ƥ���򵯳�ջ ��������Ч��
// 3�� �����������ж�ջ�Ƿ�Ϊ�� 
// ���� stack<char >  st;
//  st.push(x) st.pop()  st.top()  st.size()  st.empty()
// ((
#include <bits/stdc++.h> 
using namespace std;
stack<char > st;
int main(){
	string s; 
	cin >> s;
	for(int i = 0; i < s.size(); ++i ){
		// ������������ջ 
		if(s[i] == '{' || s[i] == '[' || s[i] == '(')  st.push(s[i]);
		//������������ ����ջ��Ԫ���Ƿ�ƥ��  ��ƥ���򵯳�ջ ��������Ч��
		else if(s[i] == '}' || s[i] == ']' || s[i] == ')') {
			// ע�� ��ջ����Ŀ ��ջ��Ԫ�� ���� ����ջ��Ԫ��ʱ ��Ҫ�ж�ջ�Ƿ�Ϊ�� 
			if(st.empty()) {
				cout << "��Ч" ; return 0;
			} 
			else if(st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']' || st.top() == '(' &&s[i] == ')')
			{
				st.pop();
			}
			else
			{
				break;
			}
		}
	}
	if(!st.empty()) {
		while(!st.empty()) st.pop();
		cout << "��Ч";
	}
	else
		cout << "��Ч" ;
	return 0;
}
