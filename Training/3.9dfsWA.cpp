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


int m,n,X,a,b,c,d,t,direction,flag;//direction 位置 
char map[101][101];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int vis[101][101],step;//step,转弯次数，former 之前的位置 
void dfs(int x,int y)
{
	int i;
	if(step>X+1)
		return;
	if(x==d-1&&y==c-1&&step<=X+1)
	{
		flag=1;
		return;
	}
	if(flag)
		return;
	for(i=0;i<4;i++)
	{
		int former=direction;
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx>=0&&dy>=0&&dx<m&&dy<n&&map[dx][dy]=='.'&&!vis[dx][dy])//如果这边没有被访问过的话 
		{
			vis[dx][dy]=1;
			if(direction!=i)//转向，次数+1，但是第一个不算 
			{
				direction=i;
				step++;
			}
			dfs(dx,dy);
			vis[dx][dy]=0;
			if(former!=i)
				step--;
			direction=former;
		}
	}
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		memset(vis,0,sizeof(vis));
		direction=-1;
		step=0;
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++)
			scanf("%s",map[i]);
		scanf("%d%d%d%d%d",&X,&a,&b,&c,&d);
		vis[b-1][a-1]=1;
			dfs(b-1,a-1);
		if(flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

