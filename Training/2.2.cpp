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
int Min,n,m,dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};//四个方向 
char map[201][201];
struct node
{
	int x,y,step;
};
int bfs(int x,int y,int x1,int y1)
{
	Min=MMAX;
	int i;
	queue<node> q;
	q.push(node{x,y,0});
	map[x][y]='#';
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x1&&t.y==y1)
			return t.step;
		if(map[t.x][t.y]=='X')//当发现之前是守卫的点，标记为不可走，步数+1，直接走到下一步 
		{
			map[t.x][t.y]='#';
			t.step++;
			q.push(node{t.x,t.y,t.step});
			continue;
		}
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&map[dx][dy]=='a')//如果是终点或者正常路径，则标记为不可读，入列 
			{
				map[dx][dy]='#';
				q.push(node{dx,dy,t.step+1});
			}
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&map[dx][dy]=='.')
			{
				map[dx][dy]='#';
				q.push(node{dx,dy,t.step+1});
			if(dx>=0&&dy>=0&&dx<m&&dy<n&&map[dx][dy]=='x')//用X作为标记，使其优先级移到队列最后 
			{
				map[dx][dy]='X';
				q.push(node{dx,dy,t.step+1});
				
			}
			
			}
		}
	}
	return 0;//找不到返回0 
}
int main()
{
	int a,b,a1,b1;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%s",map[i]);
			for(int j=0;j<n;j++)
			{
				if(map[i][j]=='r')//找起点 
				{
					a=i;
					b=j;
				}
				if(map[i][j]=='a')//找终点 
				{
					a1=i;
					b1=j;
				}
			}
		}
		int ans=bfs(a,b,a1,b1);
		if(!ans)//如果ans不等于0就输出ans 
			printf("Poor ANGEL has to stay in the prison all his life.\n");
		else
			printf("%d\n",ans);
	}
	return 0;
}

