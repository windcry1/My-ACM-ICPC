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
#define int long long 
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
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int sum,lazy;
}tree[100010<<2];
int a[100010];
void pushup(int u){
	tree[u].sum=tree[u<<1].sum+tree[u<<1|1].sum;
}
void build(int u,int l,int r){
	tree[u].lazy=0;
	if(l==r){
		tree[u].sum=a[l];
		return ;
	} 
	int mid=(l+r)>>1;
	build(u<<1,l,mid);
	build(u<<1|1,mid+1,r);
	pushup(u);
}
void pushdown(int u,int l,int r){
	if(tree[u].lazy){
		tree[u<<1].lazy=tree[u].lazy;
		tree[u<<1|1].lazy=tree[u].lazy;
		int mid=(l+r)>>1;
		tree[u<<1].sum=tree[u].lazy*(mid-l+1);
		tree[u<<1|1].sum=tree[u].lazy*(r-mid);
		tree[u].lazy=0;
	}
}
void update(int u,int l,int r,int L,int R,int add){
	if(L<=l and R>=r){
		tree[u].lazy=add;
		tree[u].sum=add*(r-l+1);
		return;
	}
	pushdown(u,l,r);
	int mid=(l+r)>>1;
	if(L<=mid) update(u<<1,l,mid,L,R,add);
	if(R>mid) update(u<<1|1,mid+1,r,L,R,add);
	pushup(u);
}
int query(int u,int l,int r,int L,int R){
	if(L<=l and R>=r) return tree[u].sum;
	pushdown(u,l,r);
	int mid=(l+r)>>1;
	int ans=0;
	if(L<=mid) ans+=query(u<<1,l,mid,L,R);
	if(R>mid) ans+=query(u<<1|1,mid+1,r,L,R);
	return ans;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		int n;cin>>n;for(int i=1;i<=n;i++) a[i]=1;
		build(1,1,n);
		int q;cin>>q;
		while(q--){
			int x,y,z;cin>>x>>y>>z;
			update(1,1,n,x,y,z);
		}
		cout<<"Case "<<cas<<": The total value of the hook is "<<query(1,1,n,1,n)<<".\n";
	}
    return 0;
}

