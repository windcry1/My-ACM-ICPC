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
struct node{
	int x,y,z;
	int step;
};
bool vis[110][110][110];
int s,n,m;
bool bfs()
{
	queue<node> q;
	vis[s][0][0]=true;
	node t;
	t.x=s;
	t.y=0;
	t.z=0;
	t.step=0;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==s/2&&t.y==s/2||t.z==s/2&&t.x==s/2||t.y==s/2&&t.z==s/2)
		{
			cout<<t.step<<endl;
			return true;
		}
		if(t.y+t.z<=n&&!vis[t.x][t.y+t.z][0])
		{
			vis[t.x][t.y+t.z][0]=true;
			node r=t;
			r.x=t.x;r.y=t.y+t.z;r.z=0;r.step=t.step+1;
			q.push(r);
		}
		if(t.y+t.z>n&&!vis[t.x][n][t.y+t.z-n])
		{
			vis[t.x][t.y+t.z][0]=true;
			node r=t;
			r.x=t.x;r.y=n;r.z=t.y+t.z-n;r.step=t.step+1;
			q.push(r);
		}
		if(t.y+t.z<=m&&!vis[t.x][0][t.y+t.z])
		{
			vis[t.x][0][t.y+t.z]=true;
			node r=t;
			r.x=t.x;r.y=0;r.z=t.y+t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.y+t.z>m&&!vis[t.x][t.y+t.z-m][m])
		{
			vis[t.x][t.y+t.z-m][m]=true;
			node r=t;
			r.x=t.x;r.y=t.y+t.z-m;r.z=m;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.y<=s&&!vis[t.x+t.y][0][t.z])
		{
			vis[t.x+t.y][0][t.z]=true;
			node r=t;
			r.x=t.x+t.y;r.y=0;r.z=t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.y>s&&!vis[s][t.x+t.y-s][t.z])
		{
			vis[s][t.x+t.y-s][t.z]=true;
			node r=t;
			r.x=s;r.y=t.x+t.y-s;r.z=t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.y<=n&&!vis[0][t.x+t.y][t.z])
		{
			vis[0][t.x+t.y][t.z]=true;
			node r=t;
			r.x=0;r.y=t.x+t.y;r.z=t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.y>n&&!vis[t.x+t.y-n][n][t.z])
		{
			vis[t.x+t.y-n][n][t.z]=true;
			node r=t;
			r.x=t.x+t.y-n;r.y=n;r.z=t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.z<=m&&!vis[0][t.y][t.x+t.z])
		{
			vis[0][t.y][m]=true;
			node r=t;
			r.x=0;r.y=t.y;r.z=t.x+t.z;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.z>m&&!vis[t.x+t.z-m][t.y][m])
		{
			vis[t.x+t.z-m][t.y][m]=true;
			node r=t;
			r.x=t.x+t.z-m;r.y=t.y;r.z=m;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.z<=s&&!vis[t.x+t.z][t.y][0])
		{
			vis[t.x+t.z][t.y][0]=true;
			node r=t;
			r.x=t.x+t.z;r.y=t.y;r.z=0;r.step=t.step+1;
			q.push(r);
		}
		if(t.x+t.z>s&&!vis[s][t.y][t.x+t.z-s])
		{
			vis[s][t.y][t.x+t.z-s]=true;
			node r=t;
			r.x=s;r.y=t.y;r.z=t.x+t.z-s;r.step=t.step+1;
			q.push(r);
		}
		
	}
	return false;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>s>>n>>m&&s&&n&&m)
	{
		memset(vis,0,sizeof(vis)); 
		if(s%2==1||!bfs())
			cout<<"NO"<<endl;
	} 
 	return 0;
}

