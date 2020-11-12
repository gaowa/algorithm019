#include <bits/stdc++.h>
using namespace std;
// 行 列 左对角  右对角
int row[100086] ;
int col[100086];
int right_diag[200086];
int left_diag[200086];
int n;
void Nqeens(int pos){
	if(pos >= n){
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				if(row[i] == j)
					cout << "Q";
				else
					cout << "." ;
			}
			cout << endl;
		}
		cout << endl;
		return;
	}
	for(int i = 0; i < n; ++i){
		if(!col[i] && !right_diag[i + pos] && !left_diag[pos - i  + n - 1]) {
			col[i] = right_diag[i + pos] = left_diag[pos - i + n - 1] = true;
			row[pos] = i;
			Nqeens(pos + 1);
			row[pos] = -1;
			col[i] = right_diag[i + pos] = left_diag[pos - i + n - 1] = false;
		}	
	} 
	
}
int main()
{
	cin >> n;
	Nqeens(0); 
	return 0;
 } 
