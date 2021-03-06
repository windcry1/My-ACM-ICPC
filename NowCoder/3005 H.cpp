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
int n,color[500010],l[500010],r[500010];
ll bit[500010],L[500010],R[500010];
inline void edit(int pos,int val){
	for(int i=pos;i<=n;i+=lowbit(i)) bit[i]+=val;
}
inline ll query(int pos){
	ll res=0;
	for(int i=pos;i;i-=lowbit(i)) res+=bit[i];
	return res;
}
inline ll getsum(int l,int r){
	return query(r)-query(l-1);
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>color[i]>>l[i]>>r[i];
		R[color[i]]++;
	}
	for(int i=0;i<n;i++){
		R[color[i]]--;
		edit(color[i],L[color[i]]*R[color[i]]-getsum(color[i],color[i]));
		cout<<getsum(l[i],r[i])<<" ";
		L[color[i]]++;
		edit(color[i],L[color[i]]*R[color[i]]-getsum(color[i],color[i]));
	}
	return 0;
}


