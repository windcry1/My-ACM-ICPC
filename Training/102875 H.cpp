#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=1e5+10,mod=128;
int n,m,dp[N]; map<string,int> mp;
string str;
inline void solve(){
	cin>>n>>m; mp.clear(); dp[0]=1;
	for(int i=1;i<=m;i++)	cin>>str,mp[str]++;
	cin>>str; str=" "+str;
	for(int i=1;i<=n;i++){
		dp[i]=0;
		for(int j=1;j<=5;j++){
			if(i-j+1<1) break;
			string tmp=str.substr(i-j+1,j);
			dp[i]=(dp[i]+dp[i-j]*mp[tmp]%mod)%mod;
		}
	}
	if(!dp[n]) puts("nonono");
	else if(dp[n]==1) puts("happymorsecode");
	else printf("puppymousecat %d\n",dp[n]);
}
signed main(){
	int T; cin>>T; while(T--) solve();
	return 0;
}

