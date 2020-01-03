#include<iostream>
#include<algorithm>
#include<queue>
const int N = 1000;
int _map[N][N] ;
int vis[N][N];
using namespace std;
struct node
{
	int x;
	int y;
	int step;
};
int dir[4][2] = {
	{-1,0},{1,0},{0,-1},{0,1}}; 

int bfs(int x, int y, int x1, int y1)
{
	int i;
	queue<node> q;
	vis[x][y]= 1;
	q.push(node{ x,y,0 });
	while(!q.empty())
	{
		node t = q.front();
		if(t.x == x1 && t.y == y1)
		{
			return t.step;
		}
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx = t.x + dir[i][0];
			int dy = t.y + dir[i][1];
			if(dx>=0 && dy>=0 && dx<3 && dy<3 && !vis[dx][dy])
			{
				q.push(node{ dx,dy,t.step + 1 });
				vis[dx][dy] = 1;
			}
		}
	}
}
int main()
{
	int i;
	for(i=0;i<3;i++) fill(_map[i], _map[i] + N, 1);
	int ans = bfs(0, 0, 2, 2);
	cout << ans << endl;
	return 0;
}
