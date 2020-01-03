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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int dp[101][101];
int vis[101][101];
int flag;
void dfs(int x,int y)
{
	if(vis[x][y])
	{
		flag=1;
		return;
	}
	else
	{
		vis[x][y]=1;
		for(int i=0;i<100;i++)
			if(dp[y][i])
				dfs(y,i);
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	string s[101],a,b;
	int c,d;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>s[i];
	while(m--)
	{
		cin>>a>>b;
		for(int i=0;i<n;i++)
		{
			if(a==s[i])
			{
				c=i;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(b==s[i])
			{
				d=i;
				break;
			}
		}
		dp[c][d]=1;
	}
	flag=0;
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			memset(vis,0,sizeof(vis));
			if(dp[i][j])
				dfs(i,j);
		}
	}
	if(flag) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
 	return 0;
}

