//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf = 1e-8;
//const double e=2.718281828;
const double PI = 3.141592653589793;
const int MMAX = 2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int m, n, X, a, b, c, d, t;
char map[101][101];
const int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int vis[101][101];//step,×ªÍä´ÎÊý
struct node
{
	int x,y,step;
};
bool bfs(int x, int y,int x1,int y1)
{
	queue<node> q;
	int i;
	vis[x][y]=1;
	q.push(node{x,y,-1});
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x1&&t.y==y1&&t.step<=X)
			return true;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			while(map[dx][dy]=='.'&&dx>=0&&dy>=0&&dx<m&&dy<n)
			{
				if(vis[dx][dy]==0)
				{
					vis[dx][dy]=1;
					q.push(node{dx,dy,t.step+1});
				}
				dx+=dir[i][0];
				dy+=dir[i][1];
			}
		}
	}
	return false;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		memset(vis, 0, sizeof(vis));
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; i++)
			scanf("%s", map[i]);
		scanf("%d%d%d%d%d", &X, &a, &b, &c, &d);
		if (bfs(b-1,a-1,d-1,c-1))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
