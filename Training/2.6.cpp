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
	int x,y;
};

int n,k,vis[201][201];
char map[201][201];
int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};//四个方向 
void bfs(int a,int b,int step[][201])//暴力枚举能到的地方各点的步数 
{
	int i;
	queue<node> q;
	q.push(node{a,b});
	vis[a][b]=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<n&&dy<k&&!vis[dx][dy]&&map[dx][dy]!='#'&&!vis[dx][dy])//基本搜索 
			{
				vis[dx][dy]=1;
				step[dx][dy]=step[t.x][t.y]+1;
				q.push(node{dx,dy});
			}
		}
	}
}
int main()
{
	int a1,b1,a2,b2,step1[201][201],step2[201][201];
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		memset(step1,0,sizeof(step1));
		memset(step2,0,sizeof(step2));
		int t=0,ans=MMAX;
		for(int i=0;i<n;i++)
		{
			scanf("%s",map[i]);
			for(int j=0;j<k;j++)
			{
				if(map[i][j]=='Y')
				{
					a1=i;
					b1=j;
				}
				if(map[i][j]=='M')//把两个点记录下来 
				{
					a2=i;
					b2=j;
				}
			}
		}
			memset(vis,0,sizeof(vis));
			bfs(a1,b1,step1);
			memset(vis,0,sizeof(vis));
			bfs(a2,b2,step2);
			for(int i=0;i<n;i++)//遍历所有元素，使得能走到KFC且为最小 
			{
				for(int j=0;j<k;j++)
				{
                	if(map[i][j]=='@'&&step1[i][j]&&step2[i][j]&&(step1[i][j]+step2[i][j]<ans))//注意此处step为0代表KFC到不了 
					ans=step1[i][j]+step2[i][j]; 
				}
			}
			printf("%d\n",ans*11);
	}
	return 0;
}

