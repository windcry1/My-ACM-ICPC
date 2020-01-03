//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int dp[101][1001];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int w,n,a[1001];
	while(cin>>w>>n)
	{
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
			cin>>a[i];
		dp[0][w]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=w;j++)
			{
				if(dp[i-1][j]&&j-a[i]>=0)
					dp[i][j-a[i]]=1;
				if(dp[i-1][j])
				{
					dp[i][j]=1;
					if(j-a[i]>=0)
						dp[i][j-a[i]]=1;
				}
			}
		}
		if(dp[n][0])cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

