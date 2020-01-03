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
const int MMAX=2147483647;
const int mod=1e9+7;
int a[1001][1001];
int vis[1001];
int flag;
void dfs(int x,int count,int n)
{
	if(n==count)
	{
		flag=1;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i]&&a[x][i])
		{
			vis[i]=1;
			dfs(i,count+1,n);
			vis[i]=0;
		}
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t,x,y;
	cin>>n>>t;
	while(t--)
	{
		cin>>x>>y;
		a[x][y]=1;
	}
	for(int i=0;i<n;i++)
	{
		memset(vis,0,sizeof(vis));
		vis[i]=1;
		flag=0;
		dfs(i,1,n);
	}
	if(flag) cout<<"yes";
	else cout<<"no";
 	return 0;
}

