/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/16/2019 10:58:04 PM
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
const int MAXN=1e5+10;
int n,a[MAXN<<3],b[MAXN],m,l,r,res[MAXN];
map<int,int> mp;
struct node{
	int l,r,sum;
}t[MAXN<<2]; 
inline void push_up(int p){
	t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
}
inline void build(int p,int l,int r){
	t[p].l=l; t[p].r=r;
	if(l==r)	return; int mid=l+r>>1;
	build(p<<1,l,mid);	build(p<<1|1,mid+1,r);
}
inline void change(int p,int x,int v){
	if(t[p].l==t[p].r){
		t[p].sum+=v; return ;
	}
	int mid=(t[p].l+t[p].r)>>1;
	if(x<=mid)	change(p<<1,x,v);
	else	change(p<<1|1,x,v);
	push_up(p);
}
inline int ask(int p){
	if(t[p].l==t[p].r)	return t[p].l;
	if(t[p<<1|1].sum>0)	return ask(p<<1|1);
	else	return ask(p<<1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],b[i]=a[i];
	int cnt=0;
	sort(b+1,b+1+n);
	m=unique(b+1,b+1+n)-b-1;
	for(int i=1;i<=m;i++)
	mp[b[i]]=++cnt;
	build(1,1,n);
	for(int i=1;i<=n;i++){
		a[i+n]=a[i+2*n]=a[i+3*n]=a[i];
		l=1;
	}
	for(int i=1;i<=n;i++){
		if(i==l){
			change(1,mp[a[i]],1);
			if(l==i) l++;
		} 
		while((l-i)<2*n&&b[ask(1)]<=a[l]*2){
			change(1,mp[a[l]],1);
			l++;
		}
		res[i]=(l-i==2*n?-1:l-i);
		change(1,mp[a[i]],-1);
	}
	for(int i=1;i<=n;i++)
		cout<<res[i]<<' ';
	return 0;
}

