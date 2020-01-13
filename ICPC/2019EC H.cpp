/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
//#pragma GCC diagnostic error "-std=c++11"
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
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll a[200010],dp[200010];
int n,mod;
ll qmi(ll a,ll b,ll mod){
	ll res=1;
	while(b){
		if(b&1LL) res=res*a%mod;
		b>>=1;
		a=a*a%mod;
	}
	return res;
}
unordered_map<ll,int> mp;
int check(int x){
	unordered_map<int,int> p;
	int res=-1;
	for(int i=n;i>=1;i--){
		dp[i]=1;
		dp[i]=dp[p[a[i]*x%mod]]+1;
		p[a[i]]=i;
		res=max(res,dp[i]);
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		mp.clear();
		cin>>n>>mod;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n-1;i++) mp[a[i+1]*qmi(a[i],mod-2,mod)%mod]++;
		for(int i=1;i<=n-2;i++) mp[a[i+2]*qmi(a[i],mod-2,mod)%mod]++;
		int ans=-1;
		for(auto i:mp)
			if(i.second>=n/8) ans=max(ans,check(i.first));
		cout<<(ans*2>=n?ans:-1)<<endl;
	}
	return 0;
}


