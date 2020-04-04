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
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
map<int,int> mp;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int cnt=0;
	for(int i=2;i<=1000;i++){
		if(isprime(i)) mp[i]=++cnt;
		if(cnt==11) break;
	}
	int T;cin>>T;while(T--){
		int n;cin>>n;vector<int> v(n+1),res(n+1);
		int vis[12]={0};
		for(int i=1;i<=n;i++){
			cin>>v[i];
			for(auto j:mp){
				if(v[i]%j.first==0){
					res[i]=j.second;
					vis[j.second]=1;
					break;
				}
			}
		}
		int cnt=1;
		for(int i=1;i<=11;i++)
			if(vis[i]) vis[i]=cnt++;
		cout<<cnt-1<<endl;
		for(int i=1;i<=n;i++) cout<<vis[res[i]]<<" ";cout<<endl;
	}
	return 0;
}


