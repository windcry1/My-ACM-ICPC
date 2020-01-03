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
const double PI=3.1415927;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int vis[5][5]={0};
int map[5][5];
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int x,y;
	int a[25]={0};
	int b[25]={0};
	int flag=0;
}t,c;
bool judge(int x,int y)
{
	if(x<0||y<0||x>4||y>4||map[x][y]||vis[x][y])
		return false;
	return true;
}
bool bfs(int a,int b)
{
	int i;
	queue<node> q;
	vis[a][b]=1;
	t.x=a;
	t.y=b;
	t.a[t.flag]=t.x;
	t.b[t.flag]=t.y;
	t.flag++;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==4&&t.y==4)
			return true;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(judge(dx,dy))
			{
				vis[dx][dy]=1;
				c.x=dx;
				c.y=dy;
				c.a[t.flag]=dx;
				c.b[t.flag]=dy;
				c.flag=t.flag+1;
				q.push(c);
			}
		}
	}
	return false;
}
int main()
{
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&map[i][j]);
	if(bfs(0,0))
	{
		for(int i=0;i<t.flag;i++)
			printf("(%d,%d)\n",t.b[i],t.a[i]);
	}
	else printf("No Way!\n");
	return 0;
}
