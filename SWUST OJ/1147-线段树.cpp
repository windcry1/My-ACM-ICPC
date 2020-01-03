/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/12/2019 1:06:59 AM
*************************************************************************/
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
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
const int MAXN=1e5+10; 
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
struct TREE {
    int l,r;
    ll sum;
    ll maxx;
} tree[MAXN<<2];
ll a[MAXN];
int n,m;
ll k; 
void pushup(int cur) {
    tree[cur].sum = tree[cur*2].sum + tree[cur*2+1].sum;
    tree[cur].maxx = max(tree[cur*2].maxx,tree[cur*2+1].maxx);
}
void build(int l,int r,int cur) {
    tree[cur].l = l,tree[cur].r = r;
    if(l == r) {
        tree[cur].sum = tree[cur].maxx = a[r];return ;
    }
    int m = (l+r)>>1;
    build(l,m,cur*2);
    build(m+1,r,cur*2+1);
    pushup(cur);
}
void update(int pl,int pr,ll val,int cur) {
    if(tree[cur].maxx < val) return ;
    if(tree[cur].l == tree[cur].r) {
        tree[cur].sum %=val;
        tree[cur].maxx %= val;
        return ;
    }
    if(pl <= tree[cur*2].r) update(pl,pr,val,cur*2);
    if(pr >= tree[cur*2+1].l) update(pl,pr,val,cur*2+1);
    pushup(cur);
}
void update2(int tar,ll val,int cur) {
    if(tree[cur].l == tree[cur].r) {
    	tree[cur].sum = tree[cur].maxx = tree[cur].sum+val;
        return ;
    }
    if(tar <= tree[cur*2].r) update2(tar,val,cur*2);
    if(tar >= tree[cur*2+1].l) update2(tar,val,cur*2+1);
    pushup(cur);
}
ll qSum(int pl,int pr,int cur) {
    if(pl <= tree[cur].l && pr >= tree[cur].r) return tree[cur].sum;
    ll res = 0;
    if(pl <= tree[cur*2].r) res += qSum(pl,pr,cur*2);
    if(pr >= tree[cur*2+1].l) res += qSum(pl,pr,cur*2+1);
    return res;
}
int main()
{
	int T;cin>>T;while(T--){
	    cin>>n>>k>>m;
	    for(int i = 1; i<=n; i++) cin>>a[i];
		    build(1,n,1);
		    while(m--) {
		        int op,u,v;
		        ll t;
		        scanf("%d",&op);
		        if(op == 3) {
		            scanf("%d%d",&u,&v);
		            printf("%lld\n",qSum(u,v,1));
		        }
		        if(op == 2) {
		            scanf("%d%d",&u,&v);
		            if(u>v) swap(u,v);
		            update(u,v,k,1);
		        }
		        if(op == 1) {
		            scanf("%d%lld",&u,&t);
		            update2(u,t,1);
		        }
		    }
	}
    return 0 ;
}
