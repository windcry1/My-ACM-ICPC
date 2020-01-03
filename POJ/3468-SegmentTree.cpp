/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/19/2019 6:52:36 PM
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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls(u) u<<1
#define rs(u) u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
ll a[100010];
struct Tree{
	int l,r;
	ll sum,lazy;
}tree[100010<<2];
void pushup(int u) {
    tree[u].sum=tree[ls(u)].sum+tree[rs(u)].sum;
}
void pushdown(int u) {
    tree[ls(u)].lazy+=tree[u].lazy;
    tree[rs(u)].lazy+=tree[u].lazy;
    tree[ls(u)].sum+=tree[u].lazy*(tree[ls(u)].r-tree[ls(u)].l+1);
    tree[rs(u)].sum+=tree[u].lazy*(tree[rs(u)].r-tree[rs(u)].l+1);
    tree[u].lazy = 0;
}
void build(int u,int l,int r) {
    tree[u].l=l;
    tree[u].r=r;
    tree[u].lazy=0;
    if(l==r){
        tree[u].sum=a[l];
        return ;
    }
    ll mid=(l+r)>>1;
    build(ls(u),l,mid);
    build(rs(u),mid+1,r);
    pushup(u);
}
void update(int u,int l,int r,ll num) {
    if(r<tree[u].l||l>tree[u].r) return;
    if(l<=tree[u].l&&r>=tree[u].r) {
        tree[u].lazy+=num;
        tree[u].sum+=num*(tree[u].r-tree[u].l+1);
        return ;
    }
    if(tree[u].lazy) pushdown(u);
    update(ls(u),l,r,num);
    update(rs(u),l,r,num);
    pushup(u);
}
ll query(int u,int l,int r) {
    if(l==tree[u].l&&r==tree[u].r) return tree[u].sum;
    if(tree[u].lazy) pushdown(u);
    int mid=(tree[u].l+tree[u].r)>>1;
    if(r<=mid) return query(ls(u),l,r);
    else if(l>mid) return query(rs(u),l,r);
    else return query(ls(u),l,mid)+query(rs(u),mid+1,r);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);
	while(m--){
		char op;cin>>op;
		if(op=='Q'){
			int l,r;cin>>l>>r;
			cout<<query(1,l,r)<<endl;
		}
		else {
			int l,r;ll data;cin>>l>>r>>data;
			update(1,l,r,data);
		}
	}
	return 0;
}

