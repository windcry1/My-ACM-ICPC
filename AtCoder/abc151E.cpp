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
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll fac[100010],a[100010];
ll quick_mod(ll a, ll b, ll c){
    ll ans = 1;
    while(b){
        if(b & 1) ans = (ans*a)%c;
        b>>=1;
        a = (a*a)%c;
    }
    return ans;
}
void Get_Fac(ll m){
    fac[0] = 1;
    for(int i=1; i<=m; i++)
        fac[i] = (fac[i-1]*i) % mod;
}
ll Lucas(ll n, ll m, ll p){
    ll ans = 1;
    if(n==0) return 0;
    while(n && m){
        ll a = n % p;
        ll b = m % p;
        if(a < b) return 0;
        ans = ( (ans*fac[a]%p) * (quick_mod(fac[b]*fac[a-b]%p,p-2,p)) ) % p;
        n /= p;
        m /= p;
    }
    return ans;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	Get_Fac(100001);
	ll n,k;cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	ll res=0;
	for(int i=1;i<=n;i++) res=(res+(Lucas(i-1,k-1,mod)-Lucas(n-i,k-1,mod)+mod)*a[i])%mod;
	cout<<res<<endl;
	return 0;
}


