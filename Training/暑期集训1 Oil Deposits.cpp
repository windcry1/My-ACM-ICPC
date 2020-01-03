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
const int dir[8][2]={-1,0,1,0,0,-1,0,1,1,1,-1,-1,1,-1,-1,1};
int n,m;
void bfs(int x,int y)
{
	queue<pair<int,int> > q;
	pair<int,int> pa;
	pa.first=x;
	pa.second=y;
	q.push(pa);
	vis[x][y]=true;
	while(!q.empty())
	{
		pair<int,int> t;
		t=q.front();
		q.pop();
		a[t.first][t.second]='.';
		for(int i=0;i<8;i++)
		{
			int dx=t.first+dir[i][0],dy=t.second+dir[i][1];
			if(dx<0||dy<0||dx>=n||dy>=m||vis[dx][dy]||a[dx][dy]!='@')
				continue;
			vis[dx][dy]=true;
			pa.first=dx;
			pa.second=dy;
			q.push(pa);
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

	while(cin>>n>>m&&n&&m)
	{
		memset(vis,false,sizeof(vis));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		int cnt=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]=='@')
				{
					cnt++;
					bfs(i,j);
				}
		cout<<cnt<<endl;
	}
 	return 0;
}

