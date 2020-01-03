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
#include<cctype>
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
int n,m;
int a[1010][1010];
typedef struct{
	int x,y;
}node;
void bfs(int x,int y)
{
	int i;
	queue<node> q;
	node g;
	g.x=x;g.y=y;
	q.push(g);
	a[x][y]=0;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<m&&a[dx][dy]!=0)
			{
				a[dx][dy]=0;
				g.x=dx;g.y=dy;
				q.push(g);
			}
		}
	}
	return;
}
int main()
{
	int x;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		x=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]!=0)
				{
					bfs(i,j);
					x++;
				}
			}
		}
		printf("%d\n",x);
	}
	return 0;
}

