/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 2:07:33 AM
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
int dp[410][410],dp1[410][410];
void init(int n)
{
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=INF;
			dp1[i][j]=INF;
		}
}
void Floyd(int n)
{
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]),dp1[i][j]=min(dp1[i][j],dp1[i][k]+dp1[k][j]);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,a,b;
	cin>>n>>m;
	init(n);
	while(m--)
	{
		cin>>a>>b;
		dp[a][b]=1;
		dp[b][a]=1;
	}
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			if(dp[i][j]!=1)
				dp1[i][j]=1,dp1[j][i]=1;
	Floyd(n);
	if(dp[1][n]!=INF&&dp1[1][n]!=INF)
		cout<<max(dp[1][n],dp1[1][n])<<endl;
	else cout<<-1<<endl;
 	return 0;
}

