//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
char a[210][210];
bool vis[210][210];
int sum[210][210],sum1[210][210];
int n,m;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int x,y,step;
};
void bfs(int x,int y)
{
	vis[x][y]=true;
	queue<node> q;
	node t;
	t.x=x;
	t.y=y;
	t.step=0;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		sum[t.x][t.y]=t.step;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx<0||dx>=n||dy<0||dy>=m||vis[dx][dy]||a[dx][dy]=='#')
				continue;
			vis[dx][dy]=true;
			//sum[dx][dy]=t.step;
			node p;
			p.x=dx;p.y=dy;p.step=t.step+1;
			q.push(p);
		}
	}
}
void bfs1(int x,int y)
{
	queue<node> q;
	node t;
	t.x=x;
	t.y=y;
	t.step=0;
	q.push(t);
	vis[x][y]=true;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		sum1[t.x][t.y]=t.step;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx<0||dx>=n||dy<0||dy>=m||vis[dx][dy]||a[dx][dy]=='#')
				continue;
			//sum[dx][dy]=t.step;
			vis[dx][dy]=true;
			node p;
			p.x=dx;p.y=dy;p.step=t.step+1;
			q.push(p);
		}
	}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n>>m)
	{
		memset(vis,false,sizeof(vis));
		memset(sum1,0,sizeof(sum1));
		memset(sum,0,sizeof(sum));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='Y')
					bfs(i,j);
			}
		memset(vis,false,sizeof(vis));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='M')
					bfs1(i,j); 
			}
		int MIN=MMAX;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='@'&&sum[i][j]&&sum1[i][j])
					MIN=min(MIN,(sum[i][j]+sum1[i][j]));
			}
		cout<<11*MIN<<endl;
	}
 	return 0;
}

