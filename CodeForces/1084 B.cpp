/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/14/2019 9:48:29 PM
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
const ll MMAX = 0x7fffffff;
const ll INF = 0xfffffff;
const ll mod = 1e9+7;
const ll N=5e5+10;
ll n,m,a[500010],d[500010],res[500010],vis[500010];
struct node{
	ll l,r,id;
}t[500010];
inline ll lowbit(ll x){
	return x&(-x);
}
ll cmp(const node a,const node b){
	return a.r<b.r;
}
inline void add(ll x,ll v){
	for(ll i=x;i<=n;i+=lowbit(i))	d[i]+=v;
}
inline ll ask(ll x){
	ll res=0;	for(ll i=x;i;i-=lowbit(i))	res+=d[i];	return res;
}
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	scanf("%lld %lld",&n,&m);	
	for(ll i=1;i<=n;i++)	scanf("%lld",&a[i]);
	for(ll i=1;i<=m;i++)	scanf("%lld %lld",&t[i].l,&t[i].r),t[i].id=i;
	sort(t+1,t+1+m,cmp);	ll nex=1;
	for(ll i=1;i<=m;i++){
		for(ll j=nex;j<=t[i].r;j++){
			if(vis[a[j]])	add(vis[a[j]],-a[j]);
			add(j,a[j]);	vis[a[j]]=j;
		}
		nex=t[i].r+1;
		res[t[i].id]=ask(t[i].r)-ask(t[i].l-1);
	}
	for(ll i=1;i<=m;i++)	printf("%lld\n",res[i]);
	return 0;
}

