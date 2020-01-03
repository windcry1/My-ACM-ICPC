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
int dp[1001][1001],num=0,n;
const int dir[4][2]={0,1,0,-1,1,0,-1,0};
void dfs(int x,int y)
{
	dp[x][y]=0;
	for(int i=1;i<=n;i++)
		if(dp[y][i])
			dfs(y,i);
	for(int i=1;i<=n;i++)
		if(dp[i][x])
			dfs(i,x);
}
int main()
{
 	while(cin>>n)
	{
		memset(dp,0,sizeof(dp));
		num=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>dp[i][j];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(dp[i][j])
				{
					num++;
					dfs(i,j);
					dfs(j,i);
				}
		cout<<num;
	}
 	return 0;
}

