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
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
const int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int vis[1001][1001];//到达每个点的最小转向次数 
int n,m;
int map[1001][1001];
int T,a,b,c,d;
struct node
{
	int x,y,direction,times;
};
bool judge(int x,int y)
{
	if(x>=0&&y>=0&&x<n&&y<m)
	{
		if(!map[x][y])
			return true;
		if(x==c-1&&y==d-1)
			return true;
	}
	return false;
}
bool bfs(int x,int y,int x1,int y1)
{
	int i;
	queue<node> q;
	q.push(node{x,y,-1,-1});
	vis[x][y]=-1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(vis[t.x][t.y]>2||t.times>2)
			continue;
		if(t.x==x1&&t.y==y1)
			return true;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(judge(dx,dy)&&vis[dx][dy]>t.times)
			{
				if(t.direction!=i)
				{
					q.push(node{dx,dy,i,t.times+1});
					vis[dx][dy]=t.times+1;
				}
				if(t.direction==i)
				{
					q.push(node{dx,dy,t.direction,t.times});
					vis[dx][dy]=t.times;
				}
			}
		}
	}
	return false;
}
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0)
			return 0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&map[i][j]);
		scanf("%d",&T);
		while(T--)
		{
			scanf("%d%d%d%d",&a,&b,&c,&d);
			memset(vis,3,sizeof(vis));
			if(map[a-1][b-1]==0||map[c-1][d-1]==0)
				printf("NO\n");
			else if(a==c&&b==d)
				printf("NO\n");
			else if(map[a-1][b-1]!=map[c-1][d-1])
				printf("NO\n");
			else
				printf("%s\n",bfs(a-1,b-1,c-1,d-1)?"YES":"NO");
		}
	}
	return 0;
}

