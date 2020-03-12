/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
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
#include <numeric>
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
#define ls x<<1
#define rs x<<1|1
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
const ll mod = 998244353;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll fac[200010];
ll qmi(ll a,ll b,ll mod=998244353){
    ll res=1;
    while(b){
        if(b&1) res=res*a%mod;
        b>>=1;
        a=a*a%mod;
    }
    return res;
}
void Get_Fac(ll m){
    fac[0] = 1;
    for(int i=1; i<=m; i++)
        fac[i] = (fac[i-1]*i) % mod;
}
ll Lucas(ll n, ll m){
    ll ans = 1;
    while(n && m){
        ll a = n % mod;
        ll b = m % mod;
        if(a < b) return 0;
        ans = ((ans*fac[a]%mod)*(qmi(fac[b]*fac[a-b]%mod,mod-2,mod))) % mod;
        n /= mod;
        m /= mod;
    }
    return ans;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	ll n,m;cin>>n>>m;
	if(n==2) return cout<<0<<endl,0;
	Get_Fac(m+1);
	ll res=0;
	for(ll i=n-1;i<=m;i++){
		ll ans=i-1;
		ans=ans*Lucas(i-2,n-3)%mod*qmi(2,n-3)%mod;
		res=(res+ans)%mod;
	}
	cout<<res<<endl;
	return 0;
}


