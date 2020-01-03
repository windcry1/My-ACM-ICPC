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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
char _map[35][35];
bool vis[35][35];
int n,m;
int res=0,MIN=MMAX;
struct node{
	int x,y;
	int step=0;
};
//ll power(ll a,ll b)
//{
//	ll res=1;
//    while(b)
//    {
//        if(b&1) res=res*a%mod;
//        b>>=1;
//        a=a*a%mod;
//    }
//    return res;
//}
void bfs(int x,int y)
{
	queue<node> q;
	node t;
	t.x=x;
	t.y=y;
	vis[x][y]=true;
	q.push(t);
	while(!q.empty())
	{
		node temp=q.front();
		q.pop();
		if(_map[temp.x][temp.y]=='e')
		{
			MIN=min(MIN,temp.step);
			res++;
			continue;
		}
		for(int i=0;i<4;i++)
		{
			int dx=temp.x+dir[i][0];
			int dy=temp.y+dir[i][1];
			if(!vis[dx][dy]&&dx>=0&&dx<n&&dy>=0&&dy<m&&_map[dx][dy]!='*')
			{
				vis[dx][dy]=true;
				t.x=dx;
				t.y=dy;
				t.step=temp.step+1;
				q.push(t);
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
	int startx,starty;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>_map[i][j];
			if(_map[i][j]=='k')
			{
				startx=i;
				starty=j;
			}
		}
	bfs(startx,starty);
	if(!res)
		cout<<"-1"<<endl;
	else cout<<res<<" "<<MIN<<endl;
 	return 0;
}

