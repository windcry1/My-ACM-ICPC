/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/20/2019 10:36:02 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int dir[4][2]={1,0,0,1,-1,0,0,-1};
int n,m,k,MAX;
int x1,x2,y1,y2;
char a[1010][1010];
bool vis[1010][1010];
struct node{
	int x,y,step;
};
queue<node> q;
int bfs()
{
	vis[x1][y1]=true;
	node t,p;
	t.x=x1;t.y=y1;t.step=0;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==x2&&t.y==y2)
			return t.step;
		for(int i=0;i<4;i++)
		{
			for(int j=1;j<=k;j++)
			{
				int dx=t.x+dir[i][0]*j,dy=t.y+dir[i][1]*j;
				if(dx<1||dx>n||dy<1||dy>m)
					break;
				if(a[dx][dy]=='#')
					break;
				if(!vis[dx][dy])
				{
					if(dx==x2&&dy==y2)
						return t.step+1;
					vis[dx][dy]=true;
					p.x=dx;p.y=dy;p.step=t.step+1;
					q.push(p);
				}
			}
		}
	}
	return -1;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	cin>>x1>>y1>>x2>>y2;
	cout<<bfs()<<endl;
 	return 0;
}

