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
char a[110][110];
bool vis[110][110];
int n,m;
const int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node{
	int x,y;
}route[110][110];
void print(int x1,int y1,int x,int y)
{
	stack<node> s;
	node temp;
	temp.x=x1;temp.y=y1;
	s.push(temp);
	while(temp.x!=x || temp.y!=y)
	{
		node t;
		t.x=route[temp.x][temp.y].x;
		t.y=route[temp.x][temp.y].y;
		temp=t;
		s.push(t);
	}
	while(!s.empty())
	{
        cout<<"("<<s.top().x<<", "<<s.top().y<<")"<<endl;
        s.pop();
    }
}
bool bfs(int x,int y,int x1,int y1)
{
	vis[x][y]=true;
	queue<node> q;
	node temp;
	temp.x=x;temp.y=y;
	q.push(temp);
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		if(temp.x == x1 && temp.y == y1)
		{
			print(x1,y1,x,y);
			return true;
		}
		for(int i=0;i<4;i++)
		{
			int dx=temp.x+dir[i][0];
			int dy=temp.y+dir[i][1];
			node t;
			if(dx>=0&&dy>=0&&dx<n&&dy<m&&!vis[dx][dy]&&a[dx][dy]=='0')
			{
				t.x=dx;t.y=dy;
				vis[dx][dy]=true;
				route[dx][dy]=temp;
				q.push(t);
			}
		}
	}
	return false;
}
int main()
{
 	//ios::sync_with_stdio(false);
	//cin.tie(0);
    //cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m;
	//x£¬yÆðµã¡¢x1£¬y1ÖÕµã£» 
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	bfs(1,1,49,49);
 	return 0;
}

