/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/18/2019 11:56:24 AM
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
ll dp[2][2010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	while(cin>>n>>m)
	{
		int t=0;
		for(int i=0;i<=n+m;i++)
			dp[0][i]=0;
		dp[0][n]=1;
		for(int i=1;i<=(n+m)*2;i++)
		{
			t=!t;
			for(int j=0;j<=(n+m);j++)
				dp[t][j]=((j?dp[!t][j-1]:0)+(j<n+m?dp[!t][j+1]:0))%mod;
		}
		cout<<dp[t][n]<<endl;
	}
 	return 0;
}

