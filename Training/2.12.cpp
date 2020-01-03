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
int n;
int dir[11][2],vis[10010][10010];
struct node
{
	int x,y,step;
};
queue<node> q;
int bfs(int fx,int fy,int tx,int ty)
{
	while(!q.empty())
		q.pop();
	vis[fx][fy]=1;
	q.push(node{fx,fy,0});
	while(!q.empty())
	{
		int i;
		node t=q.front();
		q.pop();
		if(t.x==tx&&t.y==ty)
			return t.step;
		for(i=0;i<n;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<10001&&dy<10001&&!vis[dx][dy])
			{
				vis[dx][dy]=1;
				q.push(node{dx,dy,t.step+1});
			}
		}
	}
	return 0;
}
int main()
{
	int T,fx,fy,tx,ty;
	cin>>T;
	while(T--)
	{
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&fx,&fy,&tx,&ty);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d%d",&dir[i][0],&dir[i][1]);
		int ans=bfs(fx+5000,fy+5000,tx+5000,ty+5000);
		if(ans)
			printf("%d\n",ans);
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}

