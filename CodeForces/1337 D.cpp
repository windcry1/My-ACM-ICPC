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
const ll INF = 7e18;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
const int N=10,M=10;
struct Dominate_tree1{
	int cnt,tot,n,m;
	int head[N<<1],pre[N<<1],to[M<<1],nex[M<<1],lat[M],cdy[M];
	int bel[M],val[M],sdom[M],idom[M],res[M];
	int dfn[M],id[M],fa[M];
	inline void add(int *head,int a,int b){
		to[++tot]=b; nex[tot]=head[a]; head[a]=tot;
	}
	void dfs(int x){
		dfn[x]=++cnt;	id[cnt]=x;
		for(int i=head[x];i;i=nex[i]){
			if(dfn[to[i]])	continue;
			dfs(to[i]);	fa[to[i]]=x;
		}
	}
	int find(int x){
		if(x==bel[x])	return x;
		int rt=find(bel[x]);
		if(dfn[sdom[val[bel[x]]]]<dfn[sdom[val[x]]])	val[x]=val[bel[x]];
		return bel[x]=rt;
	}
	void Tarjan(){
		for(int i=cnt;i>=2;i--){
			int x=id[i];
			for(int j=pre[x];j;j=nex[j]){
				if(!dfn[to[j]])	continue;
				find(to[j]);
				if(dfn[sdom[val[to[j]]]]<dfn[sdom[x]])	sdom[x]=sdom[val[to[j]]];
			}
			add(lat,sdom[x],x);	bel[x]=fa[x]; x=fa[x];
			for(int j=lat[x];j;j=nex[j]){
				find(to[j]);
				if(sdom[val[to[j]]]==x)	idom[to[j]]=x;
				else	idom[to[j]]=val[to[j]];
			}
			lat[x]=0;
		}
		for(int i=2,x;i<=cnt;i++){
			x=id[i];
			if(idom[x]!=sdom[x])	idom[x]=idom[idom[x]];
		}
	}
	void dfs_res(int x){
		res[x]=1;
		for(int i=cdy[x];i;i=nex[i]){
			dfs_res(to[i]);	res[x]+=res[to[i]];
		}
	}
	void work(){
		for(int i=1;i<=n;i++)	sdom[i]=bel[i]=val[i]=i;
		dfs(1);	Tarjan();	tot=0;
		for(int i=2;i<=n;i++)	if(idom[i])	add(cdy,idom[i],i);
		dfs_res(1);
	}
};
struct Dominate_tree2{
	int cnt,tot,n,m;
	int head[N<<1],pre[N<<1],to[M<<1],nex[M<<1],lat[M],cdy[M];
	int bel[M],val[M],sdom[M],idom[M],res[M];
	int dfn[M],id[M],fa[M];
	inline void add(int *head,int a,int b){
		to[++tot]=b; nex[tot]=head[a]; head[a]=tot;
	}
	void dfs(int x){
		dfn[x]=++cnt;	id[cnt]=x;
		for(int i=head[x];i;i=nex[i]){
			if(dfn[to[i]])	continue;
			dfs(to[i]);	fa[to[i]]=x;
		}
	}
	int find(int x){
		if(x==bel[x])	return x;
		int rt=find(bel[x]);
		if(dfn[sdom[val[bel[x]]]]<dfn[sdom[val[x]]])	val[x]=val[bel[x]];
		return bel[x]=rt;
	}
	void Tarjan(){
		for(int i=cnt;i>=2;i--){
			int x=id[i];
			for(int j=pre[x];j;j=nex[j]){
				if(!dfn[to[j]])	continue;
				find(to[j]);
				if(dfn[sdom[val[to[j]]]]<dfn[sdom[x]])	sdom[x]=sdom[val[to[j]]];
			}
			add(lat,sdom[x],x);	bel[x]=fa[x]; x=fa[x];
			for(int j=lat[x];j;j=nex[j]){
				find(to[j]);
				if(sdom[val[to[j]]]==x)	idom[to[j]]=x;
				else	idom[to[j]]=val[to[j]];
			}
			lat[x]=0;
		}
		for(int i=2,x;i<=cnt;i++){
			x=id[i];
			if(idom[x]!=sdom[x])	idom[x]=idom[idom[x]];
		}
	}
	void dfs_res(int x){
		res[x]=1;
		for(int i=cdy[x];i;i=nex[i]){
			dfs_res(to[i]);	res[x]+=res[to[i]];
		}
	}
	void work(){
		for(int i=1;i<=n;i++)	sdom[i]=bel[i]=val[i]=i;
		dfs(1);	Tarjan();	tot=0;
		for(int i=2;i<=n;i++)	if(idom[i])	add(cdy,idom[i],i);
		dfs_res(1);
	}
};
struct Dominate_tree3{
	int cnt,tot,n,m;
	int head[N<<1],pre[N<<1],to[M<<1],nex[M<<1],lat[M],cdy[M];
	int bel[M],val[M],sdom[M],idom[M],res[M];
	int dfn[M],id[M],fa[M];
	inline void add(int *head,int a,int b){
		to[++tot]=b; nex[tot]=head[a]; head[a]=tot;
	}
	void dfs(int x){
		dfn[x]=++cnt;	id[cnt]=x;
		for(int i=head[x];i;i=nex[i]){
			if(dfn[to[i]])	continue;
			dfs(to[i]);	fa[to[i]]=x;
		}
	}
	int find(int x){
		if(x==bel[x])	return x;
		int rt=find(bel[x]);
		if(dfn[sdom[val[bel[x]]]]<dfn[sdom[val[x]]])	val[x]=val[bel[x]];
		return bel[x]=rt;
	}
	void Tarjan(){
		for(int i=cnt;i>=2;i--){
			int x=id[i];
			for(int j=pre[x];j;j=nex[j]){
				if(!dfn[to[j]])	continue;
				find(to[j]);
				if(dfn[sdom[val[to[j]]]]<dfn[sdom[x]])	sdom[x]=sdom[val[to[j]]];
			}
			add(lat,sdom[x],x);	bel[x]=fa[x]; x=fa[x];
			for(int j=lat[x];j;j=nex[j]){
				find(to[j]);
				if(sdom[val[to[j]]]==x)	idom[to[j]]=x;
				else	idom[to[j]]=val[to[j]];
			}
			lat[x]=0;
		}
		for(int i=2,x;i<=cnt;i++){
			x=id[i];
			if(idom[x]!=sdom[x])	idom[x]=idom[idom[x]];
		}
	}
	void dfs_res(int x){
		res[x]=1;
		for(int i=cdy[x];i;i=nex[i]){
			dfs_res(to[i]);	res[x]+=res[to[i]];
		}
	}
	void work(){
		for(int i=1;i<=n;i++)	sdom[i]=bel[i]=val[i]=i;
		dfs(1);	Tarjan();	tot=0;
		for(int i=2;i<=n;i++)	if(idom[i])	add(cdy,idom[i],i);
		dfs_res(1);
	}
};
struct Dominate_tree4{
	int cnt,tot,n,m;
	int head[N<<1],pre[N<<1],to[M<<1],nex[M<<1],lat[M],cdy[M];
	int bel[M],val[M],sdom[M],idom[M],res[M];
	int dfn[M],id[M],fa[M];
	inline void add(int *head,int a,int b){
		to[++tot]=b; nex[tot]=head[a]; head[a]=tot;
	}
	void dfs(int x){
		dfn[x]=++cnt;	id[cnt]=x;
		for(int i=head[x];i;i=nex[i]){
			if(dfn[to[i]])	continue;
			dfs(to[i]);	fa[to[i]]=x;
		}
	}
	int find(int x){
		if(x==bel[x])	return x;
		int rt=find(bel[x]);
		if(dfn[sdom[val[bel[x]]]]<dfn[sdom[val[x]]])	val[x]=val[bel[x]];
		return bel[x]=rt;
	}
	void Tarjan(){
		for(int i=cnt;i>=2;i--){
			int x=id[i];
			for(int j=pre[x];j;j=nex[j]){
				if(!dfn[to[j]])	continue;
				find(to[j]);
				if(dfn[sdom[val[to[j]]]]<dfn[sdom[x]])	sdom[x]=sdom[val[to[j]]];
			}
			add(lat,sdom[x],x);	bel[x]=fa[x]; x=fa[x];
			for(int j=lat[x];j;j=nex[j]){
				find(to[j]);
				if(sdom[val[to[j]]]==x)	idom[to[j]]=x;
				else	idom[to[j]]=val[to[j]];
			}
			lat[x]=0;
		}
		for(int i=2,x;i<=cnt;i++){
			x=id[i];
			if(idom[x]!=sdom[x])	idom[x]=idom[idom[x]];
		}
	}
	void dfs_res(int x){
		res[x]=1;
		for(int i=cdy[x];i;i=nex[i]){
			dfs_res(to[i]);	res[x]+=res[to[i]];
		}
	}
	void work(){
		for(int i=1;i<=n;i++)	sdom[i]=bel[i]=val[i]=i;
		dfs(1);	Tarjan();	tot=0;
		for(int i=2;i<=n;i++)	if(idom[i])	add(cdy,idom[i],i);
		dfs_res(1);
	}
};
struct Dominate_tree5{
	int cnt,tot,n,m;
	int head[N<<1],pre[N<<1],to[M<<1],nex[M<<1],lat[M],cdy[M];
	int bel[M],val[M],sdom[M],idom[M],res[M];
	int dfn[M],id[M],fa[M];
	inline void add(int *head,int a,int b){
		to[++tot]=b; nex[tot]=head[a]; head[a]=tot;
	}
	void dfs(int x){
		dfn[x]=++cnt;	id[cnt]=x;
		for(int i=head[x];i;i=nex[i]){
			if(dfn[to[i]])	continue;
			dfs(to[i]);	fa[to[i]]=x;
		}
	}
	int find(int x){
		if(x==bel[x])	return x;
		int rt=find(bel[x]);
		if(dfn[sdom[val[bel[x]]]]<dfn[sdom[val[x]]])	val[x]=val[bel[x]];
		return bel[x]=rt;
	}
	void Tarjan(){
		for(int i=cnt;i>=2;i--){
			int x=id[i];
			for(int j=pre[x];j;j=nex[j]){
				if(!dfn[to[j]])	continue;
				find(to[j]);
				if(dfn[sdom[val[to[j]]]]<dfn[sdom[x]])	sdom[x]=sdom[val[to[j]]];
			}
			add(lat,sdom[x],x);	bel[x]=fa[x]; x=fa[x];
			for(int j=lat[x];j;j=nex[j]){
				find(to[j]);
				if(sdom[val[to[j]]]==x)	idom[to[j]]=x;
				else	idom[to[j]]=val[to[j]];
			}
			lat[x]=0;
		}
		for(int i=2,x;i<=cnt;i++){
			x=id[i];
			if(idom[x]!=sdom[x])	idom[x]=idom[idom[x]];
		}
	}
	void dfs_res(int x){
		res[x]=1;
		for(int i=cdy[x];i;i=nex[i]){
			dfs_res(to[i]);	res[x]+=res[to[i]];
		}
	}
	void work(){
		for(int i=1;i<=n;i++)	sdom[i]=bel[i]=val[i]=i;
		dfs(1);	Tarjan();	tot=0;
		for(int i=2;i<=n;i++)	if(idom[i])	add(cdy,idom[i],i);
		dfs_res(1);
	}
};
multiset<ll> sg,sb;
ll a[400010],b[400010],c[400010],e[400010],f[400010];
ll p(ll t){
	return t*t;
}
ll calc(ll x,ll y,ll z){
	if(abs(x)==2e9+10 or abs(y)==2e9+10 or abs(z)==2e9+10)	return 7e18;
	return p(x-y)+p(z-x)+p(z-y); 
}
void init(){
	sg.clear(),sb.clear();
	sg.insert(-2e9-10),sg.insert(2e9+10);
	sb.insert(-2e9-10),sb.insert(2e9+10);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		ll res=INF;
		int nr,ng,nb;cin>>nr>>ng>>nb; 
		init();
		for(int i=1;i<=nr;i++)	cin>>a[i];
		for(int i=1;i<=ng;i++)	cin>>b[i],sg.insert(b[i]);
		for(int i=1;i<=nb;i++)	cin>>c[i],sb.insert(c[i]);
		for(int i=1;i<=nr;i++){
			sg.insert(a[i]),sb.insert(a[i]);
			if(sg.count(a[i])>1)	e[1]=a[i];
			else e[1]=*(--sg.lower_bound(a[i]));
			e[2]=*(++sg.lower_bound(a[i]));
			if(sb.count(a[i])>1)	f[1]=a[i];
			else f[1]=*(--sb.lower_bound(a[i]));
			f[2]=*(++sb.lower_bound(a[i]));
			for(int j=1;j<=2;j++)	for(int k=1;k<=2;k++){
				res=min(res,calc(a[i],e[j],f[k]));
			}
			sg.erase(a[i]),sb.erase(a[i]);
		}
		init();
		for(int i=1;i<=nr;i++)	sg.insert(a[i]);
		for(int i=1;i<=nb;i++)	sb.insert(c[i]);
		for(int i=1;i<=ng;i++){
			sg.insert(b[i]),sb.insert(b[i]);
			if(sg.count(b[i])>1)	e[1]=b[i];
			else e[1]=*(--sg.lower_bound(b[i]));
			e[2]=*(++sg.lower_bound(b[i]));
			if(sb.count(b[i])>1)	f[1]=b[i];
			else f[1]=*(--sb.lower_bound(b[i]));
			f[2]=*(++sb.lower_bound(b[i]));
			for(int j=1;j<=2;j++)	for(int k=1;k<=2;k++){
				res=min(res,calc(b[i],e[j],f[k]));
			}
			sg.erase(b[i]),sb.erase(b[i]);
		}
		init();
		for(int i=1;i<=nr;i++)	sg.insert(a[i]);
		for(int i=1;i<=ng;i++)	sb.insert(b[i]);
		for(int i=1;i<=nb;i++){
			sg.insert(c[i]),sb.insert(c[i]);
			if(sg.count(c[i])>1)	e[1]=c[i];
			else e[1]=*(--sg.lower_bound(c[i]));
			e[2]=*(++sg.lower_bound(c[i]));
			if(sb.count(c[i])>1)	f[1]=c[i];
			else f[1]=*(--sb.lower_bound(c[i]));
			f[2]=*(++sb.lower_bound(c[i]));
			for(int j=1;j<=2;j++)	for(int k=1;k<=2;k++){
				res=min(res,calc(c[i],e[j],f[k]));
			}
			sg.erase(c[i]),sb.erase(c[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}


