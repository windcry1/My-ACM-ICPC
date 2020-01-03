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
int a[110][110];
int dp[110];
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(!n&&!m)
			return 0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				scanf("%d",&a[i][j]);
		//for(int i=1;i<cnt;i++)
		//	cout<<x[i].w<<" "<<x[i].v<<endl;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
			for(int j=m;j>=0;j--)
				for(int k=1;k<=j;k++)
					dp[j]=max(dp[j],dp[j-k]+a[i][k]);
		cout<<dp[m]<<endl;
	}
 	return 0;
}

