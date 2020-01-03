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
int dp1[110][110],val,dp2[110][110],dp[110][110],vis[110];
int MIN[110];
struct node{
	int x,y;
};
vector<node> ve;
void dfs1(int now,int n,int v,int num)
{
	int q=0;
	for(int i=1;i<=n;i++)
		if(!vis[i])
			q=1;
	if(!q)
	{
		if(v<MIN[num])
			MIN[num]=v;
		return;
	}
	for(int i=1;i<=n;i++)
		if(dp1[now][i]!=INF&&!vis[i])
		{
			vis[i]=1;
			dfs1(i,n,v+dp1[now][i],num+1);
			vis[i]=0;
		}
}
void dfs2(int now,int n,int v,int num)
{
	int q=0;
	for(int i=1;i<=n;i++)
		if(!vis[i])
			q=1;
	if(!q)
	{
		if(v<MIN[num])
			MIN[num]=v;
		return;
	}
	for(int i=1;i<=n;i++)
		if(dp2[now][i]!=INF&&!vis[i])
		{
			vis[i]=1;
			dfs2(i,n,v+dp2[now][i],num+1);
			vis[i]=0;
		}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,n,m,t1,t2,w,flag=0;
	char c;
	for(int i=0;i<110;i++)
			MIN[i]=MMAX;
	for(int i=0;i<110;i++)
	{
		for(int j=0;j<110;j++)
		{
			dp[i][j]=INF;
			dp1[i][j]=INF;
			dp2[i][j]=INF;
		}
	}
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			cin>>t1>>t2>>w>>c;
			if(c=='R'||c=='G')
			{
				if(dp1[t1][t2]>w)
				{
					dp1[t1][t2]=w;
					dp1[t1][t2]=w;
				}
			}
			if(c=='G'||c=='B')
			{
				if(dp2[t1][t2]>w)
				{
					dp2[t1][t2]=w;
					dp2[t1][t2]=w;
				}
			}
			if(dp[t1][t2]>w)
			{
				dp[t1][t2]=w;
				dp[t1][t2]=w;
			}
		}
		memset(vis,0,sizeof(vis));
		dfs1(1,n,0,0);
		memset(vis,0,sizeof(vis));
		dfs2(1,n,0,0);
		for(int i=0;i<=m;i++)
			cout<<MIN[i]<<endl;
	}
 	return 0;
}

