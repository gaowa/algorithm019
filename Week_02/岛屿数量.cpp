#include <bits/stdc++.h> 
using namespace std;

bool visited[303][303];
char grid[303][303];
int R, C;
int dirs[4][2] = {-1,0, 0, 1, 1,0, 0, -1};
bool inarea(int x, int y){
	return x >= 0 && x < R && y >= 0 && y < C;
}

void dfs(int x, int y){
	for(int d = 0; d < 4; ++d){
		int nx = x + dirs[d][0];
		int ny = y + dirs[d][1];
		if(!visited[nx][ny] && grid[nx][ny] == '1' && inarea(nx, ny)){
			visited[nx][ny] = 1;
			dfs(nx, ny);
		}
	}
}
int main(){
	cin >> R >> C;
	int count = 0;
	for(int i = 0; i < R; ++i){
		for(int j = 0; j < C; ++j){
				cin >> grid[i][j];
			}
		}
	
	for(int i = 0; i < R; ++i){
		for(int j = 0; j < C; ++j){
			if(!visited[i][j] && grid[i][j] == '1'){
				dfs(i, j);
				count++;
			}
		}
	}
	cout << count ;
	return 0;
}
