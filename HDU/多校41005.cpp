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
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
string s[100010];
ll fac[100010],inv[100010];
inline ll C(ll n,ll m){
  return fac[n]*inv[m]%mod*inv[n-m]%mod;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	fac[0]=1;inv[1]=1;
	for(int i=1;i<=100000;i++) fac[i]=fac[i-1]*i%mod;
    for(int i=2;i<=100000;i++) inv[i]=(mod-mod/i)*inv[mod%i]%mod;
    inv[0]=1; for(int i=1;i<=100000;i++) inv[i]=inv[i]*inv[i-1]%mod;
	int T;for(cin>>T;T--;){
		int n;cin>>n; 
		for(int i=1;i<=n;i++) cin>>s[i];
		int tt=n-1;
		for(int i=1;i<n;i++)
			if(s[i]==s[i+1]) --tt;
		ll res=1;
		for(int i=1;tt+1-i>=i;i++){
			res=(res+C(tt+1-i,i))%mod;
		}
		cout<<res<<endl;
	}
	return 0;
}


