#include<bits/stdc++.h>
#define int long long
using namespace std;
bool a[510][510];
bool vis[510];
int dp[510],du[510],n,m,A,B;
int pos=-1;
int dfs(int x){
	if(x==B) return dp[x]=1;
	if(dp[x]!=-1) return dp[x];
	dp[x]=0;
	for(int i=1;i<=n;i++)
		if(a[x][i])
			dp[x]+=dfs(i);
	return dp[x];
}
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int s1,s2;cin>>s1>>s2;
		du[s1]++;
		a[s1][s2]=true;
	}
	memset(dp,-1,sizeof dp);
	cin>>A>>B;
	cout<<dfs(A)<<" ";
	int cnt=0;
	for(int i=1;i<=n;i++) if(dp[i]==0) cnt++;
	cout<<(cnt==0?"Yes":"No")<<endl;
	return 0;
}
