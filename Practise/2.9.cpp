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
char map[21][21];
const int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node
{
	int x,y,step;
};
int bfs(int x,int y,int x1,int y1)
{
	int i;
	queue<node> q;
	q.push(node{x,y,0});
	map[x][y]='*';
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x1&&t.x==y1)
			return t.step;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<k&&map[dx][dy]=='.')
			{
				q.push(dx,dy,q.step+1);
				map[dx][dy]='*';
				for(i=0;i<n;i++)
				{
					for(int j=0;j<k;j++)
					{
						if(map[i][j]=='|')
							map[i][j]='-';
						if(map[i][j]=='-')
							map[i][j]=='|';
					}
				}
			}
			if(dx>=0&&dy>=0&&dx<n&&dy<k&&map[dx][dy]=='|'&&(i==0||i==1))
			{
				q.push(dx,dy,q.step+1);
				map[dx][dy]='*'
				for(i=0;i<n;i++)
				{
					for(int j=0;j<k;j++)
					{
						if(map[i][j]=='|')
							map[i][j]='-';
						if(map[i][j]=='-')
							map[i][j]='|';
					}
				}
			}
			if(dx>=0&&dy>=0&&dx<n&&dy<k&&map[dx][dy]=='-'&&(i==2||i==3))
			{
				q.push(dx,dy,q.step+1);
				map[dx][dy]='*'
				for(i=0;i<n;i++)
				{
					for(int j=0;j<k;j++)
					{
						if(map[i][j]=='|')
							map[i][j]='-';
						if(map[i][j]=='-')
							map[i][j]='|';
					}
				}
			}
		}
	}
	return 0;
}
int main()
{
	int n,k,a,b,c,d;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",&map[i]);
			for(int j=0;j<k;j++)
			{
				if(map[i][j]=='S')
				{
					a=i;
					b=j;
				}
				if(map[i][j]=='T')
				{
					c=i;
					d=j;
				}
			}
			int ans=bfs(a,b,c,d);
			if(ans)
				printf("%d\n",ans);
			else
				printf("")
		}
	}
	return 0;
}

