#include <bits/stdc++.h> 
using namespace std;
int row[10086];
bool col[10086];
bool right_diag[20086];
bool left_diag[20086];
void Nqeen(int n, int pos){
	if(pos >= n){
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j) {
				if(row[i] == j) cout << "Q";
				else cout << ".";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}
	for(int i = 0; i < n; ++i){
		if(!col[i] && !right_diag[i + pos] && !left_diag[pos - i + n - 1]){
			col[i] = true;
			right_diag[i + pos] = true;
			left_diag[pos - i + n - 1] = true;
			row[pos] = i;
			Nqeen(n, pos + 1) ;
			row[pos] = -1;
			col[i] = false;
			right_diag[i + pos] = false;
			left_diag[pos - i + n - 1] = false;
		}
	}
}

int main(){
	int n;
	cin >> n;
	Nqeen(n, 0);// 
	return 0;
}
