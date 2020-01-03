/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/23/2019 6:14:40 PM
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
ll a[300010],dp[300010][11];
ll n,m,k;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ll MAX=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			dp[i][j]=dp[i-1][j-1]+a[i];
		for(int j=1;j<=m;j++)
			if(dp[i][j]-k>MAX)
				MAX=dp[i][j]-k;
		dp[i][0]=max(dp[i][m]-k,0ll);
	}
	cout<<MAX<<endl;
 	return 0;
}

