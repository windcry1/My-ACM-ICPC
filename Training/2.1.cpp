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
int n,m,map[101][101];
int vis[101][101];
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
struct node
{
	int x,y,t,step;
};

int bfs(int a,int b,int x,int y)
{
	int i;
	queue<node> q;
	while(!q.empty())
		q.pop();
	q.push(node{a,b,6,0});//开始也能回来再走一次 
	while(!q.empty())
	{
		node t=q.front();
		q.pop(); 
		if(t.x==x&&t.y==y)
			return t.step;
		if(t.t<=1)//会爆炸的情况扔掉 
			continue;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<m&&!vis[dx][dy]&&(map[dx][dy]==1||map[dx][dy]==2)||map[dx][dy]==3)//没有2因为2是开头 
			{
				q.push(node{dx,dy,t.t-1,t.step+1});//此处可以重复走 
			}
			if(dx>=0&&dy>=0&&dx<n&&dy<m&&!vis[dx][dy]&&map[dx][dy]==4)
			{
				vis[dx][dy]=1;
				q.push(node{dx,dy,6,t.step+1});//因为是直接归零，没必要重复走故直接把vis变成1
			}
		}
	}
	return -1;
}
int main()
{
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
		scanf("%d%d",&n,&m);
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&map[i][j]);
				if(map[i][j]==2)//记录起点
				{
					a=i;
					b=j;
				}
				if(map[i][j]==3)//记录终点 
				{
					x=i;
					y=j;
				}
			}
		}
		int ans=bfs(a,b,x,y);
		printf("%d\n",ans);
	}
	return 0;
}

