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
char map[21][21];
int n,m,num;
struct node
{
	int x,y;
};
int bfs(int x,int y)
{
	int i;
	queue<node> q;
	map[x][y]='#';
	q.push(node{x,y});
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<m&&map[dx][dy]=='.')
			{
				map[dx][dy]='#';
				num++;
				q.push(node{dx,dy});
			}
		}
	}
}
int main()
{
	int x,y;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m==0&&n==0)
			return 0;
		num=1;
		for(int i=0;i<n;i++)
		{
			scanf("%s",map[i]);
			for(int j=0;j<m;j++)
			{
				if(map[i][j]=='@')
				{
					x=i;
					y=j;
				}
			}
		}
		bfs(x,y);
		printf("%d\n",num);
	}
	return 0;
}

