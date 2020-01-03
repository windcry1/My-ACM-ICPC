/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/22/2019 11:33:14 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffffffffffff;
const ll INF=0xfffffffffffffff;
const int mod=1e9+7;
char s[200010];
ll dp[200010][2];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		memset(dp,0,sizeof dp);
		ll n,a,b;cin>>n>>a>>b;
		cin>>(s+1);
		dp[0][0]=b;
        dp[0][1]=b;
        dp[1][0]=a+2*b;
        dp[1][1]=2*a+3*b;
		for(int i=2;i<=n;i++)
		{
            if(s[i]=='1')
                dp[i][1]=dp[i-1][1]+a+2*b,dp[i][0]=dp[i][1];
            else
			{
                if(s[i-1]=='1') dp[i][0]=dp[i-1][0]+2*a+b;
                else dp[i][0]=min(dp[i-1][1]+2*a+b,dp[i-1][0]+a+b);
                dp[i][1]=min(dp[i-1][1]+a+2*b,dp[i-1][0]+2*a+2*b);
            }
        }
        cout<<dp[n][0]<<endl;
	}
	return 0;
}

