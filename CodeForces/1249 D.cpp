/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/22/2019 11:09:27 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
const int N=2e5+10;
int res,n,m,k;
vector<int> v;
struct query{
	int l,r,id;
}q[N];
struct node{
	int l,r,mx,lazy;
}t[N<<2];
inline int cmp(query a,query b){
	return a.r==b.r?a.l>b.l:a.r<b.r;
}
inline void push_up(int p){
	t[p].mx=max(t[p<<1].mx,t[p<<1|1].mx);
}
inline void push_down(int p){
	if(t[p].lazy){
		t[p<<1].mx+=t[p].lazy; t[p<<1|1].mx+=t[p].lazy;
		t[p<<1].lazy+=t[p].lazy; t[p<<1|1].lazy+=t[p].lazy;
		t[p].lazy=0;
	}
}
void build(int p,int l,int r){
	t[p].l=l; t[p].r=r;
	if(l==r)	return ; int mid=l+r>>1;
	build(p<<1,l,mid);	build(p<<1|1,mid+1,r);
}
void change(int p,int l,int r,int v){
	if(t[p].l==l&&t[p].r==r){
		t[p].mx+=v;	t[p].lazy+=v;	return ;
	}
	push_down(p); int mid=t[p].l+t[p].r>>1;
	if(r<=mid)	change(p<<1,l,r,v);
	else if(l>mid)	change(p<<1|1,l,r,v);
	else	change(p<<1,l,mid,v),change(p<<1|1,mid+1,r,v);
	push_up(p);
}
int ask(int p,int l,int r){
	if(t[p].l==l&&t[p].r==r)	return t[p].mx;
	push_down(p);	int mid=t[p].l+t[p].r>>1;
	if(r<=mid)	return ask(p<<1,l,r);
	else if(l>mid)	return ask(p<<1|1,l,r);
	else	return max(ask(p<<1,l,mid),ask(p<<1|1,mid+1,r));	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k; 
	for(int i=1;i<=n;i++)
		cin>>q[i].l>>q[i].r,m=max(m,q[i].r),q[i].id=i;
	sort(q+1,q+1+n,cmp); build(1,1,m);
	for(int i=1;i<=n;i++){
		change(1,q[i].l,q[i].r,1);
		if(ask(1,q[i].l,q[i].r)<=k)	continue;
		res++; v.push_back(q[i].id);
		change(1,q[i].l,q[i].r,-1);
	}
	cout<<res<<endl;sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)	cout<<v[i]<<" ";
	return 0;
}

