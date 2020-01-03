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

struct node
{
	int f,x,y,step;
};
queue<node> q;
int vis[2][11][11];
char map[2][11][11];
int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
int n,l,m,times,flag;
int bfs(int f,int x,int y,int a,int b,int c)
{
	while(!q.empty())
		q.pop();//初始化，为了多组输入做准备 
	int i;
	vis[f][x][y]=1;
	q.push(node{f,x,y,0});
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.step>times)
			return 0;
		if(t.f==a&&t.x==b&&t.y==c)//到达终点返回步数 
			return t.step;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			flag=t.f;
			if(dx>=0&&dy>=0&&dx<l&&dy<m&&(map[flag][dx][dy]=='.'||map[flag][dx][dy]=='P')&&!vis[flag][dx][dy])//这一层是正常的或者到达终点 
			{
				vis[flag][dx][dy]=1;//走过了
				q.push(node{flag,dx,dy,t.step+1});
			}
			if(dx>=0&&dy>=0&&dx<l&&dy<m&&map[flag][dx][dy]=='#'&&(map[1-flag][dx][dy]=='.'||map[1-flag][dx][dy]=='P')&&!vis[flag][dx][dy])//这一层是传送门，另外一层不是墙并且不是传送门 
			{
				vis[flag][dx][dy]=1;//这层走过 
				flag=1-flag;//转化成下一层or上一层 
				q.push(node{flag,dx,dy,t.step+1});//把下一层推入queue
				vis[flag][dx][dy]=1;//下一层的这个点也走过
			}
		}
	}
	return 0;
}
int main()
{
	int a,b,c;
	cin>>n;
	while(n--)
	{
		memset(vis,0,sizeof(vis));
		cin>>l>>m>>times;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<l;j++)
			{
				scanf("%s",map[i][j]);//输入地图 
				for(int k=0;k<m;k++)
				{
					if(map[i][j][k]=='P')
					{
						a=i;
						b=j;
						c=k;
					}
				}
			}	
		}
		int ans=bfs(0,0,0,a,b,c);
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

