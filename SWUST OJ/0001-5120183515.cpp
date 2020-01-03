#include <iostream>
using namespace std;
int dir[4][2] = { {-1,0}, {0,1}, {0,-1}, {1,0} };
char map[1001][1001];
bool vis[1001][1001];
int m, n;
int count = 0;
void dfs(int i,int j) {
	for (int k = 0; k < 4; k++) {
		int x = i + dir[k][0];
		int y = j + dir[k][1];
		if (x>=0 && x<n && y>=0 && y<m ) {
			if (map[x][y] == '*' && !vis[x][y]) {
				count++;
				vis[x][y] = 1;
				dfs(x, y);
			}
		}
	}
}
int main(){
	int ans = 0;
		cin >> m>> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				cin >> map[i][j];
			}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				if (map[i][j] == '*') {
					vis[i][j] = 1;
					count = 1;
					dfs(i, j);
					if (count > ans)
						ans = count;
				}
			}
		cout << ans;
	return 0;
}
