/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/19/2019 11:01:51 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const ll INF = (1LL<<62)-1;
const int mod = 1e9+7;
ll a[300010],b[300010];
ll dp[300010][5];
ll ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
		ans = INF;
		for(int i=1;i<=n;i++)
			dp[i][0]=dp[i][1]=dp[i][2]=INF;
		dp[1][0]=0;dp[1][1]=b[1];dp[1][2]=2*dp[1][1];
		for(int i=1;i<=n;i++)
			for(int j=0;j<=2;j++)
				for(int k=0;k<=2;k++)
					if(k+a[i]!=a[i-1]+j)
						dp[i][k]=min(dp[i-1][j]+b[i]*k,dp[i][k]);
		for(int i=0;i<=2;i++) ans=min(dp[n][i],ans);
		cout<<ans<<endl;
	}
	return 0;
}

