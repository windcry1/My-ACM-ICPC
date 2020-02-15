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
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
vector<int> prime;
bool vis[1000010];
void get(){
	for(int i=2;i<=1000000;i++){
		if(!vis[i]) prime.push_back(i);
		for(int j=0;j<(int)prime.size() and i*prime[j]<=1000000;j++){
            vis[i*prime[j]] = true;
            if(i%prime[j]==0) break;
        }
	}
}
ll qmi(ll a,int b){
	ll res=1;
	while(b){
		if(b&1) res=res*a;
		b>>=1;
		a=a*a;
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	get();
	int T;cin>>T;while(T--){
		ll n;cin>>n;
		map<int,int> mp;
		int pos=0;
		for(int i=0;i<prime.size();i++){
			ll t=1LL*prime[i]*prime[i]*prime[i];
			if(n<t) break;
			while(n%t==0){
				n/=t;
				mp[i]++;
			}
			pos=i;
		}
		ll res=1;
		for(auto i:mp){
			res*=qmi(prime[i.first],i.second);
		}
		//cout<<res<<endl;
	}
	return 0;
}


