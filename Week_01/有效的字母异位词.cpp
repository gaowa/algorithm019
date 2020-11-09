#include <bits/stdc++.h>
using namespace std;
int s1[26], t1[26];
int main()
{
	string s, t;
	cin >> s >> t;
	for(int i = 0; i < s.size(); ++i) s1[s[i] - 'a']++;
	for(int i = 0; i < t.size(); ++i) t1[t[i] - 'a']++;
	for(int i = 0; i < 26; ++i){
		if(s1[i] != t1[i]) {
			cout << "false";
			return 0;
		} 		
	}
	cout << "true";
	return 0;
}
