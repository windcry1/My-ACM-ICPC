/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/28/2019 3:25:24 PM
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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
char a[110][110];
bool vis[110][110];
int n,m;
struct node{
	int x,y,step;
	node(int q,int w,int e) : x(q),y(w),step(e){
	}
};
int bfs(int stx,int sty,int enx,int eny)
{
	vis[stx][sty]=true;
	queue<node> q;
	q.push(node(stx,sty,0));
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==enx&&t.y==eny)
			return t.step;
		for(int i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx<0||dy<0||dx>=n||dy>=m||vis[dx][dy]||a[dx][dy]=='#')
				continue;
			vis[dx][dy]=true;
			q.push(node(dx,dy,t.step+1));
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
	int T;
	cin>>T;
	while(T--)
	{
		memset(vis,false,sizeof vis);
		int stx,sty,enx,eny;
		cin>>n>>m;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='S')
					stx=i,sty=j;
				if(a[i][j]=='E')
					enx=i,eny=j;
			}
		cout<<bfs(stx,sty,enx,eny)<<endl;
	}
 	return 0;
}

