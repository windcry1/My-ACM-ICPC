#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[5001],b[5001];
    int dp[501][501];
    for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
		cin>>a[i];
    for(int i=1;i<=n;i++)
    {
    for(int j=m;j>0;j--)
	{ 
        if(a[i]<=j)
		dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+b[i]);
        else dp[i][j]=dp[i-1][j];
    }
	}
    cout<<dp[n][m]<<endl;
} 
