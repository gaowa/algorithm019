#include <bits/stdc++.h>
using namespace std;
int R, C;
bool vis[55][55] = {0};
char board[55][55];

int dirs[8][2] = {-1,0, -1, 1, 0, 1, 1, 1, 1,0,1,-1,0,-1,-1,-1};
bool inarea(int x, int y){
	return x >= 0 && x < R && y >= 0 && y < C; 
}
void dfs(int x, int y){
	vis[x][y] = 1;
	int mine = 0; 
	for(int d = 0; d < 8; ++d){
		int nx = x + dirs[d][0];
		int ny = y + dirs[d][1];
		if(inarea(nx, ny) && board[nx][ny] == 'M') mine++;
	}
	if(mine > 0) board[x][y] = char(mine + '0');
	else
	{
		board[x][y] = 'B';
		for(int d = 0; d < 8; ++d){
			int nx = x + dirs[d][0];
			int ny = y + dirs[d][1];
			if(inarea(nx, ny) && !vis[nx][ny] ) dfs(nx,ny);
		}	
	}
}
int main(){
	int row, col;
	cin >> R >> C >> row >> col;
	for(int i = 0; i < R; ++i) {
		for(int j = 0; j < C; ++j)
			cin >> board[i][j];
	}
	if(board[row][col] != 'M') 
		dfs(row, col);
	else
		board[row][col] = 'X'; 
	for(int i = 0; i < R; ++i) {
		for(int j = 0; j < C; ++j)
			cout << board[i][j] << " ";
		cout << endl;
	}
	return 0;
}
