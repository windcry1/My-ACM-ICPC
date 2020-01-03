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
int dir[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,1},{1,-1}};//此处应为八个方向 
int n,m;
char a[101][101];
struct node
{
	int x,y;
};
void bfs(int x,int y)
{	
	int i;
	queue<node> q;
	node g;
	g.x=x;g.y=y;
	q.push(g);
	a[x][y]='*';
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<8;i++)//八个方向寻找是否成片 
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&a[dx][dy]=='@')//如果出现@，变为*(防止下面重复运算) 
			{
				a[dx][dy]='*';
				g.x=dx;g.y=dy;
				q.push(g);
			}
		}
	}
}
int main()
{
	int x;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m==0&&n==0) 
			return 0;
		x=0;//初始化 
		for(int i=0;i<m;i++)
			scanf("%s",a[i]);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='@')//找到一个@就bfs一下是否成一片，并且消除它们 
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

