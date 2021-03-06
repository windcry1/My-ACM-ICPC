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
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
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
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll cnt1[66][2],cnt2[66][2],cnt[66];
ll qmi(ll a,ll b){
	ll res=1;
	while(b){
		if(b&1LL) res=res*a%mod;
		b>>=1;
		a=a*a%mod;
	}
	return res;
}
void solve(ll x){
	x++;
	for(int i=0;i<62;i++){
		ll tmp=1LL<<(i+1);
		cnt[i]=x/tmp*(tmp>>1)+max(x%tmp-(tmp>>1),0LL);
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		ll l1,l2,r1,r2;cin>>l1>>r1>>l2>>r2;
		solve(l1-1);for(int i=0;i<62;i++) cnt1[i][0]=(mod-(l1-1-cnt[i])%mod)%mod,cnt1[i][1]=(mod-(cnt[i]%mod))%mod;
		solve(r1);for(int i=0;i<62;i++) cnt1[i][0]=(cnt1[i][0]+r1-cnt[i])%mod,cnt1[i][1]=(cnt1[i][1]+cnt[i])%mod;
		solve(l2-1);for(int i=0;i<62;i++) cnt2[i][0]=(mod-(l2-1-cnt[i])%mod)%mod,cnt2[i][1]=(mod-(cnt[i]%mod))%mod;
		solve(r2);for(int i=0;i<62;i++) cnt2[i][0]=(cnt2[i][0]+r2-cnt[i])%mod,cnt2[i][1]=(cnt2[i][1]+cnt[i])%mod;
		ll res=0;
		for(int i=0;i<62;i++)
			for(int j=0;j<=1;j++)
				res=(res+(1LL<<i)%mod*cnt1[i][j]%mod*cnt2[i][j^1]%mod)%mod;
		cout<<res*qmi((r1-l1+1)%mod*((r2-l2+1)%mod)%mod,mod-2)%mod<<endl;
	}
	return 0;
}


