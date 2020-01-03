//Author:WindCry1
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
char a[15][15];
bool vis[15][15];
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int x,y,step;
};
int n,m;
int MIN;
bool check()
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]=='#'&&!vis[i][j])
				return false;
	return true;
}
void bfs(int x1,int y1,int x2,int y2)
{
	queue<node> q;
	node t;
	t.x=x1;t.y=y1;t.step=0;
	vis[t.x][t.y]=true;
	q.push(t);
	t.x=x2;t.y=y2;t.step=0;
	vis[t.x][t.y]=true;
	q.push(t);
	int MAX=0;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(MAX<t.step)
			MAX=t.step;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx<0||dy<0||dx>=n||dy>=m||vis[dx][dy]||a[dx][dy]=='.')
				continue;
			vis[dx][dy]=true;
			node p;
			p.x=dx;p.y=dy;p.step=t.step+1;
			q.push(p);
		}
	}
	if(MIN>MAX&&check())
		MIN=MAX;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,times=0;
	cin>>T;
	while(T--)
	{
		MIN=MMAX;
		vector<pair<int,int> > v;
		cin>>n>>m; 
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='#')
					v.push_back(make_pair(i,j));
			}
		for(int i=0;i<v.size();i++)
		{
			for(int j=i;j<v.size();j++)
			{
				memset(vis,false,sizeof(vis));
				bfs(v[i].first,v[i].second,v[j].first,v[j].second);
			}
		}
		cout<<"Case "<<++times<<": "<<(MIN==MMAX?-1:MIN)<<endl;
	}
 	return 0;
}

