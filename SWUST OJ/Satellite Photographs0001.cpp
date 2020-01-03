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
char a[81][1001];
struct node
{
	int x,y;
};
int bfs(int x,int y)
{	
	int i;
	queue<node> q;
	node g;
	g.x=x;g.y=y;
	q.push(g);
	a[x][y]='.';
	num=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&a[dx][dy]=='*')
			{
				a[dx][dy]='.';
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
	int x=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
		scanf("%s",a[i]);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='*')
				x=max(bfs(i,j),x);
		}
	}
	printf("%d\n",x);
	return 0;
}

