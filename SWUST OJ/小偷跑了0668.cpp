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
int map[6][6];
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int vis[6][6],step[6][6];
char s[26][6];
struct node
{
	int x,y,s[26][6];
};
bool judge(int x,int y)
{
	if(x<0||y<0||x>=5||y>=5)
		return false;
	if(vis[x][y]||map[x][y])
		return false;
	return true;
}
void bfs(int x,int y,int x1,int y1)
{
	int i;
	node a;
	queue<node> q;
	a.x=x;a.y=y;
	q.push(a);
	vis[x][y]=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x1&&t.y==y1)
			return;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(judge(dx,dy))
			{
				vis[dx][dy]=1;
				printf("(%d,%d)\n",dy,dx);
				a.x=dx;a.y=dy;
				q.push(a);
			}
		}
	}
	printf("No Way!\n");
}
int main()
{
	memset(vis,0,sizeof(vis));
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&map[i][j]);
	printf("(0,0)\n");
	bfs(0,0,4,4);
	return 0;
}

