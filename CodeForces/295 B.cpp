/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/3/2019 6:13:35 PM
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
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll dp[510][510];
ll del[510];
ll ans[510];
int n;
void Floyd()
{
	for(int k=1;k<=n;k++)
	{
		ll K=del[k];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				ll I=del[i],J=del[j];
				dp[I][J]=min(dp[I][J],dp[I][K]+dp[K][J]);
				if(i<=k&&j<=k)
					ans[k]+=dp[I][J];
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>dp[i][j];
	for(int i=n;i>=1;i--)
		cin>>del[i];
	Floyd();
	for(int i=n;i>=1;i--)
		cout<<ans[i]<<(i==1?"\n":" ");
	return 0;
}

