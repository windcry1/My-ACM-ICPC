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
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int a[101][101];
int j;
struct node
{
	int x;
	int mem[101];
	int vis[101][101];
	int i; 
}t,k;
struct mem
{
	char c[101];
	int x;
}p[101];
bool cmp(mem a,mem b)
{
	if(a.x<b.x)
		return true;
	return false;
}
void bfs(int x,int y,int n)
{
	queue<node> q;
	t.x=x;
	memset(t.mem,0,sizeof(t.mem));
	memset(t.vis,0,sizeof(t.vis));
	t.mem[0]=x;
	t.i=1;
	q.push(t);
	while(!q.empty())
	{
		k=q.front();
		q.pop();
		if(k.x==y)
		{
			for(int i=0;i<k.i;i++)
			{
				p[j].x*=10;
				p[j].x+=k.mem[i];
				p[j].c[i]=k.mem[i];
			}
			j++;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			t=k;
			if(i==t.x)
				continue;
			else
			{
				if(a[t.x][i]&&!t.vis[t.x][i])
				{
					t.vis[t.x][i]++;
					for(int i=0;i<n;i++)
						t.vis[i][t.x]=1;
					t.x=i;
					t.mem[t.i++]=t.x;
					q.push(t);
				}
			}
		}
	}
}
int main()
{
	int n,x,y;
	while(scanf("%d",&n)!=EOF)
	{
		char t[101];
		scanf("%d%d",&x,&y);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		bfs(x,y,n);
		sort(x,x+j,cmp);
		for(int i=0;i<j;i++)
			printf("%s\n",p[i].c);
	}
	return 0;
}

