//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
char a[1010][1010];
int dp[1010][1010];
int l[1010][1010],r[1010][1010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	while(cin>>T)
	{
		while(T--)
		{
			int n,m;
			cin>>n>>m;
			for(int i=0;i<=n;i++)
				for(int j=0;j<=m;j++)
					dp[i][j]=0;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
				{
					cin>>a[i][j];
					l[i][j]=j;
					r[i][j]=j;
				}
			for(int i=0;i<=n;i++)
			{
				l[i][0]=-1;
				r[i][0]=-1;
				l[i][m+1]=-1;
				r[i][m+1]=-1;
			}
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
				{
					if(a[i][j]=='R')dp[i][j]=0;
					else dp[i][j]=dp[i-1][j]+1;
				}
			int res=0;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
					while(dp[i][l[i][j]-1]>=dp[i][j]&&dp[i][j]!=0)
						l[i][j]=l[i][l[i][j]-1];
			for(int i=1;i<=n;i++)
				for(int j=m;j>=1;j--)
					while(dp[i][r[i][j]+1]>=dp[i][j]&&dp[i][j]!=0)
						r[i][j]=r[i][r[i][j]+1];
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
					res=max(res,dp[i][j]*(r[i][j]-l[i][j]+1));
			cout<<res*3<<endl;
		}
	}
 	return 0;
}

