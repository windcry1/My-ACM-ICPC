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
int n,m;
struct Tree {
    int l,r,mid,max;
}tree[100010<<2];
void build(int u, int l, int r) {
    tree[u].l=l,tree[u].r=r;
    tree[u].mid=(l+r)>>1;
    tree[u].max=-INF;
    if(l<r){
        build(ls,l,tree[u].mid);
        build(rs,tree[u].mid+1,r);
    }
}
void insert(int u, int pos, int x) {
    tree[u].max=max(tree[u].max,x);
    if(tree[u].l!=tree[u].r){
        if(pos<=tree[u].mid) insert(ls,pos,x);
        else insert(rs,pos,x);
    }
}
int query(int u, int l, int r) {
    if(l<=tree[u].l&&tree[u].r<=r)
        return tree[u].max;
    int maxx=-INF;
    if(l<=tree[u].mid) maxx=max(maxx,query(ls,l,r));
    if(tree[u].mid<r) maxx=max(maxx,query(rs,l,r));
    return maxx;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	build(1,1,n);
	for(int i=1,t;i<=n;i++) cin>>t,insert(1,i,t);
	for(int i=0;i<m;i++){
		int l,r;cin>>l>>r;
		cout<<query(1,l,r)<<endl;
	}
	return 0;
}


