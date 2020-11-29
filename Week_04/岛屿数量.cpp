#include <bits/stdc++.h> 
using namespace std;
char island[55][55];
bool vis[55][55];
int dirs[4][2] = {-1,0, 0,1, 1,0, 0,-1};
int R, C;
int inarea(int x, int y){
	return x >= 0 && x < R && y >= 0 && y < C;
}
void dfs(int x, int y){
	vis[x][y] = 1;
	for(int d = 0; d < 4; ++d){
		int nx = x + dirs[d][0];
		int ny = y + dirs[d][1];
		if(inarea(nx,ny) && !vis[nx][ny] && island[nx][ny] == '1')
			dfs(nx,ny);
	}
}
int main(){
	cin >> R >> C;
	for(int i = 0; i < R; ++i){
		for(int j = 0; j < C; ++j){
			cin >> island[i][j];
		} 		 
	}
	int cnt = 0;
	for(int i = 0; i < R; ++i){
		for(int j = 0; j < C; ++j){
			if(!vis[i][j] && island[i][j] == '1'){
				dfs(i,j);cnt++;
			} 		 
		}			
	}
	cout << cnt; 
	return 0;
} 
