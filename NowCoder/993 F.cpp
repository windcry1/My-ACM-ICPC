//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int a[1010][1010];
bool vis[1010][1010];
int x,y,n,MIN;
struct node{
	int x;
	int y;
	int step;
};
void bfs()
{
	vis[500][500]=true;
	queue<node> q;
	node t;
	t.x=500;t.y=500;t.step=0;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==x+500&&t.y==y+500)
		{
			MIN=t.step;
			return ;
		}
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<1000&&dy<1000&&!vis[dx][dy]&&!a[dx][dy])
			{
				vis[dx][dy]=true;
				node p;
				p.x=dx;p.y=dy;p.step=t.step+1;
				q.push(p);
			}
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
	cin>>x>>y>>n;
	int x1,y1;
	while(n--)
	{
		cin>>x1>>y1;
		a[x1+500][y1+500]=1;
	}
	bfs();
	cout<<MIN<<endl;
 	return 0;
}

