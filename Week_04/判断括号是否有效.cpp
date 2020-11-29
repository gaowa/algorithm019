// ())()()  
// ()[]{} [}()    有最近的匹配度
// 1、 遍历整个字符串， 碰到左括号入栈 
// 2、 如碰到右括号 ，和栈顶元素是否匹配  若匹配则弹出栈 否则不是有效的
// 3、 遍历结束后判断栈是否为空 
// 定义 stack<char >  st;
//  st.push(x) st.pop()  st.top()  st.size()  st.empty()
// ((
#include <bits/stdc++.h> 
using namespace std;
stack<char > st;
int main(){
	string s; 
	cin >> s;
	for(int i = 0; i < s.size(); ++i ){
		// 碰到左括号入栈 
		if(s[i] == '{' || s[i] == '[' || s[i] == '(')  st.push(s[i]);
		//如碰到右括号 ，和栈顶元素是否匹配  若匹配则弹出栈 否则不是有效的
		else if(s[i] == '}' || s[i] == ']' || s[i] == ')') {
			// 注意 做栈的题目 读栈顶元素 或者 弹出栈顶元素时 都要判断栈是否为空 
			if(st.empty()) {
				cout << "无效" ; return 0;
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
		cout << "无效";
	}
	else
		cout << "有效" ;
	return 0;
}
