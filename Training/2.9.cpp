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
int n,k;
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int vis[2][21][21];//此处的vis仅仅针对楼梯而言 
char map[21][21];
struct node
{
	int x,y,mod,step;
};
int bfs(int a,int b,int x,int y)
{
	int i;
	queue<node> q;
	while(!q.empty())
		q.pop();//初始化
	q.push(node{a,b,0,0});//初态为0 
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x&&t.y==y)
			return t.step;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<k&&(map[dx][dy]=='.'||map[dx][dy]=='T'||map[dx][dy]=='S'))
			{
				q.push(node{dx,dy,(t.mod+1)%2,t.step+1});
			}
			if(t.mod==0&&dx>=0&&dy>=0&&dx<n&&dy<k&&!vis[t.mod][dx][dy]&&map[dx][dy]=='|'&&(i==0||i==1))
			{
				vis[t.mod][dx][dy]=1;
				dx+=dir[i][1];
				q.push(node{dx,dy,(t.mod+1)%2,t.step+1});
			}
			if(t.mod==1&&dx>=0&&dy>=0&&dx<n&&dy<k&&!vis[t.mod][dx][dy]&&map[dx][dy]=='|'&&(i==2||i==3))
			{
				vis[t.mod][dx][dy]=1;
				dy+=dir[i][1];
				q.push(node{dx,dy,(t.mod+1)%2,t.step+1});
			}
			if(t.mod==0&&dx>=0&&dy>=0&&dx<n&&dy<k&&!vis[t.mod][dx][dy]&&map[dx][dy]=='-'&&(i==2||i==3))
			{
				vis[t.mod][dx][dy]=1;
				dy+=dir[i][1];
				q.push(node{dx,dy,(t.mod+1)%2,t.step+1});
			}
			if(t.mod==1&&dx>=0&&dy>=0&&dx<n&&dy<k&&!vis[t.mod][dx][dy]&&map[dx][dy]=='-'&&(i==0||i==1))
			{
				vis[t.mod][dx][dy]=1;
				dx+=dir[i][0];
				q.push(node{dx,dy,(t.mod+1)%2,t.step+1});
			}
		}
	}
}
int main()
{
	int a,b,x,y;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
		{
			scanf("%s",map[i]);
			for(int j=0;j<k;j++)
			{
				if(map[i][j]=='S')
				{
					a=i;
					b=j;
				}
				if(map[i][j]=='T')
				{
					x=i;
					y=j;
				}
			}
		}
	}
	return 0;
}

