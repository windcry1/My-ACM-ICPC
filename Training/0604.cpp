#include<iostream>
#include<algorithm>
#include<queue>
const int N = 1000;
char _map[N][N] ;
int vis[N][N];
using namespace std;
struct node
{
	int x;
	int y;
	int step;
};
int n,m;
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
			if(dx>=0 && dy>=0 && dx<n && dy<m && !vis[dx][dy]&&_map[dx][dy]!='X')
			{
				q.push(node{ dx,dy,t.step + 1 });
				vis[dx][dy] = 1;
			}
		}
	}
	return -1;
}
int main()
{
	int x,y,x1,y1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>_map[i][j];
			if(_map[i][j]=='@')
			{
				x=i;
				y=j;
			}
			if(_map[i][j]=='#')
			{
				x1=i;
				y1=j;
			}
		}
	int ans = bfs(x, y, x1, y1);
	if(ans==-1)
		cout<<"GAME OVER"<<endl;
	else cout<<ans<<endl;
	return 0;
}
