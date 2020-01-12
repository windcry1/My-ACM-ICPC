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
#define int long long
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
const int mod = 998244353;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll f[100010],g[100010];
vector<ll> prime;
void getprime(ll n){
	prime.clear();
	for(ll i=2;i<=sqrt(n);i++)
		if(n%i==0) prime.push_back(i);
}
inline void end(){
	cout<<-1<<endl;
	exit(0);
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;ll k;cin>>n>>k;
	f[1]=1;cin>>g[1];
	for(int i=2;i<=n;i++) {
		cin>>g[i];
		getprime(i);
		if(prime.size()==0) {
			if(g[i]%k==0) f[i]=g[i]/k;
			else end();
		}
		ll tmp=0;
#ifdef WindCry1
	DEBUG(i);
	for(auto j:prime){
		cout<<j<<endl;
	}
#endif
		for(int j=0;j<(int)prime.size();j++){
			if(prime[j]*prime[j]!=i) tmp+=k*(k-1)%mod*f[prime[j]]%mod*f[i/prime[j]]%mod;
			else tmp+=k*(k-1)/2%mod*f[prime[j]]%mod*f[prime[j]]%mod;
			tmp%=mod;
		}
#ifdef WindCry1
	DEBUG(tmp);
#endif
		g[i]=(g[i]-tmp+mod)%mod;
		if(g[i]%k==0) f[i]=g[i]/k;
		else end();
	}
	for(int i=1;i<=n;i++) cout<<f[i]<<" ";
	cout<<endl;
	return 0;
}


