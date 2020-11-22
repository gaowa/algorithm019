#include <bits/stdc++.h> 
using namespace std;
string letter[10] = {"","" ,"abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string digits;
void lettercombination(int pos, string s){
	if(pos == digits.size()){
		cout << s << " ";
		return ;
	}
	string ss = letter[digits[pos] - '0'];
	for(int i = 0; i < ss.size(); ++i){
		lettercombination(pos + 1, s + ss[i]);
	}
}
int main(){
	
	cin >> digits;
	lettercombination(0, "");
	return 0;
} 
