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
int flag[1001];
int cou;
void dfs(int ori,int x,int n)
{
	if(cou==n)
	{
		flag[ori]=1;
		return;
	}
	for(int i=0;i<n;i++)
		if(!vis[i]&&a[x][i])
		{
			vis[i]=1;
			cou++;
			dfs(ori,i,n);
		}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		memset(flag,0,sizeof(flag));
		for(int i=0;i<n;i++)
		{
			memset(vis,0,sizeof(vis));
			vis[i]=1;
			cou=1;
			dfs(i,i,n);
		}
		for(int i=0;i<n;i++)
			if(flag[i])
				cout<<i;
	}
 	return 0;
}

