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
const double INF = 1e9;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
pll c[200010];
vector<ll> s;
ll bit1[200010],bit2[200010];
void edit(ll *bit,int pos,ll val){
	for(int i=pos;i<=200000;i+=lowbit(i)) bit[i]+=val;
}
ll query(ll *bit,int pos){
	ll res=0;
	for(int i=pos;i;i-=lowbit(i)) res+=bit[i];
	return res;
}
ll getsum(ll *bit,int l,int r){
	return query(bit,r)-query(bit,l-1);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>c[i].first;
	for(int i=1;i<=n;i++) cin>>c[i].second,s.push_back(c[i].second);
	sort(ALL(s)); s.erase(unique(ALL(s)),s.end());
	for(int i=1;i<=n;i++) c[i].second=lower_bound(ALL(s),c[i].second)-s.begin()+1;
	sort(c+1,c+1+n);
	ll res=0;
	for(int i=1;i<=n;i++){
		res+=getsum(bit2,1,c[i].second)*c[i].first-getsum(bit1,1,c[i].second);
		edit(bit1,c[i].second,c[i].first);
		edit(bit2,c[i].second,1);
	}
	cout<<res<<endl;
	return 0;
}


