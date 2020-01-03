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
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int n,m,num=0;
char a[1010][1010];
int vis[1010][1010];
typedef struct
{
	int x,y;
}node;
int bfs(int x,int y)
{
	int i;
	queue<node> q;
	node g;
	g.x=x;g.y=y;
	q.push(g);
	vis[x][y]=1;
	num=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&a[dx][dy]=='*'&&!vis[dx][dy])
			{
				vis[dx][dy]=1;
				g.x=dx;g.y=dy;
				q.push(g);
				num++;
			}
		}
	}
	return num;
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	int x;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(vis,0,sizeof(vis));
		x=0;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='*'&&!vis[i][j])
					x=max(bfs(i,j),x);
			}
		}
		printf("%d\n",x);
	}
	return 0;
}

