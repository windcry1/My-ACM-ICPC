#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+5;
const int M = 1e3+5;
const int mod = 998244353;
 
int n,k,a[M];
int f[M][M],sumf[M][M];
int ans;
 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+n+1);
	a[0]=-1e5;
	f[0][0]=1;
	for(int i=0;i<=n;++i)sumf[i][0]=1;
	for(int t=1;t<=a[n]/(k-1);++t){
		for(int i=1;i<=n;++i)
		for(int j=1;j<=min(i,k);++j){
			int p=upper_bound(a,a+n+1,a[i]-t)-a-1;
			f[i][j]=sumf[p][j-1];
			sumf[i][j]=(f[i][j]+sumf[i-1][j])%mod;
		}
		(ans+=sumf[n][k])%=mod;
	}
	cout<<ans<<endl;
}
